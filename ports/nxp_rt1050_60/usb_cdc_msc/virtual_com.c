/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include "fsl_device_registers.h"
#include "clock_config.h"
#include "board.h"
#include "hal_wrapper.h"
#include <stdio.h>
#include <stdlib.h>

#include "usb_device_config.h"
#include "usb.h"
#include "usb_device.h"

#include "usb_device_class.h"
#include "usb_device_cdc_acm.h"
#include "usb_device_ch9.h"
#include "fsl_debug_console.h"
#include "ring_buffer.h"
#include "usb_device_descriptor.h"
#include "composite.h"
#include "hal_wrapper.h"

#include "lib/utils/interrupt_char.h"
#include "pendsv.h"

/*******************************************************************************
* Definitions
******************************************************************************/

/*******************************************************************************
* Variables
******************************************************************************/
extern usb_device_endpoint_struct_t g_cdcVcomDicEndpoints[];
uint8_t g_isVcpOpen;
volatile uint8_t g_isUsbHostOpen;

/* Line codinig of cdc device */
uint8_t s_lineCoding[LINE_CODING_SIZE] = {
    /* E.g. 0x00,0xC2,0x01,0x00 : 0x0001C200 is 115200 bits per second */
    (LINE_CODING_DTERATE >> 0U) & 0x000000FFU,
    (LINE_CODING_DTERATE >> 8U) & 0x000000FFU,
    (LINE_CODING_DTERATE >> 16U) & 0x000000FFU,
    (LINE_CODING_DTERATE >> 24U) & 0x000000FFU,
    LINE_CODING_CHARFORMAT,
    LINE_CODING_PARITYTYPE,
    LINE_CODING_DATABITS};

/* Abstract state of cdc device */
static uint8_t s_abstractState[COMM_FEATURE_DATA_SIZE] = {(STATUS_ABSTRACT_STATE >> 0U) & 0x00FFU,
                                                          (STATUS_ABSTRACT_STATE >> 8U) & 0x00FFU};

/* Country code of cdc device */
static uint8_t s_countryCode[COMM_FEATURE_DATA_SIZE] = {(COUNTRY_SETTING >> 0U) & 0x00FFU,
                                                        (COUNTRY_SETTING >> 8U) & 0x00FFU};

/* CDC ACM information */
USB_DATA_ALIGNMENT static usb_cdc_acm_info_t s_usbCdcAcmInfo = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 0, 0, 0, 0};
/* Data buffer for receiving and sending*/

#if VCP_RINGBLK_SIZE % 32 != 0
#error "buffer size must be multiples of 32!"
#endif

#if USB_DATA_ALIGN_SIZE < 32
#error "wrong USB align size"
#endif

#define USB_ALIGN	USB_DMA_NONINIT_DATA_ALIGN(USB_DATA_ALIGN_SIZE)

USB_ALIGN static uint8_t s_RecvBuf[VCP_INEPBUF_CNT][VCP_RINGBLK_SIZE];
USB_ALIGN static uint8_t s_SendBuf[VCP_OUTEPBUF_CNT][VCP_RINGBLK_SIZE];

ring_block_t s_txRB, s_rxRB;
uint8_t *s_pCurTxBuf, *s_pCurRxBuf;
uint8_t s_isTxIdle;
volatile static usb_device_composite_struct_t *g_deviceComposite;

// >>> openMV IDE related 
#include "usbdbg.h"
/*static*/ __IO uint8_t dev_is_connected = 0; // indicates if we are connected
/*static*/ __IO uint8_t debug_mode = 0; 
/*static*/ __IO uint32_t baudrate = 0;
/*static*/ uint32_t dbg_xfer_length=0;

#define ALIGN32 __ALIGNED(32)

ring_block_t s_omvRB;
USB_ALIGN static uint8_t s_omvTxBuf[8][VCP_RINGBLK_SIZE];

#define IDE_BAUDRATE_SLOW    (921600)
#define IDE_BAUDRATE_FAST    (12000000)
// <<<


