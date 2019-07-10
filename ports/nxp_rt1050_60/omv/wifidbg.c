/* This file is part of the OpenMV project.
 * Copyright (c) 2013-2018 Ibrahim Abdelkader <iabdalkader@openmv.io> & Kwabena W. Agyeman <kwagyeman@openmv.io>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 */
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>
#include "winc.h"
#include "socket.h"
#include "mp.h"
#include "irq.h"
#include "lexer.h"
#include "parse.h"
#include "compile.h"
#include "runtime.h"
#include "stackctrl.h"
#include "usbdbg.h"
#include "sensor.h"
#include "framebuffer.h"
#include "omv_boardconfig.h"
#include "lib/utils/pyexec.h"
#include "wifidbg.h"
#include "unistd.h"
#include "fsl_debug_console.h"
#include "Ring_buffer.h"
#include "Fsl_pit.h"
#include "Fsl_qtmr.h"

#ifndef MIN
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#endif

#define OPENMVCAM_BROADCAST_ADDR ((uint8_t [5]){255, 255, 255, 255})
#define OPENMVCAM_BROADCAST_PORT (0xABD1)
#define SERVER_ADDR              ((uint8_t [5]){192, 168, 1, 1})
#define SERVER_PORT              (9000)
#define BUFFER_SIZE              (1024)

#define UDPCAST_STRING           "%d.%d.%d.%d:%d:%s"
#define UDPCAST_STRING_SIZE      4+4+4+4+6+WINC_MAX_BOARD_NAME_LEN+1

#define WIFI_DBG_USE_INT_LOOP 0
#define WIFI_DBG_USE_TIMER_LOOP 1

#define WIFIDBG_PIT_INTERVAL_US			(20000U)
#define WIFIDBG_PIT_TIMEOUT_5S_COUNT	(5*1000*1000/WIFIDBG_PIT_INTERVAL_US)
#define close_all_sockets()             \
    do {                                \
    	wifidbg_disable_connection_loop();	\
        winc_socket_close(server_fd);   \
        winc_socket_close(udpbcast_fd); \
        client_fd = -1;                 \
        server_fd = -1;                 \
        udpbcast_fd = -1;               \
        udpbcast_time = 0;				\
        wifidbg_ready = 0;				\
    } while (0);							\

#define close_server_socket()           \
    do {                                \
        winc_socket_close(server_fd);   \
        server_fd = -1;                 \
    } while (0)

#define close_udpbcast_socket()         \
    do {                                \
        winc_socket_close(udpbcast_fd); \
        udpbcast_fd = -1;               \
    } while (0)

#define TIMEDOUT(x) (x == -ETIMEDOUT || x == SOCK_ERR_TIMEOUT)

static int client_fd = -1;
static int server_fd = -1;
static int udpbcast_fd = -1;
static int udpbcast_time = 0;
static uint8_t ip_addr[WINC_IP_ADDR_LEN] = {0x0};
static char udpbcast_string[UDPCAST_STRING_SIZE] = {0x0};
static winc_socket_buf_t sockbuf;

#define WIFI_DBG_BUF_SIZE  256
#define WIFI_DBG_BUF_CNT	4
static uint8_t s_SendBuf[WIFI_DBG_BUF_CNT][WIFI_DBG_BUF_SIZE];

