/*
 * The Clear BSD License
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted (subject to the limitations in the disclaimer below) provided
 *  that the following conditions are met:
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
 * NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE.
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

#include "fsl_sdmmc_host.h"
#include "board.h"
#include "fsl_sdmmc_event.h"
#include "fsl_gpio.h"
#ifdef BOARD_USDHC_CD_PORT_BASE
#include "fsl_port.h"
#endif

/*******************************************************************************
* Definitions
******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/*!
 * @brief SDMMCHOST detect card by GPIO.
 */
static void SDMMCHOST_DetectCardByGpio(const sdmmchost_detect_card_t *cd);

/*!
 * @brief SDMMCHOST detect card insert status by host controller.
 * @param base host base address.
 * @param userData user can register a application card insert callback through userData.
 */
static void SDMMCHOST_DetectCardInsertByHost(SDMMCHOST_TYPE *base, void *userData);

/*!
 * @brief SDMMCHOST detect card remove status by host controller.
 * @param base host base address.
 * @param userData user can register a application card insert callback through userData.
 */
static void SDMMCHOST_DetectCardRemoveByHost(SDMMCHOST_TYPE *base, void *userData);

/*!
 * @brief SDMMCHOST transfer function.
 * @param base host base address.
 * @param content transfer configurations.
 */
static status_t SDMMCHOST_TransferFunction(SDMMCHOST_TYPE *base, SDMMCHOST_TRANSFER *content);

/*!
 * @brief SDMMCHOST transfer complete callback.
 * @param base host base address.
 * @param handle host handle.
 * @param status interrupt status.
 * @param userData user data.
 */
static void SDMMCHOST_TransferCompleteCallback(SDMMCHOST_TYPE *base,
                                               usdhc_handle_t *handle,
                                               status_t status,
                                               void *userData);

/*!
 * @brief SDMMCHOST re-tuning callback
* @param base host base address.
* @param userData user can register a application card insert callback through userData.
*/
static void SDMMCHOST_ReTuningCallback(SDMMCHOST_TYPE *base, void *userData);

/*!
 * @brief card detect deinit function.
 */
static void SDMMCHOST_CardDetectDeinit(void);

/*!
 * @brief card detect deinit function.
 * @param host base address.
 * @param host detect card configuration.
 */
static status_t SDMMCHOST_CardDetectInit(SDMMCHOST_TYPE *base, const sdmmchost_detect_card_t *cd);

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* DMA descriptor should allocate at non-cached memory */
AT_NONCACHEABLE_SECTION_ALIGN(uint32_t g_usdhcAdma2Table[USDHC_ADMA_TABLE_WORDS], USDHC_ADMA2_ADDR_ALIGN);

usdhc_handle_t g_usdhcHandle;
volatile bool g_usdhcTransferSuccessFlag = true;
static volatile bool s_sdInsertedFlag = false;
volatile status_t g_reTuningFlag = false;

/*******************************************************************************
 * Code
 ******************************************************************************/
static void SDMMCHOST_DetectCardByGpio(const sdmmchost_detect_card_t *cd)
{
    if (SDMMCHOST_CARD_DETECT_GPIO_STATUS() != SDMMCHOST_CARD_INSERT_CD_LEVEL)
    {
        s_sdInsertedFlag = false;
        if (cd && (cd->cardRemoved))
        {
            cd->cardRemoved(false, cd->userData);
        }
    }
    else
    {
        s_sdInsertedFlag = true;
        if (cd && (cd->cardInserted))
        {
            cd->cardInserted(true, cd->userData);
        }
    }
}

static void SDMMCHOST_DetectCardInsertByHost(SDMMCHOST_TYPE *base, void *userData)
{
    s_sdInsertedFlag = true;
    SDMMCEVENT_Notify(kSDMMCEVENT_CardDetect);
    /* application callback */
    if (userData && ((sdmmchost_detect_card_t *)userData)->cardInserted)
    {
        ((sdmmchost_detect_card_t *)userData)->cardInserted(true, ((sdmmchost_detect_card_t *)userData)->userData);
    }
}

static void SDMMCHOST_DetectCardRemoveByHost(SDMMCHOST_TYPE *base, void *userData)
{
    s_sdInsertedFlag = false;
    /* application callback */
    if (userData && ((sdmmchost_detect_card_t *)userData)->cardRemoved)
    {
        ((sdmmchost_detect_card_t *)userData)->cardRemoved(false, ((sdmmchost_detect_card_t *)userData)->userData);
    }
}

void SDMMCHOST_CARD_DETECT_GPIO_INTERRUPT_HANDLER(void)
{
    if (SDMMCHOST_CARD_DETECT_GPIO_INTERRUPT_STATUS() & (1U << BOARD_USDHC_CD_GPIO_PIN))
    {
        SDMMCHOST_DetectCardByGpio((sdmmchost_detect_card_t *)g_usdhcHandle.userData);
    }
    /* Clear interrupt flag.*/
    SDMMCHOST_CARD_DETECT_GPIO_INTERRUPT_STATUS_CLEAR(~0U);
    SDMMCEVENT_Notify(kSDMMCEVENT_CardDetect);
}

