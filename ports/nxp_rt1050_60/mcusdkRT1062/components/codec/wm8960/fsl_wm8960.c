/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_wm8960.h"
#include "fsl_common.h"

/*******************************************************************************
 * Definitations
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
/*
 * wm8960 register cache
 * We can't read the WM8960 register space when we are
 * using 2 wire for device control, so we cache them instead.
 */
static const uint16_t wm8960_reg[WM8960_CACHEREGNUM] = {
    0x0097, 0x0097, 0x0000, 0x0000, 0x0000, 0x0008, 0x0000, 0x000a, 0x01c0, 0x0000, 0x00ff, 0x00ff, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x007b, 0x0100, 0x0032, 0x0000, 0x00c3, 0x00c3, 0x01c0, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x0100, 0x0050, 0x0050, 0x0050, 0x0050, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0040, 0x0000, 0x0000, 0x0050, 0x0050, 0x0000, 0x0002, 0x0037, 0x004d, 0x0080, 0x0008, 0x0031, 0x0026, 0x00e9,
};

static uint16_t reg_cache[WM8960_CACHEREGNUM];
/*******************************************************************************
 * Code
 ******************************************************************************/

status_t WM8960_Init(codec_handle_t *handle, void *wm8960_configure)
{
    wm8960_config_t *config = (wm8960_config_t *)wm8960_configure;

    memcpy(reg_cache, wm8960_reg, sizeof(wm8960_reg));

    /* Set WM8960 I2C address */
    handle->slaveAddress = WM8960_I2C_ADDR;

    /* Reset the codec */
    WM8960_WriteReg(handle, WM8960_RESET, 0x00);
    /* Set VMID */
    WM8960_WriteReg(handle, WM8960_POWER1, 0xC0);
    /* ADC and DAC uses same clock */
    WM8960_WriteReg(handle, WM8960_IFACE2, 0x40);
    /* NULL pointer means default setting. */
    if (config == NULL)
    {
        /*
        * VMID=50K, Enable VREF, AINL, AINR, ADCL and ADCR
        * I2S_IN (bit 0), I2S_OUT (bit 1), DAP (bit 4), DAC (bit 5), ADC (bit 6) are powered on
        */
        WM8960_WriteReg(handle, WM8960_POWER1, 0xFE);

        /*
         * Enable DACL, DACR, LOUT1, ROUT1, PLL down
         */
        WM8960_WriteReg(handle, WM8960_POWER2, 0x1E0);

        /*
         * Enable left and right channel input PGA, left and right output mixer
         */
        WM8960_WriteReg(handle, WM8960_POWER3, 0x3C);

        /* Configure SYS_FS clock to 44.1kHz, MCLK_FREQ to 256*Fs, SYSCLK derived from MCLK input */
        WM8960_WriteReg(handle, WM8960_CLOCK1, 0x00);

        /*
         * Audio data length = 16bit, I2S data format
         */
        WM8960_WriteReg(handle, WM8960_IFACE1, 0x02);

        /*
         * LMICBOOST = 0dB, Connect left and right PGA to left and right Input Boost Mixer
         */
        WM8960_WriteReg(handle, WM8960_LINPATH, 0x1B8);
        WM8960_WriteReg(handle, WM8960_RINPATH, 0x178);

        /*
         * Left and right input boost, LIN3BOOST and RIN3BOOST = 0dB
         */
        WM8960_WriteReg(handle, WM8960_INBMIX1, 0x00);
        WM8960_WriteReg(handle, WM8960_INBMIX2, 0x00);

        /*
         * Left DAC and LINPUT3 to left output mixer, LINPUT3 left output mixer volume = 0dB
         */
        WM8960_WriteReg(handle, WM8960_LOUTMIX, 0x100);

        /*
         * Right DAC and RINPUT3 to right output mixer, RINPUT3 right output mixer volume = 0dB
         */
        WM8960_WriteReg(handle, WM8960_ROUTMIX, 0x100);

        WM8960_WriteReg(handle, WM8960_MONOMIX1, 0x00);
        WM8960_WriteReg(handle, WM8960_MONOMIX2, 0x00);
    }
    else
    {
        WM8960_SetDataRoute(handle, config->route);
        WM8960_SetProtocol(handle, config->bus);
        WM8960_SetMasterSlave(handle, config->master_slave);
        WM8960_SetLeftInput(handle, config->leftInputSource);
        WM8960_SetRightInput(handle, config->rightInputSource);
        if (config->enableSpeaker)
        {
            WM8960_SetModule(handle, kWM8960_ModuleSpeaker, true);
        }
    }
    WM8960_WriteReg(handle, WM8960_ADDCTL1, 0x0C0);
    WM8960_WriteReg(handle, WM8960_ADDCTL4, 0x40);

    WM8960_WriteReg(handle, WM8960_BYPASS1, 0x0);
    WM8960_WriteReg(handle, WM8960_BYPASS2, 0x0);
    /*
     * ADC volume, 0dB
     */
    WM8960_WriteReg(handle, WM8960_LADC, 0x1C3);
    WM8960_WriteReg(handle, WM8960_RADC, 0x1C3);

    /*
     * Digital DAC volume, 0dB
     */
    WM8960_WriteReg(handle, WM8960_LDAC, 0x1E0);
    WM8960_WriteReg(handle, WM8960_RDAC, 0x1E0);

    /*
     * Headphone volume, LOUT1 and ROUT1, 0dB
     */
    WM8960_WriteReg(handle, WM8960_LOUT1, 0x16F);
    WM8960_WriteReg(handle, WM8960_ROUT1, 0x16F);

    /* Unmute DAC. */
    WM8960_WriteReg(handle, WM8960_DACCTL1, 0x0000);
    WM8960_WriteReg(handle, WM8960_LINVOL, 0x117);
    WM8960_WriteReg(handle, WM8960_RINVOL, 0x117);

    return kStatus_Success;
}