static ring_block_t s_txRB;
static uint8_t *s_pCurTxBuf, *s_pCurRxBuf;
static bool wifidbg_ready = false;
static bool wifidbg_ap_connected = false;
void wifidbg_disable_connection_loop();
void wifidbg_enable_connection_loop();	
void wifidbg_init_pit_timer_for_connection_loop();
int wifidbg_init(wifidbg_config_t *config)
{
    client_fd = -1;
    server_fd = -1;
    udpbcast_fd = -1;
	wifidbg_ap_connected = false;
    if(!config->mode) { // STA Mode

        // Initialize WiFi in STA mode.
        if (winc_init(WINC_MODE_STA) != 0) {
            return -1;
        }

        // Connect to network.
        if (winc_connect(config->client_ssid,
                         config->client_security,
                         config->client_key,
                         config->client_channel) != 0) {
            PRINTF("[WIFI DBG] Can't connect with AP:%s\r\n",config->client_ssid);
            return -2;
        }

        winc_ifconfig_t ifconfig;

        if (winc_ifconfig(&ifconfig) < 0) {
            return -3;
        }
		PRINTF("Connected with %s \r\n",config->client_ssid);
        memcpy(ip_addr, ifconfig.ip_addr, WINC_IP_ADDR_LEN);
        wifidbg_ap_connected = true;

    } else { // AP Mode

        // Initialize WiFi in AP mode.
        if (winc_init(WINC_MODE_AP) != 0) {
            return -1;
        }

        // Start WiFi in AP mode.
        if (winc_start_ap(config->access_point_ssid,
                          config->access_point_security,
                          config->access_point_key,
                          config->access_point_channel) != 0) {
            return -2;
        }

        memcpy(ip_addr, SERVER_ADDR, WINC_IP_ADDR_LEN);
        wifidbg_ap_connected = true;
    }

    snprintf(udpbcast_string, UDPCAST_STRING_SIZE, UDPCAST_STRING,
             ip_addr[0], ip_addr[1], ip_addr[2], ip_addr[3],
             SERVER_PORT, config->board_name);

	RingBlk_Init(&s_txRB, s_SendBuf[0], WIFI_DBG_BUF_SIZE, WIFI_DBG_BUF_CNT);


    return 0;
}

void wifidbg_enter_dbg_mode(void)
{
	winc_enter_dbg_mode();
}

bool wifidbg_AP_connected(void)
{
	return wifidbg_ap_connected;
}

void wifidbg_FlushTxBuffer(void)
{
	RingBlk_Init(&s_txRB, s_SendBuf[0], WIFI_DBG_BUF_SIZE, WIFI_DBG_BUF_CNT);
}

uint32_t wifidbg_TxBufGetFilledBytes(void) {
	return RingBlk_GetUsedBytes(&s_txRB);
}

void wifidbg_TxBufWrite(const uint8_t *buf, uint32_t len)
{
	int i;
	int retry = 0;
	int rt;
    for (i = 0; i < len; ) {
#if 1
		if(RingBlk_GetFreeBytes(&s_txRB) == 0)
			return;
#else		
		while (RingBlk_GetFreeBytes(&s_txRB) == 0) {
			__WFI();
			if (retry++ >= 10) {
				//s_isTxIdle = 1; // it seems some bug prevent from restoring s_isTxIdle
				break;
			}
		}
#endif
		rt = RingBlk_Write(&s_txRB, buf, len - i);
		if(rt)
			i += rt;
		else
			return;
    }

}

int wifidbg_ReadLogTxBlk(uint8_t *pBuf, uint32_t bufSize) {
	int ret;
	ring_block_t rbBkup = s_txRB;
tryread:
	ret = RingBlk_Read(&s_txRB, pBuf, bufSize);
	if (ret < bufSize && rbBkup.cbTotUsed > ret) {
		s_txRB = rbBkup;
		goto tryread;
	}
	return ret;
}


void wifidbg_send_strn(const char *str, size_t len)
{
	if ((!wifidbg_ready) || (wifidbg_isconnected() == 0))
		return;

	wifidbg_TxBufWrite((const uint8_t *)str,len);
}

bool wifidbg_isconnected()
{	
	if ((client_fd >=0) && (server_fd >=0))
		return 1;

	return 0;
}