static void SDMMCHOST_TransferCompleteCallback(SDMMCHOST_TYPE *base,
                                               usdhc_handle_t *handle,
                                               status_t status,
                                               void *userData)
{
    /* wait the target status and then notify the transfer complete */
    if (status == kStatus_Success)
    {
        g_usdhcTransferSuccessFlag = true;
    }
    else
    {
        g_usdhcTransferSuccessFlag = false;
    }

    SDMMCEVENT_Notify(kSDMMCEVENT_TransferComplete);
}

static void SDMMCHOST_ReTuningCallback(SDMMCHOST_TYPE *base, void *userData)
{
    g_reTuningFlag = true;
    SDMMCEVENT_Notify(kSDMMCEVENT_TransferComplete);
}

static status_t SDMMCHOST_TransferFunction(SDMMCHOST_TYPE *base, SDMMCHOST_TRANSFER *content)
{
    status_t error = kStatus_Success;

    usdhc_adma_config_t dmaConfig;

    if (content->data != NULL)
    {
        memset(&dmaConfig, 0, sizeof(usdhc_adma_config_t));
        /* config adma */
        dmaConfig.dmaMode = USDHC_DMA_MODE;
        dmaConfig.burstLen = kUSDHC_EnBurstLenForINCR;
        dmaConfig.admaTable = g_usdhcAdma2Table;
        dmaConfig.admaTableWords = USDHC_ADMA_TABLE_WORDS;
    }

    do
    {
        error = USDHC_TransferNonBlocking(base, &g_usdhcHandle, &dmaConfig, content);
    } while (error == kStatus_USDHC_BusyTransferring);

    if ((error != kStatus_Success) ||
        (false == SDMMCEVENT_Wait(kSDMMCEVENT_TransferComplete, SDMMCHOST_TRANSFER_COMPLETE_TIMEOUT)) ||
        (g_reTuningFlag) || (!g_usdhcTransferSuccessFlag))
    {
        if (g_reTuningFlag || (error == kStatus_USDHC_ReTuningRequest))
        {
            if (g_reTuningFlag)
            {
                g_reTuningFlag = false;
                error = kStatus_USDHC_TuningError;
            }
        }
        else
        {
            error = kStatus_Fail;
            /* host error recovery */
            SDMMCHOST_ErrorRecovery(base);
        }
    }

    SDMMCEVENT_Delete(kSDMMCEVENT_TransferComplete);

    return error;
}

void SDMMCHOST_ErrorRecovery(SDMMCHOST_TYPE *base)
{
    uint32_t status = 0U;
    /* get host present status */
    status = USDHC_GetPresentStatusFlags(base);
    /* check command inhibit status flag */
    if ((status & kUSDHC_CommandInhibitFlag) != 0U)
    {
        /* reset command line */
        USDHC_Reset(base, kUSDHC_ResetCommand, 100U);
    }
    /* check data inhibit status flag */
    if ((status & kUSDHC_DataInhibitFlag) != 0U)
    {
        /* reset data line */
        USDHC_Reset(base, kUSDHC_ResetData, 100U);
    }
}

static status_t SDMMCHOST_CardDetectInit(SDMMCHOST_TYPE *base, const sdmmchost_detect_card_t *cd)
{
    sdmmchost_detect_card_type_t cdType = kSDMMCHOST_DetectCardByGpioCD;

    if (cd != NULL)
    {
        cdType = cd->cdType;
    }

    if (!SDMMCEVENT_Create(kSDMMCEVENT_CardDetect))
    {
        return kStatus_Fail;
    }

    if (cdType == kSDMMCHOST_DetectCardByGpioCD)
    {
        SDMMCHOST_CARD_DETECT_GPIO_INIT();
        /* Open card detection pin NVIC. */
        SDMMCHOST_ENABLE_IRQ(SDMMCHOST_CARD_DETECT_GPIO_IRQ);
        /* check card insert or not */
        SDMMCHOST_DetectCardByGpio(cd);
    }
    else
    {
        /* enable card detect through DATA3 */
        if (cdType == kSDMMCHOST_DetectCardByHostDATA3)
        {
            SDMMCHOST_CARD_DETECT_DATA3_ENABLE(base, true);
        }
        /* enable card detect interrupt */
        SDMMCHOST_CARD_DETECT_INSERT_ENABLE(base);
        SDMMCHOST_CARD_DETECT_INSERT_INTERRUPT_ENABLE(base);

        /* check if card is inserted */
        if (SDMMCHOST_CARD_DETECT_INSERT_STATUS(base))
        {
            s_sdInsertedFlag = true;
        }
    }

    return kStatus_Success;
}

static void SDMMCHOST_CardDetectDeinit(void)
{
    SDMMCEVENT_Delete(kSDMMCEVENT_CardDetect);
    s_sdInsertedFlag = false;
}

void SDMMCHOST_Delay(uint32_t milliseconds)
{
    SDMMCEVENT_Delay(milliseconds);
}