status_t WM8960_Deinit(codec_handle_t *handle)
{
    WM8960_SetModule(handle, kWM8960_ModuleADC, false);
    WM8960_SetModule(handle, kWM8960_ModuleDAC, false);
    WM8960_SetModule(handle, kWM8960_ModuleVREF, false);
    WM8960_SetModule(handle, kWM8960_ModuleLineIn, false);
    WM8960_SetModule(handle, kWM8960_ModuleLineOut, false);
    WM8960_SetModule(handle, kWM8960_ModuleSpeaker, false);

    return kStatus_Success;
}

void WM8960_SetMasterSlave(codec_handle_t *handle, bool master)
{
    if (master == 1)
    {
        WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_MS_MASK, WM8960_IFACE1_MS(WM8960_IFACE1_MASTER));
    }
    else
    {
        WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_MS_MASK, WM8960_IFACE1_MS(WM8960_IFACE1_SLAVE));
    }
}

status_t WM8960_SetModule(codec_handle_t *handle, wm8960_module_t module, bool isEnabled)
{
    status_t ret = kStatus_Success;
    switch (module)
    {
        case kWM8960_ModuleADC:
            WM8960_ModifyReg(handle, WM8960_POWER1, WM8960_POWER1_ADCL_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER1_ADCL_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER1, WM8960_POWER1_ADCR_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER1_ADCR_SHIFT));
            break;
        case kWM8960_ModuleDAC:
            WM8960_ModifyReg(handle, WM8960_POWER2, WM8960_POWER2_DACL_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER2_DACL_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER2, WM8960_POWER2_DACR_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER2_DACR_SHIFT));
            break;
        case kWM8960_ModuleVREF:
            WM8960_ModifyReg(handle, WM8960_POWER1, WM8960_POWER1_VREF_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER1_VREF_SHIFT));
            break;
        case kWM8960_ModuleLineIn:
            WM8960_ModifyReg(handle, WM8960_POWER1, WM8960_POWER1_AINL_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER1_AINL_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER1, WM8960_POWER1_AINR_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER1_AINR_SHIFT));
            break;
        case kWM8960_ModuleLineOut:
            WM8960_ModifyReg(handle, WM8960_POWER2, WM8960_POWER2_LOUT1_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER2_LOUT1_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER2, WM8960_POWER2_ROUT1_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER2_ROUT1_SHIFT));
            break;
        case kWM8960_ModuleMICB:
            WM8960_ModifyReg(handle, WM8960_POWER1, WM8960_POWER1_MICB_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER1_MICB_SHIFT));
            break;
        case kWM8960_ModuleSpeaker:
            WM8960_ModifyReg(handle, WM8960_POWER2, WM8960_POWER2_SPKL_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER2_SPKL_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER2, WM8960_POWER2_SPKR_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER2_SPKR_SHIFT));
            WM8960_WriteReg(handle, WM8960_CLASSD1, 0xF7);
            break;
        case kWM8960_ModuleMIC:
            WM8960_ModifyReg(handle, WM8960_POWER3, WM8960_POWER3_LMIC_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER3_LMIC_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER3, WM8960_POWER3_RMIC_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER3_RMIC_SHIFT));
            break;
        case kWM8960_ModuleOMIX:
            WM8960_ModifyReg(handle, WM8960_POWER3, WM8960_POWER3_LOMIX_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER3_LOMIX_SHIFT));
            WM8960_ModifyReg(handle, WM8960_POWER3, WM8960_POWER3_ROMIX_MASK,
                             ((uint16_t)isEnabled << WM8960_POWER3_ROMIX_SHIFT));
            break;
        default:
            ret = kStatus_InvalidArgument;
            break;
    }
    return ret;
}