/*******************************************************************************
* Code
******************************************************************************/

usb_status_t _Start_USB_VCOM_Write(class_handle_t handle)
{
	usb_status_t error = kStatus_USB_Error;
	uint32_t len;
	uint8_t txIdleBkup;
	uint32_t primask = __get_PRIMASK();
	__set_PRIMASK(1);	// must disable IRQ, otherwise a buffer can be sent 2 times
	/* User: add your own code for send complete event */
	len = RingBlk_GetOldestBlk(&s_txRB, &s_pCurTxBuf); 
	if (len > 0) {
		txIdleBkup = s_isTxIdle;
		s_isTxIdle = 0;
		error = USB_DeviceCdcAcmSend(handle, g_cfgFix.roCdcDicEpInNdx, s_pCurTxBuf, len);
		if (error != kStatus_USB_Success) {
			usb_echo("Failed to send in _Start_USB_VCOM_Write()\r\n");
			s_isTxIdle = txIdleBkup;
		} else
			RingBlk_FreeOldestBlk(&s_txRB, 0);	// no longer allow to continue to append data on this block
	}
	__set_PRIMASK(primask);
	return error;
}

static uint32_t last_packet = 0;

#define DBG_MAX_PACKET  (VCP_RINGBLK_SIZE)
static uint8_t dbg_xfer_buffer[DBG_MAX_PACKET] ;


__WEAK void usbdbg_data_in(void *buffer, int length){}
__WEAK void usbdbg_data_out(void * buffer, int length){}
__WEAK void usbdbg_control(void *buffer, uint8_t request, uint32_t length){}



static void send_packet(void) {
    int bytes = MIN(dbg_xfer_length, VCP_RINGBLK_SIZE);
    last_packet = bytes;
    usbdbg_data_in(dbg_xfer_buffer, bytes);
    dbg_xfer_length -= bytes;
	VCOM_Write(dbg_xfer_buffer, bytes);
}


uint32_t usbd_cdc_tx_buf_len(void) {
	return 0;
	// return RingBlk_GetFreeBytes(&s_txRB);
}
uint8_t *usbd_cdc_tx_buf(uint32_t bytes)
{
	return (uint8_t*) &s_rxRB;
}


void CheckVCOMConnect(void) {
	baudrate = *((uint32_t*)s_lineCoding);
	// The slow baudrate can be used on OSs that don't support custom baudrates
	if (baudrate == IDE_BAUDRATE_SLOW || baudrate == IDE_BAUDRATE_FAST) {
		debug_mode = 1;
		RingBlk_Init(&s_omvRB, s_omvTxBuf[0], VCP_RINGBLK_SIZE, sizeof(s_omvTxBuf) / VCP_RINGBLK_SIZE);
		g_isUsbHostOpen = 1;
		dbg_xfer_length = 0;
		usbdbg_connect();
		// UserTxBufPtrIn = UserTxBufPtrOut = UserTxBufPtrOutShadow = 0;
	} else {
		debug_mode = 0;
		// UserTxBufPtrIn = UserTxBufPtrOut = UserTxBufPtrOutShadow = 0;
	}	
}

/*!
 * @brief CDC class specific callback function.
 *
 * This function handles the CDC class specific requests.
 *
 * @param handle          The CDC ACM class handle.
 * @param event           The CDC ACM class event type.
 * @param param           The parameter of the class specific request.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
 /*static*/ uint8_t s_omvSendIsToContinue;
// #define HSRX
#ifdef HSRX

USB_ALIGN static uint8_t s_hsRx[VCP_RINGBLK_SIZE];
#endif