int wifidbg_connect_IDE()
{
	int ret;
    uint8_t buf[BUFFER_SIZE];
	
    sockaddr client_sockaddr,udpbcast_sockaddr,server_sockaddr;

	if (winc_isconnected() == 0)
	{
		wifidbg_ap_connected = false;
		PRINTF("Disconnected with AP...\r\n");
		return -1;
	}
	
    if ((client_fd < 0) && (udpbcast_fd < 0)) {
        // Create broadcast socket.
        make_sockaddr(&udpbcast_sockaddr, OPENMVCAM_BROADCAST_ADDR, OPENMVCAM_BROADCAST_PORT);

        if ((udpbcast_fd = winc_socket_socket(SOCK_DGRAM)) < 0) {
            return -1;
        }

        if ((ret = winc_socket_bind(udpbcast_fd, &udpbcast_sockaddr)) < 0) {
            close_udpbcast_socket();
            return -1;
        }

        return -1;
    }

    if ((client_fd < 0) && (udpbcast_fd >= 0) && (udpbcast_time<256)) {
		uint8_t board_cast_addr[4] = {192,168,43,229}; 
        // Broadcast message to the IDE.
		memcpy(board_cast_addr, ip_addr,4);
		board_cast_addr[3] = udpbcast_time % 256;
        //make_sockaddr(&udpbcast_sockaddr, OPENMVCAM_BROADCAST_ADDR, OPENMVCAM_BROADCAST_PORT);
		make_sockaddr(&udpbcast_sockaddr, board_cast_addr, OPENMVCAM_BROADCAST_PORT);
		
		for(int j=0;j<5;j++) {
			if ((ret = winc_socket_sendto(udpbcast_fd, (uint8_t *) udpbcast_string,
							strlen(udpbcast_string) + 1, &udpbcast_sockaddr, 500)) < 0) {
				close_udpbcast_socket();
				return -1;
			}
			mp_hal_delay_ms(5);
		}
		udpbcast_time ++;
        return -1;
    }

    if (server_fd < 0) {
        // Create server socket
        make_sockaddr(&server_sockaddr, ip_addr, SERVER_PORT);

        if ((server_fd = winc_socket_socket(SOCK_STREAM)) < 0) {
            return -1;
        }

        if ((ret = winc_socket_bind(server_fd, &server_sockaddr)) < 0) {
            close_all_sockets();
            return -1;
        }

        if ((ret = winc_socket_listen(server_fd, 1)) < 0) {
            close_all_sockets();
            return -1;
        }

        return 0;
    }

    if (client_fd < 0) {
        sockbuf.size = sockbuf.idx = 0;
        // Call accept.
        if ((ret = winc_socket_accept(server_fd,
                        &client_sockaddr, &client_fd, 10)) < 0) {
							
			udpbcast_time = 0;
            if (TIMEDOUT(ret)) {
                client_fd = -1;
                return 0;
            } else {
                close_all_sockets();
                return -1;
            }
            
        }
        udpbcast_time = 0;
		wifidbg_ready = true;
		wifidbg_enable_connection_loop();		
    }

    return 0;
}