status_t WM8960_SetDataRoute(codec_handle_t *handle, wm8960_route_t route)
{
    status_t ret = kStatus_Success;
    switch (route)
    {
        case kWM8960_RouteBypass:
            /* Bypass means from line-in to HP*/
            /*
             * Left LINPUT3 to left output mixer, LINPUT3 left output mixer volume = 0dB
             */
            WM8960_WriteReg(handle, WM8960_LOUTMIX, 0x80);

            /*
             * Right RINPUT3 to right output mixer, RINPUT3 right output mixer volume = 0dB
             */
            WM8960_WriteReg(handle, WM8960_ROUTMIX, 0x80);
            break;
        case kWM8960_RoutePlayback:
            /* Data route I2S_IN-> DAC-> HP */
            /*
             * Left DAC to left output mixer, LINPUT3 left output mixer volume = 0dB
             */
            WM8960_WriteReg(handle, WM8960_LOUTMIX, 0x100);

            /*
             * Right DAC to right output mixer, RINPUT3 right output mixer volume = 0dB
             */
            WM8960_WriteReg(handle, WM8960_ROUTMIX, 0x100);
            WM8960_WriteReg(handle, WM8960_POWER3, 0x0C);
            /* Set power for DAC */
            WM8960_SetModule(handle, kWM8960_ModuleDAC, true);
            WM8960_SetModule(handle, kWM8960_ModuleOMIX, true);
            WM8960_SetModule(handle, kWM8960_ModuleLineOut, true);
            break;
        case kWM8960_RoutePlaybackandRecord:
            /*
             * Left DAC to left output mixer, LINPUT3 left output mixer volume = 0dB
             */
            WM8960_WriteReg(handle, WM8960_LOUTMIX, 0x100);

            /*
             * Right DAC to right output mixer, RINPUT3 right output mixer volume = 0dB
             */
            WM8960_WriteReg(handle, WM8960_ROUTMIX, 0x100);
            WM8960_WriteReg(handle, WM8960_POWER3, 0x3C);
            WM8960_SetModule(handle, kWM8960_ModuleDAC, true);
            WM8960_SetModule(handle, kWM8960_ModuleADC, true);
            WM8960_SetModule(handle, kWM8960_ModuleLineIn, true);
            WM8960_SetModule(handle, kWM8960_ModuleOMIX, true);
            WM8960_SetModule(handle, kWM8960_ModuleLineOut, true);
            break;
        case kWM8960_RouteRecord:
            /* LINE_IN->ADC->I2S_OUT */
            /*
             * Left and right input boost, LIN3BOOST and RIN3BOOST = 0dB
             */
            WM8960_WriteReg(handle, WM8960_POWER3, 0x30);
            /* Power up ADC and AIN */
            WM8960_SetModule(handle, kWM8960_ModuleLineIn, true);
            WM8960_SetModule(handle, kWM8960_ModuleADC, true);
            break;
        default:
            ret = kStatus_InvalidArgument;
            break;
    }
    return ret;
}