usb_status_t USB_DeviceCdcVcomCallback(class_handle_t handle, uint32_t event, void *param)
{
    usb_status_t error = kStatus_USB_Error;
    uint32_t len;
    uint16_t *uartBitmap;
    usb_cdc_acm_info_t *acmInfo = &s_usbCdcAcmInfo;
    usb_device_cdc_acm_request_param_struct_t *acmReqParam;
    usb_device_endpoint_callback_message_struct_t *epCbParam;
    acmReqParam = (usb_device_cdc_acm_request_param_struct_t *)param;
    epCbParam = (usb_device_endpoint_callback_message_struct_t *)param;
	/* test irq latency impact to other IRQs, shows it has no effect to higher priority irqs
	volatile uint32_t delay;
	for (delay=0; delay<10000; delay++) {}
	*/
    switch (event)
    {
        case kUSB_DeviceCdcEventSendResponse:
        {
            if ((epCbParam->length != 0) && (!(epCbParam->length % g_cdcVcomDicEndpoints[0].maxPacketSize)))
            {
                /* If the last packet is the size of endpoint, then send also zero-ended packet,
                 ** meaning that we want to inform the host that we do not have any additional
                 ** data, so it can flush the output.
                 */
                error = USB_DeviceCdcAcmSend(handle, g_cfgFix.roCdcDicEpInNdx, NULL, 0);
            }
            else if ((1 == g_deviceComposite->cdcVcom.attach) && (1 == g_deviceComposite->cdcVcom.startTransactions))
            {
                if ((epCbParam->buffer != NULL) || ((epCbParam->buffer == NULL) && (epCbParam->length == 0)))
                {
                    len = RingBlk_GetOldestBlk(&s_txRB, &s_pCurTxBuf); // now that oldest block has been sent, free it and get next oldest block
                    if (len > 0) {
						error = USB_DeviceCdcAcmSend(handle, g_cfgFix.roCdcDicEpInNdx, s_pCurTxBuf, len);
						if (error == kStatus_USB_Success)
							RingBlk_FreeOldestBlk(&s_txRB, 0);
						else {
							usb_echo("Failed to send in RingBlk_GetOldestBlk()\r\n");
						}
					} else
						s_isTxIdle = 1;
				} else {
                	s_isTxIdle = 1;	// all TX data is sent in this round
				}
            }
			// >>> openMV data resume
			if (s_omvSendIsToContinue) {
				if (dbg_xfer_length) {
					send_packet(); //prime tx buffer
				} else {
					s_omvSendIsToContinue = 0;
				}
			}
			// <<<
        }
        break;
        case kUSB_DeviceCdcEventRecvResponse:
        {
            if ((1 == g_deviceComposite->cdcVcom.attach) && (1 == g_deviceComposite->cdcVcom.startTransactions))
            {	g_isUsbHostOpen = 1;
				if (epCbParam->length != (uint32_t)-1L) {
					if (debug_mode == 0) 
					{
						if (mp_interrupt_char != -1 && epCbParam->length == 1 && 
						s_rxRB.pBlks[s_rxRB.wNdx * s_rxRB.blkSize] == mp_interrupt_char)
						{
							pendsv_kbd_intr();
							RingBlk_ReuseTakenBlk(&s_rxRB, &s_pCurRxBuf);
						} else {
							RingBlk_FixBlkFillCnt(&s_rxRB, epCbParam->length, &s_pCurRxBuf);
						}
						// provide USBD IP to receive next buffer
						if (s_pCurRxBuf)
							error = USB_DeviceCdcAcmRecv(handle, g_cfgFix.roCdcDicEpOutNdx, s_pCurRxBuf, VCP_RINGBLK_SIZE);
						else {
							usb_echo("VCOM receive buffer is overrun!\r\n");
						}
					} else {
						uint8_t Buf[VCP_RINGBLK_SIZE];
						uint32_t bytes;
					
					#ifdef HSRX
						bytes = epCbParam->length;
						memcpy(Buf, s_hsRx, bytes);
						
					#else
						// vcom conected to openMV IDE
						RingBlk_FixBlkFillCnt(&s_rxRB, epCbParam->length, &s_pCurRxBuf);
						// check if there is keyboard IRQ
						// provide USBD IP to receive next buffer
						bytes = RingBlk_Read1Blk(&s_rxRB, Buf, sizeof(Buf));
					#endif
					
						if (0 == bytes)
							printf("no data read!\r\n");
				        if (dbg_xfer_length) {
				            usbdbg_data_out(Buf, bytes);
				            dbg_xfer_length -= bytes;
				        } else if (Buf[0] == '\x30') { // command
				            uint8_t request = Buf[1];
				            dbg_xfer_length = *((uint32_t*)(Buf+2));
				            usbdbg_control(Buf+6, request, dbg_xfer_length);
				            if (dbg_xfer_length && (request & 0x80)) { //request has a device-to-host data phase
				                send_packet(); //prime tx buffer
				                if (dbg_xfer_length)
									s_omvSendIsToContinue = 1;
				            }
				        }
						
					#ifdef HSRX
						error = USB_DeviceCdcAcmRecv(handle, g_cfgFix.roCdcDicEpOutNdx, s_hsRx, VCP_RINGBLK_SIZE);	
					#else 
						if (s_pCurRxBuf)
							error = USB_DeviceCdcAcmRecv(handle, g_cfgFix.roCdcDicEpOutNdx, s_pCurRxBuf, VCP_RINGBLK_SIZE);		
					#endif	
					}

				}
            }
        }
        break;
        case kUSB_DeviceCdcEventSerialStateNotif:
            ((usb_device_cdc_acm_struct_t *)handle)->hasSentState = 0;
            error = kStatus_USB_Success;
			if (s_isTxIdle) {
				_Start_USB_VCOM_Write(g_deviceComposite->cdcVcom.cdcAcmHandle);
//				uint32_t cbFill;
//				cbFill = RingBlk_GetOldestBlk(&s_txRB, &s_pCurTxBuf);
//				if (cbFill) {
//					USB_DeviceCdcAcmSend(g_deviceComposite->cdcVcom.cdcAcmHandle, g_cfgFix.roCdcDicEpInNdx, s_pCurTxBuf, cbFill);
//				}
			}
            break;
        case kUSB_DeviceCdcEventSendEncapsulatedCommand:
            break;
        case kUSB_DeviceCdcEventGetEncapsulatedResponse:
            break;
        case kUSB_DeviceCdcEventSetCommFeature:
            if (USB_DEVICE_CDC_FEATURE_ABSTRACT_STATE == acmReqParam->setupValue)
            {
                if (1 == acmReqParam->isSetup)
                {
                    *(acmReqParam->buffer) = s_abstractState;
                }
                else
                {
                    *(acmReqParam->length) = 0;
                }
            }
            else if (USB_DEVICE_CDC_FEATURE_COUNTRY_SETTING == acmReqParam->setupValue)
            {
                if (1 == acmReqParam->isSetup)
                {
                    *(acmReqParam->buffer) = s_countryCode;
                }
                else
                {
                    *(acmReqParam->length) = 0;
                }
            }
            else
            {
            }
            error = kStatus_USB_Success;
            break;
        case kUSB_DeviceCdcEventGetCommFeature:
            if (USB_DEVICE_CDC_FEATURE_ABSTRACT_STATE == acmReqParam->setupValue)
            {
                *(acmReqParam->buffer) = s_abstractState;
                *(acmReqParam->length) = COMM_FEATURE_DATA_SIZE;
            }
            else if (USB_DEVICE_CDC_FEATURE_COUNTRY_SETTING == acmReqParam->setupValue)
            {
                *(acmReqParam->buffer) = s_countryCode;
                *(acmReqParam->length) = COMM_FEATURE_DATA_SIZE;
            }
            else
            {
            }
            error = kStatus_USB_Success;
            break;
        case kUSB_DeviceCdcEventClearCommFeature:
            break;
        case kUSB_DeviceCdcEventGetLineCoding:
			g_isUsbHostOpen = 1;
            *(acmReqParam->buffer) = s_lineCoding;
            *(acmReqParam->length) = LINE_CODING_SIZE;
			CheckVCOMConnect();	
            error = kStatus_USB_Success;
            break;
        case kUSB_DeviceCdcEventSetLineCoding:
        {   
			g_isUsbHostOpen = 1;
            if (1 == acmReqParam->isSetup)
            {
                *(acmReqParam->buffer) = s_lineCoding;
				CheckVCOMConnect();			
            }
            else
            {
                *(acmReqParam->length) = 0;
            }
        }
            error = kStatus_USB_Success;
            break;
        case kUSB_DeviceCdcEventSetControlLineState:
        {
			g_isUsbHostOpen = 0;
            s_usbCdcAcmInfo.dteStatus = acmReqParam->setupValue;
            /* activate/deactivate Tx carrier */
            if (acmInfo->dteStatus & USB_DEVICE_CDC_CONTROL_SIG_BITMAP_CARRIER_ACTIVATION)
            {
                acmInfo->uartState |= USB_DEVICE_CDC_UART_STATE_TX_CARRIER;
            }
            else
            {
                acmInfo->uartState &= (uint16_t)~USB_DEVICE_CDC_UART_STATE_TX_CARRIER;
            }

            /* activate carrier and DTE */
            if (acmInfo->dteStatus & USB_DEVICE_CDC_CONTROL_SIG_BITMAP_DTE_PRESENCE)
            {
                acmInfo->uartState |= USB_DEVICE_CDC_UART_STATE_RX_CARRIER;
				g_isUsbHostOpen = 1;
            }
            else
            {
                acmInfo->uartState &= (uint16_t)~USB_DEVICE_CDC_UART_STATE_RX_CARRIER;
				g_isUsbHostOpen = 0;
            }

            /* Indicates to DCE if DTE is present or not */
            acmInfo->dtePresent = (acmInfo->dteStatus & USB_DEVICE_CDC_CONTROL_SIG_BITMAP_DTE_PRESENCE) ? true : false;

            /* Initialize the serial state buffer */
            acmInfo->serialStateBuf[0] = NOTIF_REQUEST_TYPE;                /* bmRequestType */
            acmInfo->serialStateBuf[1] = USB_DEVICE_CDC_NOTIF_SERIAL_STATE; /* bNotification */
            acmInfo->serialStateBuf[2] = 0x00;                              /* wValue */
            acmInfo->serialStateBuf[3] = 0x00;
            acmInfo->serialStateBuf[4] = 0x00; /* wIndex */
            acmInfo->serialStateBuf[5] = 0x00;
            acmInfo->serialStateBuf[6] = UART_BITMAP_SIZE; /* wLength */
            acmInfo->serialStateBuf[7] = 0x00;
            /* Notifiy to host the line state */
            acmInfo->serialStateBuf[4] = acmReqParam->interfaceIndex;
            /* Lower byte of UART BITMAP */
            uartBitmap = (uint16_t *)&acmInfo->serialStateBuf[NOTIF_PACKET_SIZE + UART_BITMAP_SIZE - 2];
            *uartBitmap = acmInfo->uartState;
            len = (uint32_t)(NOTIF_PACKET_SIZE + UART_BITMAP_SIZE);
            if (0 == ((usb_device_cdc_acm_struct_t *)handle)->hasSentState)
            {
                error = USB_DeviceCdcAcmSend(handle, g_cfgFix.roCdcCicEpNdx, acmInfo->serialStateBuf, len);
                if (kStatus_USB_Success != error)
                {
                    usb_echo("kUSB_DeviceCdcEventSetControlLineState error!");
                }
                ((usb_device_cdc_acm_struct_t *)handle)->hasSentState = 1;
            }

            /* Update status */
			volatile uint32_t abc;
            if (acmInfo->dteStatus & USB_DEVICE_CDC_CONTROL_SIG_BITMAP_CARRIER_ACTIVATION)
            {
                /*  To do: CARRIER_ACTIVATED */
				usbdbg_disconnect();
				g_isUsbHostOpen = 0;
				debug_mode = 0;
            }
            else
            {
                /* To do: CARRIER_DEACTIVATED */
				abc = 0;
            }

			g_deviceComposite->cdcVcom.startTransactions = g_deviceComposite->cdcVcom.attach;
			#if 0
			// >>> currently we don't care DTE
			if (acmInfo->dteStatus & USB_DEVICE_CDC_CONTROL_SIG_BITMAP_DTE_PRESENCE)
            {
                /* DTE_ACTIVATED */
                if (1 == g_deviceComposite->cdcVcom.attach)
                {
                    g_deviceComposite->cdcVcom.startTransactions = 1;
                }
            }
            else
            {
                /* DTE_DEACTIVATED */
                if (1 == g_deviceComposite->cdcVcom.attach)
                {
                    g_deviceComposite->cdcVcom.startTransactions = 0;
                }
            }
			// <<<
			#endif
        }
        break;
        case kUSB_DeviceCdcEventSendBreak:
            break;
        default:
            break;
    }

    return error;
}