status_t SDMMCHOST_WaitCardDetectStatus(SDMMCHOST_TYPE *base, const sdmmchost_detect_card_t *cd, bool waitCardStatus)
{
    uint32_t timeout = SDMMCHOST_CARD_DETECT_TIMEOUT;

    if (cd != NULL)
    {
        timeout = cd->cdTimeOut_ms;
    }

    if (waitCardStatus != s_sdInsertedFlag)
    {
        /* Wait card inserted. */
        do
        {
            if (!SDMMCEVENT_Wait(kSDMMCEVENT_CardDetect, timeout))
            {
                return kStatus_Fail;
            }
        } while (waitCardStatus != s_sdInsertedFlag);
    }

    return kStatus_Success;
}

bool SDMMCHOST_IsCardPresent(void)
{
    return s_sdInsertedFlag;
}

void SDMMCHOST_PowerOffCard(SDMMCHOST_TYPE *base, const sdmmchost_pwr_card_t *pwr)
{
    if (pwr != NULL)
    {
        pwr->powerOff();
        SDMMCHOST_Delay(pwr->powerOffDelay_ms);
    }
    else
    {
        /* only SD card need card detect*/
        SDMMCHOST_ENABLE_SD_POWER(false);
        /* Delay several milliseconds to make card stable. */
        SDMMCHOST_Delay(500U);
    }
}

void SDMMCHOST_PowerOnCard(SDMMCHOST_TYPE *base, const sdmmchost_pwr_card_t *pwr)
{
    /* use user define the power on function  */
    if (pwr != NULL)
    {
        pwr->powerOn();
        SDMMCHOST_Delay(pwr->powerOnDelay_ms);
    }
    else
    {
        /* card power on */
        SDMMCHOST_ENABLE_SD_POWER(true);
        /* Delay several milliseconds to make card stable. */
        SDMMCHOST_Delay(500U);
    }
}

status_t SDMMCHOST_Init(SDMMCHOST_CONFIG *host, void *userData)
{
    usdhc_host_t *usdhcHost = (usdhc_host_t *)host;
    usdhc_transfer_callback_t callback = {
        .TransferComplete = SDMMCHOST_TransferCompleteCallback,
        .ReTuning = SDMMCHOST_ReTuningCallback,
        .CardInserted = SDMMCHOST_DetectCardInsertByHost,
        .CardRemoved = SDMMCHOST_DetectCardRemoveByHost,
        .SdioInterrupt = NULL,
        .BlockGap = NULL,
    };
    /* init card power control */
    SDMMCHOST_INIT_SD_POWER();
    SDMMCHOST_INIT_MMC_POWER();

    /* Initializes USDHC. */
    usdhcHost->config.dataTimeout = USDHC_DATA_TIMEOUT;
    usdhcHost->config.endianMode = USDHC_ENDIAN_MODE;
    usdhcHost->config.readWatermarkLevel = USDHC_READ_WATERMARK_LEVEL;
    usdhcHost->config.writeWatermarkLevel = USDHC_WRITE_WATERMARK_LEVEL;
    usdhcHost->config.readBurstLen = USDHC_READ_BURST_LEN;
    usdhcHost->config.writeBurstLen = USDHC_WRITE_BURST_LEN;

    USDHC_Init(usdhcHost->base, &(usdhcHost->config));

    /* disable the card insert/remove interrupt, due to use GPIO interrupt detect card */
    USDHC_DisableInterruptSignal(usdhcHost->base, kUSDHC_CardRemovalFlag | kUSDHC_CardInsertionFlag);
    /* create interrupt handler */
    USDHC_TransferCreateHandle(usdhcHost->base, &g_usdhcHandle, &callback, userData);
    /* Create transfer complete event. */
    SDMMCEVENT_InitTimer();

    if (false == SDMMCEVENT_Create(kSDMMCEVENT_TransferComplete))
    {
        return kStatus_Fail;
    }

    /* Define transfer function. */
    usdhcHost->transfer = SDMMCHOST_TransferFunction;
    /* card detect init */
    SDMMCHOST_CardDetectInit(usdhcHost->base, (sdmmchost_detect_card_t *)userData);

    return kStatus_Success;
}

void SDMMCHOST_Reset(SDMMCHOST_TYPE *base)
{
    /* voltage switch to normal but not 1.8V */
    SDMMCHOST_SWITCH_VOLTAGE180V(base, false);
    /* Disable DDR mode */
    SDMMCHOST_ENABLE_DDR_MODE(base, false, 0U);
    /* disable tuning */
    SDMMCHOST_EXECUTE_STANDARD_TUNING_ENABLE(base, false);
    /* Disable HS400 mode */
    SDMMCHOST_ENABLE_HS400_MODE(base, false);
    /* Disable DLL */
    SDMMCHOST_ENABLE_STROBE_DLL(base, false);
}

void SDMMCHOST_Deinit(void *host)
{
    usdhc_host_t *usdhcHost = (usdhc_host_t *)host;
    SDMMCHOST_Reset(usdhcHost->base);
    USDHC_Deinit(usdhcHost->base);
    SDMMCHOST_CardDetectDeinit();
}