status_t WM8960_SetLeftInput(codec_handle_t *handle, wm8960_input_t input)
{
    status_t ret = kStatus_Success;
    uint16_t val = 0;

    switch (input)
    {
        case kWM8960_InputSingleEndedMic:
            /* Only LMN1 enabled, LMICBOOST to 13db, LMIC2B enabled */
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINL_MASK | WM8960_POWER1_ADCL_MASK | WM8960_POWER1_MICB_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            ret = WM8960_WriteReg(handle, WM8960_LINPATH, 0x138);
            ret = WM8960_WriteReg(handle, WM8960_LINVOL, 0x117);
            break;
        case kWM8960_InputDifferentialMicInput2:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINL_MASK | WM8960_POWER1_ADCL_MASK | WM8960_POWER1_MICB_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            ret = WM8960_WriteReg(handle, WM8960_LINPATH, 0x178);
            ret = WM8960_WriteReg(handle, WM8960_LINVOL, 0x117);
            break;
        case kWM8960_InputDifferentialMicInput3:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINL_MASK | WM8960_POWER1_ADCL_MASK | WM8960_POWER1_MICB_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            ret = WM8960_WriteReg(handle, WM8960_LINPATH, 0x1B8);
            ret = WM8960_WriteReg(handle, WM8960_LINVOL, 0x117);
            break;
        case kWM8960_InputLineINPUT2:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINL_MASK | WM8960_POWER1_ADCL_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            WM8960_ReadReg(WM8960_INBMIX1, &val);
            val |= 0xE;
            ret = WM8960_WriteReg(handle, WM8960_INBMIX1, val);
            break;
        case kWM8960_InputLineINPUT3:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINL_MASK | WM8960_POWER1_ADCL_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            WM8960_ReadReg(WM8960_INBMIX1, &val);
            val |= 0x70;
            ret = WM8960_WriteReg(handle, WM8960_INBMIX1, val);
            break;
        default:
            break;
    }

    return ret;
}

status_t WM8960_SetRightInput(codec_handle_t *handle, wm8960_input_t input)
{
    status_t ret = kStatus_Success;
    uint16_t val = 0;

    switch (input)
    {
        case kWM8960_InputSingleEndedMic:
            /* Only LMN1 enabled, LMICBOOST to 13db, LMIC2B enabled */
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINR_MASK | WM8960_POWER1_ADCR_MASK | WM8960_POWER1_MICB_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            ret = WM8960_WriteReg(handle, WM8960_RINPATH, 0x138);
            ret = WM8960_WriteReg(handle, WM8960_RINVOL, 0x117);
            break;
        case kWM8960_InputDifferentialMicInput2:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINR_MASK | WM8960_POWER1_ADCR_MASK | WM8960_POWER1_MICB_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            ret = WM8960_WriteReg(handle, WM8960_RINPATH, 0x178);
            ret = WM8960_WriteReg(handle, WM8960_RINVOL, 0x117);
            break;
        case kWM8960_InputDifferentialMicInput3:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINR_MASK | WM8960_POWER1_ADCR_MASK | WM8960_POWER1_MICB_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            ret = WM8960_WriteReg(handle, WM8960_RINPATH, 0x1B8);
            ret = WM8960_WriteReg(handle, WM8960_RINVOL, 0x117);
            break;
        case kWM8960_InputLineINPUT2:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINR_MASK | WM8960_POWER1_ADCR_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            WM8960_ReadReg(WM8960_INBMIX2, &val);
            val |= 0xE;
            ret = WM8960_WriteReg(handle, WM8960_INBMIX2, val);
            break;
        case kWM8960_InputLineINPUT3:
            WM8960_ReadReg(WM8960_POWER1, &val);
            val |= (WM8960_POWER1_AINR_MASK | WM8960_POWER1_ADCR_MASK);
            ret = WM8960_WriteReg(handle, WM8960_POWER1, val);
            WM8960_ReadReg(WM8960_INBMIX2, &val);
            val |= 0x70;
            ret = WM8960_WriteReg(handle, WM8960_INBMIX2, val);
            break;
        default:
            break;
    }

    return ret;
}