/*!
 * @brief Virtual COM device set configuration function.
 *
 * This function sets configuration for CDC class.
 *
 * @param handle The CDC ACM class handle.
 * @param configure The CDC ACM class configure index.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
usb_status_t USB_DeviceCdcVcomSetConfigure(class_handle_t handle, uint8_t configure)
{
    if (USB_COMPOSITE_CONFIGURE_INDEX == configure)
    {
        g_deviceComposite->cdcVcom.attach = 1;	
		#ifdef HSRX
		USB_DeviceCdcAcmRecv(g_deviceComposite->cdcVcom.cdcAcmHandle, g_cfgFix.roCdcDicEpOutNdx, s_hsRx, 64);
		#else
		/* Schedule buffer to receive */
		s_pCurRxBuf = RingBlk_GetTakenBlk(&s_rxRB);
		if (0 == s_pCurRxBuf)
			s_pCurRxBuf = RingBlk_TakeNextFreeBlk(&s_rxRB);
		USB_DeviceCdcAcmRecv(g_deviceComposite->cdcVcom.cdcAcmHandle, g_cfgFix.roCdcDicEpOutNdx, s_pCurRxBuf, VCP_RINGBLK_SIZE);
		#endif
		/* Schedule buffer to send */
//		if (s_isTxIdle) {
//		uint32_t cbFill;
//			cbFill = RingBlk_GetOldestBlk(&s_txRB, &s_pCurTxBuf);
//			if (cbFill) {
//				USB_DeviceCdcAcmSend(g_deviceComposite->cdcVcom.cdcAcmHandle, g_cfgFix.roCdcDicEpOutNdx, s_pCurTxBuf, cbFill);
//			}
//		}
		
    }
    return kStatus_USB_Success;
}