int wifidbg_dispatch()
{
    int ret;
	int bytes;
    static uint8_t buf[BUFFER_SIZE];
	static uint8_t request = 0;
	static uint32_t xfer_length = 0;
	uint8_t md;
    sockaddr client_sockaddr,udpbcast_sockaddr,server_sockaddr;
    static uint32_t dbg_tx_len =0;
    static uint32_t dbg_tx_rt =0;

	if (client_fd < 0)
		return -1;

	
	if ((sockbuf.size == 0)&&(winc_socket_has_rev(client_fd) == 0)){
		return -1;
	}
	M8266_DBG_IO_Write(0,1);
rx_loop:
	if(!xfer_length)
	{//new cmd from IDE	
		//M8266_DBG_IO_Toggle(0);
		if ((ret = winc_socket_recv_in_int(client_fd, buf, 6, &sockbuf, 100,&md)) < 0) {
			if (TIMEDOUT(ret)) {
				M8266_DBG_IO_Write(0,0);
				return -1;
			} else {
				close_all_sockets();
				M8266_DBG_IO_Write(0,0);
				return -2;
			}
		}

		if (ret != 6 || buf[0] != 0x30) {
			M8266_DBG_IO_Write(0,0);
			return -1;
		}
		//M8266_DBG_IO_Toggle(0);
		request = buf[1];
		xfer_length = *((uint32_t*)(buf+2));
		usbdbg_control(buf+6, request, xfer_length);
		
		
	}
	//PRINTF("request:0x%x,cmd len:%d\r\n",request,xfer_length);

    while (xfer_length>0) {
        if (request & 0x80) {
            // Device-to-host data phase
            bytes = MIN(xfer_length, BUFFER_SIZE);
            M8266_DBG_IO_Toggle(2);
			wifidbg_data_in(buf, bytes);
			
		#if 1
			if ((ret = winc_socket_sendblock_in_int(client_fd, (uint8_t *)buf,bytes, 100)) < 0) {
                	close_all_sockets();
					M8266_DBG_IO_Write(0,0);
                	M8266_DBG_IO_Toggle(1);
                	return -2;
            }
			xfer_length -= ret;
			
		#else
			ret = 0;
			while(bytes)
			{
				//if ((ret = winc_socket_send_in_int(client_fd, (uint8_t *)(buf + ret), bytes, 100)) < 0) {
            	if ((ret = winc_socket_send_in_int(client_fd, (uint8_t *)(buf + ret), bytes, 100)) < 0) {
                	close_all_sockets();
                	M8266_DBG_IO_Write(0,0);
                	M8266_DBG_IO_Toggle(1);
                	return -2;
            	}
            	
	            if(ret != bytes)
	            {
					mp_hal_delay_us(100);
	            	
	            }

	            bytes -= ret;
            }
            xfer_length -= ret;
       #endif     
			
            //PRINTF("Socket sent:%d,%d\r\n",bytes,ret);
        }
        else {
			
			if ((sockbuf.size == 0) && (winc_socket_has_rev(client_fd) == 0)){
				M8266_DBG_IO_Write(0,0);
				return -1;
			}
			//M8266_DBG_IO_Toggle(1);
			// Host-to-device data phase
			md = 0;
			do{
	            int bytes = MIN(xfer_length, BUFFER_SIZE);
	            if ((ret = winc_socket_recv_in_int(client_fd, buf, xfer_length, &sockbuf, 200,&md)) < 0) {
	                //close_all_sockets();
	                M8266_DBG_IO_Write(0,0);
	                return -1;
	            }
	            xfer_length -= ret;
				
				wifidbg_data_out(buf, ret);
			}while(md);
            //M8266_DBG_IO_Toggle(1);
        }
    }

//    if((sockbuf.size!= 0) || (winc_socket_rev(client_fd) >0))
//    	goto rx_loop;

	M8266_DBG_IO_Write(0,0);
    return 0;
}

int wifidbg_dispatch_handler()
{
	if (winc_get_none_spi_int_flag())
    {
    	winc_write_spi_int_flag(1);
    	return -1;
    }

    return wifidbg_dispatch();
}

void wifidbg_start_rev_io_irq_timeout()
{
	qtmr_config_t qtmrConfig;
	
	QTMR_GetDefaultConfig(&qtmrConfig);
    /* Use IP bus clock div by 128 */
    qtmrConfig.primarySource = kQTMR_ClockDivide_128;

    QTMR_Init(TMR3, kQTMR_Channel_0, &qtmrConfig);

    /* Set timer period to be 50 millisecond */
    QTMR_SetTimerPeriod(TMR3, kQTMR_Channel_0, MSEC_TO_COUNT(15000U, (CLOCK_GetFreq(kCLOCK_IpgClk) / 128)));

    /* Enable at the NVIC */
    EnableIRQ(TMR3_IRQn);
    
    /* Enable timer compare interrupt */
    QTMR_EnableInterrupts(TMR3, kQTMR_Channel_0,kQTMR_CompareInterruptEnable);

    /* Start the second channel to count on rising edge of the primary source clock */
    //QTMR_StartTimer(TMR3, kQTMR_Channel_0,kQTMR_PriSrcRiseEdge);
}

void TMR3_IRQHandler(void)
{
	QTMR_ClearStatusFlags(TMR3, kQTMR_Channel_0, kQTMR_CompareFlag);
	//PRINTF("5 sec no data from IDE, disconnect...\r\n");
	//close_all_sockets();
}