status_t WM8960_SetProtocol(codec_handle_t *handle, wm8960_protocol_t protocol)
{
    status_t ret = kStatus_Success;
    switch (protocol)
    {
        case kWM8960_BusI2S:
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_FORMAT_MASK,
                             WM8960_IFACE1_FORMAT(WM8960_IFACE1_FORMAT_I2S));
            break;
        case kWM8960_BusLeftJustified:
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_FORMAT_MASK,
                             WM8960_IFACE1_FORMAT(WM8960_IFACE1_FORMAT_LJ));
            break;
        case kWM8960_BusRightJustified:
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_FORMAT_MASK,
                             WM8960_IFACE1_FORMAT(WM8960_IFACE1_FORMAT_RJ));
            break;
        case kWM8960_BusPCMA:
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_FORMAT_MASK,
                             WM8960_IFACE1_FORMAT(WM8960_IFACE1_FORMAT_DSP));
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_LRP_MASK, WM8960_IFACE1_LRP(WM8960_IFACE1_DSP_MODEA));
            break;
        case kWM8960_BusPCMB:
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_FORMAT_MASK,
                             WM8960_IFACE1_FORMAT(WM8960_IFACE1_FORMAT_DSP));
            WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_LRP_MASK, WM8960_IFACE1_LRP(WM8960_IFACE1_DSP_MODEB));
            break;
        default:
            ret = kStatus_InvalidArgument;
            break;
    }
    WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_WL_MASK, WM8960_IFACE1_WL(WM8960_IFACE1_WL_32BITS));
    return ret;
}

status_t WM8960_SetVolume(codec_handle_t *handle, wm8960_module_t module, uint32_t volume)
{
    uint16_t vol = 0;
    status_t ret = kStatus_Success;
    switch (module)
    {
        case kWM8960_ModuleADC:
            vol = volume;
            ret = WM8960_WriteReg(handle, WM8960_LADC, vol);
            ret = WM8960_WriteReg(handle, WM8960_RADC, vol);
            /* Update volume */
            vol = 0x100 | volume;
            ret = WM8960_WriteReg(handle, WM8960_LADC, vol);
            ret = WM8960_WriteReg(handle, WM8960_RADC, vol);
            break;
        case kWM8960_ModuleDAC:
            vol = volume;
            ret = WM8960_WriteReg(handle, WM8960_LDAC, vol);
            ret = WM8960_WriteReg(handle, WM8960_RDAC, vol);
            vol = 0x100 | volume;
            ret = WM8960_WriteReg(handle, WM8960_LDAC, vol);
            ret = WM8960_WriteReg(handle, WM8960_RDAC, vol);
            break;
        case kWM8960_ModuleHP:
            vol = volume;
            ret = WM8960_WriteReg(handle, WM8960_LOUT1, vol);
            ret = WM8960_WriteReg(handle, WM8960_ROUT1, vol);
            vol = 0x100 | volume;
            ret = WM8960_WriteReg(handle, WM8960_LOUT1, vol);
            ret = WM8960_WriteReg(handle, WM8960_ROUT1, vol);
            break;
        case kWM8960_ModuleLineIn:
            vol = volume;
            ret = WM8960_WriteReg(handle, WM8960_LINVOL, vol);
            ret = WM8960_WriteReg(handle, WM8960_RINVOL, vol);
            vol = 0x100 | volume;
            ret = WM8960_WriteReg(handle, WM8960_LINVOL, vol);
            ret = WM8960_WriteReg(handle, WM8960_RINVOL, vol);
            break;
        case kWM8960_ModuleSpeaker:
            vol = volume;
            ret = WM8960_WriteReg(handle, WM8960_LOUT2, vol);
            ret = WM8960_WriteReg(handle, WM8960_ROUT2, vol);
            vol = 0x100 | volume;
            ret = WM8960_WriteReg(handle, WM8960_LOUT2, vol);
            ret = WM8960_WriteReg(handle, WM8960_ROUT2, vol);
            break;
        default:
            ret = kStatus_InvalidArgument;
            break;
    }
    return ret;
}