/*!
 * @brief Virtual COM device initialization function.
 *
 * This function initializes the device with the composite device class information.
 *
 * @param deviceComposite The pointer to the composite device structure.
 *
 * @return A USB error code or kStatus_USB_Success.
 */
usb_status_t USB_DeviceCdcVcomInit(usb_device_composite_struct_t *deviceComposite)
{
    g_deviceComposite = deviceComposite;
	RingBlk_Init(&s_txRB, s_SendBuf[0], VCP_RINGBLK_SIZE, VCP_OUTEPBUF_CNT);
	RingBlk_Init(&s_rxRB, s_RecvBuf[0], VCP_RINGBLK_SIZE, VCP_INEPBUF_CNT);

	s_isTxIdle = 1;
    return kStatus_USB_Success;
}
extern uint8_t g_isVcpOpen;
uint32_t VCOM_RxBufGetFilledBytes(void) {
	return RingBlk_GetUsedBytes(&s_rxRB);
}

int USBD_CDC_TxHalfEmpty(void) 
{
	return (RingBlk_GetFreeBlks(&s_txRB) >= RingBlk_GetUsedBlks(&s_txRB));
}


void VCOM_Open(void) {
	g_isVcpOpen = 1;
}

void VCOM_Close(void) {
	g_isVcpOpen = 0;
}