void wifidbg_int_handler(void)
{
	
	M8266_Clear_REV_INT_Flags();
	

	wifidbg_dispatch_handler();

	QTMR_StopTimer(TMR3, kQTMR_Channel_0);
	QTMR_SetTimerPeriod(TMR3, kQTMR_Channel_0, MSEC_TO_COUNT(5000U, (CLOCK_GetFreq(kCLOCK_IpgClk) / 128)));
	QTMR_StartTimer(TMR3, kQTMR_Channel_0,kQTMR_PriSrcRiseEdge);

}
void PIT_IRQHandler(void)
{
	static uint32_t wd_count = 0;
	int ret = 0;
	//M8266_DBG_IO_Toggle(0);
	
    /* Clear interrupt flag.*/
    PIT_ClearStatusFlags(PIT, kPIT_Chnl_0, kPIT_TimerFlag);

    ret = wifidbg_dispatch_handler();
    if (ret < 0)
    	wd_count ++;
    else 
    	wd_count = 0;

    if ((wd_count >= WIFIDBG_PIT_TIMEOUT_5S_COUNT) || (ret == -2))//5 sec no data from IDE,disconnect
    {
    	PRINTF("6 sec no data from IDE, disconnect...\r\n");
    	//if (winc_socket_is_connected() == 0)
    	{
    		close_all_sockets();
    		if(usbdbg_script_running())
    		{
    			mp_obj_exception_clear_traceback(MP_STATE_PORT(omv_ide_irq));
            	pendsv_nlr_jump_hard(MP_STATE_PORT(omv_ide_irq));
            }
    	}
    		
    }
    __DSB();

    //M8266_DBG_IO_Toggle(0);
}

void wifidbg_init_pit_timer_for_connection_loop()
{
	pit_config_t pitConfig;

	/* Set PERCLK_CLK source to OSC_CLK*/
    CLOCK_SetMux(kCLOCK_PerclkMux, 1U);
    /* Set PERCLK_CLK divider to 1 */
    CLOCK_SetDiv(kCLOCK_PerclkDiv, 0U);
    
    CLOCK_EnableClock(kCLOCK_Pit);
    
	PIT_GetDefaultConfig(&pitConfig);

    /* Init pit module */
    PIT_Init(PIT, &pitConfig);

    /* Set timer period for channel 0 */
    PIT_SetTimerPeriod(PIT, kPIT_Chnl_0, USEC_TO_COUNT(WIFIDBG_PIT_INTERVAL_US, CLOCK_GetFreq(kCLOCK_OscClk)));

    /* Enable timer interrupts for channel 0 */
    PIT_EnableInterrupts(PIT, kPIT_Chnl_0, kPIT_TimerInterruptEnable);

    /* Enable at the NVIC */
    EnableIRQ(PIT_IRQn);
	HAL_NVIC_SetPriority(PIT_IRQn, IRQ_PRI_PIT_TIMER, IRQ_SUBPRI_PIT_TIMER);
    PIT_StartTimer(PIT, kPIT_Chnl_0);

    /* Start channel 0 */
    PRINTF("\r\nStarting Timer channel No.0 ...\r\n");
}

void wifidbg_set_irq_enabled(uint8_t en)
{
#if WIFI_DBG_USE_TIMER_LOOP
	if (en)
		EnableIRQ(PIT_IRQn);
	else
		DisableIRQ(PIT_IRQn);	

	__DSB(); __ISB();
#else if WIFI_DBG_USE_INT_LOOP
	if (en)
	{
		M8266_Write_REV_INT(1);
	}
	else
	{
		M8266_Write_REV_INT(0);
	}
#endif	
}

void wifidbg_disable_connection_loop()
{
#if WIFI_DBG_USE_TIMER_LOOP
	DisableIRQ(PIT_IRQn);
	PIT_StopTimer(PIT, kPIT_Chnl_0);
	PIT_ClearStatusFlags(PIT, kPIT_Chnl_0, kPIT_TimerFlag);
	PRINTF("\r\nStop Timer channel No.0 ...\r\n");
#else if WIFI_DBG_USE_INT_LOOP
	M8266_Write_REV_INT(0);
	DisableIRQ(TMR3_IRQn);
#endif	
}

void wifidbg_enable_connection_loop()
{
#if WIFI_DBG_USE_TIMER_LOOP
	wifidbg_init_pit_timer_for_connection_loop();
#else if WIFI_DBG_USE_INT_LOOP
	M8266_Init_REV_INT_Pins();
	M8266_Write_REV_INT(1);
	wifidbg_start_rev_io_irq_timeout();
#endif
}