uint32_t WM8960_GetVolume(codec_handle_t *handle, wm8960_module_t module)
{
    uint16_t vol = 0;
    switch (module)
    {
        case kWM8960_ModuleADC:
            WM8960_ReadReg(WM8960_LADC, &vol);
            vol &= 0xFF;
            break;
        case kWM8960_ModuleDAC:
            WM8960_ReadReg(WM8960_LDAC, &vol);
            vol &= 0xFF;
            break;
        case kWM8960_ModuleHP:
            WM8960_ReadReg(WM8960_LOUT1, &vol);
            vol &= 0x7F;
            break;
        case kWM8960_ModuleLineOut:
            WM8960_ReadReg(WM8960_LINVOL, &vol);
            vol &= 0x3F;
            break;
        default:
            vol = 0;
            break;
    }
    return vol;
}

status_t WM8960_SetMute(codec_handle_t *handle, wm8960_module_t module, bool isEnabled)
{
    status_t ret = kStatus_Success;
    switch (module)
    {
        case kWM8960_ModuleADC:
            /*
             * Digital Mute
             */
            if (isEnabled)
            {
                ret = WM8960_WriteReg(handle, WM8960_LADC, 0x100);
                ret = WM8960_WriteReg(handle, WM8960_RADC, 0x100);
            }
            else
            {
                ret = WM8960_WriteReg(handle, WM8960_LADC, 0x1C3);
                ret = WM8960_WriteReg(handle, WM8960_RADC, 0x1C3);
            }
            break;
        case kWM8960_ModuleDAC:
            /*
             * Digital mute
             */
            if (isEnabled)
            {
                ret = WM8960_WriteReg(handle, WM8960_LDAC, 0x100);
                ret = WM8960_WriteReg(handle, WM8960_RDAC, 0x100);
            }
            else
            {
                ret = WM8960_WriteReg(handle, WM8960_LDAC, 0x1FF);
                ret = WM8960_WriteReg(handle, WM8960_RDAC, 0x1FF);
            }
            break;
        case kWM8960_ModuleHP:
            /*
             * Analog mute
             */
            if (isEnabled)
            {
                ret = WM8960_WriteReg(handle, WM8960_LOUT1, 0x100);
                ret = WM8960_WriteReg(handle, WM8960_ROUT1, 0x100);
            }
            else
            {
                ret = WM8960_WriteReg(handle, WM8960_LOUT1, 0x179);
                ret = WM8960_WriteReg(handle, WM8960_ROUT1, 0x179);
            }
            break;
        case kWM8960_ModuleLineOut:
            break;
        default:
            ret = kStatus_InvalidArgument;
            break;
    }
    return ret;
}