int VCOM_Read(uint8_t *buf, uint32_t len, uint32_t timeout) 
{
    // loop to read bytes
    int cbRead = 0;
	if (!g_isVcpOpen)
		return 0;
    while (cbRead < len) 
	{
        // Wait until we have at least 1 byte to read
        uint32_t start = HAL_GetTick();
        while (RingBlk_GetUsedBytes(&s_rxRB) == 0) {
            // Wraparound of tick is taken care of by 2's complement arithmetic.
            if (0 == timeout || HAL_GetTick() - start >= timeout) {
                // timeout
                return cbRead;
            }
            if (__get_PRIMASK()) {
                // IRQs disabled so buffer will never be filled; return immediately
                return cbRead;
            }
			HAL_WFI();
        }

        // Copy byte from device to user buffer
        cbRead += RingBlk_Read(&s_rxRB, buf, len - cbRead);
    }
	return cbRead;
}

volatile uint8_t s_isByPassWriteAlways;
void VCOM_WriteAlways(const uint8_t *buf, uint32_t len) {
	if (s_isByPassWriteAlways) {
		VCOM_Write(buf, len);
		return;
	}
	if (0 == len)
		goto cleanup;	
	int i;
	int retry = 0;
	if (!g_isUsbHostOpen)
		return;
    for (i = 0; i < len; ) {
		while (RingBlk_GetFreeBytes(&s_txRB) == 0) {
			HAL_WFI();
			if (retry++ >= 100) {
				s_isTxIdle = 1; // it seems some bug prevent from restoring s_isTxIdle
				goto cleanup;
			}
		}
		i += RingBlk_Write(&s_txRB, buf + i, len - i);
    }
	if (s_isTxIdle && g_deviceComposite->cdcVcom.attach) {
		_Start_USB_VCOM_Write(g_deviceComposite->cdcVcom.cdcAcmHandle);
	}
cleanup:
	return;
}

int VCOM_Write(const uint8_t *buf, uint32_t len) {
	int ret = 0;
	if (!g_isUsbHostOpen || len == 0)
		goto cleanup;
	ret = RingBlk_Write(&s_txRB, buf, len);
	if (ret && s_isTxIdle && g_deviceComposite->cdcVcom.attach) {
		_Start_USB_VCOM_Write(g_deviceComposite->cdcVcom.cdcAcmHandle);
	}
cleanup:
	return ret;
}

bool VCOM_IsTxIdle(void) {
	return s_isTxIdle ? 1 : 0;
}

bool VCOM_OmvIsIdeConnected(void)
{
	if (debug_mode)
		return 1;
	return 0;
}

void VCOM_OmvWriteAlways(const uint8_t *buf, uint32_t len) {
	int i;
	int retry = 0;
    for (i = 0; i < len; ) {
		while (RingBlk_GetFreeBytes(&s_omvRB) == 0) {
			HAL_WFI();
			if (retry++ >= 1/*100*/) {
				goto cleanup;
			}
		}
		i += RingBlk_Write(&s_omvRB, buf + i, len - i);
    }
cleanup:
	return;
}


uint32_t VCOM_OmvGetLogTxLen(void)
{
	return RingBlk_GetUsedBytes(&s_omvRB);
}
int VCOM_OmvReadLogTxBlk(uint8_t *pBuf, uint32_t bufSize) {
	int ret;
	ring_block_t rbBkup = s_omvRB;
tryread:
	ret = RingBlk_Read(&s_omvRB, pBuf, bufSize);
	if (ret < bufSize && rbBkup.cbTotUsed > ret) {
		s_omvRB = rbBkup;
		goto tryread;
	}
	return ret;
}