status_t WM8960_ConfigDataFormat(codec_handle_t *handle, uint32_t sysclk, uint32_t sample_rate, uint32_t bits)
{
    status_t retval = kStatus_Success;
    uint32_t divider = 0;
    uint16_t val = 0;

    /* Compute sample rate divider, dac and adc are the same sample rate */
    divider = sysclk / sample_rate;
    if (divider == 256)
    {
        val = 0;
    }
    else if (divider > 256)
    {
        val = (((divider / 256U) << 6U) | ((divider / 256U) << 3U));
    }
    else
    {
        return kStatus_InvalidArgument;
    }

    retval = WM8960_WriteReg(handle, WM8960_CLOCK1, val);

    /* Compute bclk divider */
    divider /= bits * 2;
    switch (divider)
    {
        case 4:
        case 5:
        case 6:
            val = (0x1C0 | divider);
            break;
        case 8:
            val = 0x1C7;
            break;
        case 11:
            val = 0x1C8;
            break;
        case 12:
            val = 0x1C9;
            break;
        case 16:
            val = 0x1CA;
            break;
        case 22:
            val = 0x1CB;
            break;
        case 24:
            val = 0x1CC;
            break;
        case 32:
            val = 0x1CF;
            break;
        default:
            val = 0;
            retval = kStatus_InvalidArgument;
            break;
    }

    retval = WM8960_WriteReg(handle, WM8960_CLOCK2, val);
    /*
     * Slave mode (MS = 0), LRP = 0, 32bit WL, left justified (FORMAT[1:0]=0b01)
     */
    switch (bits)
    {
        case 16:
            retval = WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_WL_MASK,
                                      WM8960_IFACE1_WL(WM8960_IFACE1_WL_16BITS));
            break;
        case 20:
            retval = WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_WL_MASK,
                                      WM8960_IFACE1_WL(WM8960_IFACE1_WL_20BITS));
            break;
        case 24:
            retval = WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_WL_MASK,
                                      WM8960_IFACE1_WL(WM8960_IFACE1_WL_24BITS));
            break;
        case 32:
            retval = WM8960_ModifyReg(handle, WM8960_IFACE1, WM8960_IFACE1_WL_MASK,
                                      WM8960_IFACE1_WL(WM8960_IFACE1_WL_32BITS));
            break;
        default:
            retval = kStatus_InvalidArgument;
            break;
    }

    return retval;
}

status_t WM8960_SetJackDetect(codec_handle_t *handle, bool isEnabled)
{
    uint8_t retval = 0;
    uint16_t val = 0;

    WM8960_ReadReg(WM8960_ADDCTL2, &val);

    if (isEnabled)
    {
        val |= 0x40U;
    }
    else
    {
        val &= 0xCF;
    }

    retval = WM8960_WriteReg(handle, WM8960_ADDCTL2, val);

    return retval;
}

status_t WM8960_WriteReg(codec_handle_t *handle, uint8_t reg, uint16_t val)
{
    uint8_t cmd, buff;
    uint8_t retval = 0;

    /* The register address */
    cmd = (reg << 1) | ((val >> 8U) & 0x0001U);
    /* Data */
    buff = val & 0xFF;

    retval = CODEC_I2C_WriteReg(handle->slaveAddress, kCODEC_RegAddr8Bit, cmd, kCODEC_RegWidth8Bit, buff,
                                handle->I2C_SendFunc);

    if (retval == kStatus_Success)
    {
        reg_cache[reg] = val;
    }

    return retval;
}

status_t WM8960_ReadReg(uint8_t reg, uint16_t *val)
{
    if (reg >= WM8960_CACHEREGNUM)
    {
        return kStatus_InvalidArgument;
    }

    *val = reg_cache[reg];

    return kStatus_Success;
}

status_t WM8960_ModifyReg(codec_handle_t *handle, uint8_t reg, uint16_t mask, uint16_t val)
{
    uint8_t retval = 0;
    uint16_t reg_val = 0;
    retval = WM8960_ReadReg(reg, &reg_val);
    if (retval != kStatus_Success)
    {
        return kStatus_Fail;
    }
    reg_val &= (uint16_t)~mask;
    reg_val |= val;
    retval = WM8960_WriteReg(handle, reg, reg_val);
    if (retval != kStatus_Success)
    {
        return kStatus_Fail;
    }
    return kStatus_Success;
}
