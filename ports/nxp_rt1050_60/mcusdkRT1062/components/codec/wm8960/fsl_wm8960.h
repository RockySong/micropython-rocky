/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_WM8960_H_
#define _FSL_WM8960_H_

#include "fsl_codec_common.h"

/*!
 * @addtogroup wm8960
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @name Driver version */
/*@{*/
/*! @brief CLOCK driver version 2.0.1. */
#define FSL_WM8904_DRIVER_VERSION (MAKE_VERSION(2, 0, 1))
/*@}*/

/*! @brief Define the register address of WM8960. */
#define WM8960_LINVOL 0x0
#define WM8960_RINVOL 0x1
#define WM8960_LOUT1 0x2
#define WM8960_ROUT1 0x3
#define WM8960_CLOCK1 0x4
#define WM8960_DACCTL1 0x5
#define WM8960_DACCTL2 0x6
#define WM8960_IFACE1 0x7
#define WM8960_CLOCK2 0x8
#define WM8960_IFACE2 0x9
#define WM8960_LDAC 0xa
#define WM8960_RDAC 0xb

#define WM8960_RESET 0xf
#define WM8960_3D 0x10
#define WM8960_ALC1 0x11
#define WM8960_ALC2 0x12
#define WM8960_ALC3 0x13
#define WM8960_NOISEG 0x14
#define WM8960_LADC 0x15
#define WM8960_RADC 0x16
#define WM8960_ADDCTL1 0x17
#define WM8960_ADDCTL2 0x18
#define WM8960_POWER1 0x19
#define WM8960_POWER2 0x1a
#define WM8960_ADDCTL3 0x1b
#define WM8960_APOP1 0x1c
#define WM8960_APOP2 0x1d

#define WM8960_LINPATH 0x20
#define WM8960_RINPATH 0x21
#define WM8960_LOUTMIX 0x22

#define WM8960_ROUTMIX 0x25
#define WM8960_MONOMIX1 0x26
#define WM8960_MONOMIX2 0x27
#define WM8960_LOUT2 0x28
#define WM8960_ROUT2 0x29
#define WM8960_MONO 0x2a
#define WM8960_INBMIX1 0x2b
#define WM8960_INBMIX2 0x2c
#define WM8960_BYPASS1 0x2d
#define WM8960_BYPASS2 0x2e
#define WM8960_POWER3 0x2f
#define WM8960_ADDCTL4 0x30
#define WM8960_CLASSD1 0x31

#define WM8960_CLASSD3 0x33
#define WM8960_PLL1 0x34
#define WM8960_PLL2 0x35
#define WM8960_PLL3 0x36
#define WM8960_PLL4 0x37

/*! @brief Cache register number */
#define WM8960_CACHEREGNUM 56

/*! @brief WM8960_IFACE1 FORMAT bits */
#define WM8960_IFACE1_FORMAT_MASK 0x03
#define WM8960_IFACE1_FORMAT_SHIFT 0x00
#define WM8960_IFACE1_FORMAT_RJ 0x00
#define WM8960_IFACE1_FORMAT_LJ 0x01
#define WM8960_IFACE1_FORMAT_I2S 0x02
#define WM8960_IFACE1_FORMAT_DSP 0x03
#define WM8960_IFACE1_FORMAT(x) ((x << WM8960_IFACE1_FORMAT_SHIFT) & WM8960_IFACE1_FORMAT_MASK)

/*! @brief WM8960_IFACE1 WL bits */
#define WM8960_IFACE1_WL_MASK 0x0C
#define WM8960_IFACE1_WL_SHIFT 0x02
#define WM8960_IFACE1_WL_16BITS 0x00
#define WM8960_IFACE1_WL_20BITS 0x01
#define WM8960_IFACE1_WL_24BITS 0x02
#define WM8960_IFACE1_WL_32BITS 0x03
#define WM8960_IFACE1_WL(x) ((x << WM8960_IFACE1_WL_SHIFT) & WM8960_IFACE1_WL_MASK)

/*! @brief WM8960_IFACE1 LRP bit */
#define WM8960_IFACE1_LRP_MASK 0x10
#define WM8960_IFACE1_LRP_SHIFT 0x04
#define WM8960_IFACE1_LRCLK_NORMAL_POL 0x00
#define WM8960_IFACE1_LRCLK_INVERT_POL 0x01
#define WM8960_IFACE1_DSP_MODEA 0x00
#define WM8960_IFACE1_DSP_MODEB 0x01
#define WM8960_IFACE1_LRP(x) ((x << WM8960_IFACE1_LRP_SHIFT) & WM8960_IFACE1_LRP_MASK)

/*! @brief WM8960_IFACE1 DLRSWAP bit */
#define WM8960_IFACE1_DLRSWAP_MASK 0x20
#define WM8960_IFACE1_DLRSWAP_SHIFT 0x05
#define WM8960_IFACE1_DACCH_NORMAL 0x00
#define WM8960_IFACE1_DACCH_SWAP 0x01
#define WM8960_IFACE1_DLRSWAP(x) ((x << WM8960_IFACE1_DLRSWAP_SHIFT) & WM8960_IFACE1_DLRSWAP_MASK)

/*! @brief WM8960_IFACE1 MS bit */
#define WM8960_IFACE1_MS_MASK 0x40
#define WM8960_IFACE1_MS_SHIFT 0x06
#define WM8960_IFACE1_SLAVE 0x00
#define WM8960_IFACE1_MASTER 0x01
#define WM8960_IFACE1_MS(x) ((x << WM8960_IFACE1_MS_SHIFT) & WM8960_IFACE1_MS_MASK)

/*! @brief WM8960_IFACE1 BCLKINV bit */
#define WM8960_IFACE1_BCLKINV_MASK 0x80
#define WM8960_IFACE1_BCLKINV_SHIFT 0x07
#define WM8960_IFACE1_BCLK_NONINVERT 0x00
#define WM8960_IFACE1_BCLK_INVERT 0x01
#define WM8960_IFACE1_BCLKINV(x) ((x << WM8960_IFACE1_BCLKINV_SHIFT) & WM8960_IFACE1_BCLKINV_MASK)

/*! @brief WM8960_IFACE1 ALRSWAP bit */
#define WM8960_IFACE1_ALRSWAP_MASK 0x100
#define WM8960_IFACE1_ALRSWAP_SHIFT 0x08
#define WM8960_IFACE1_ADCCH_NORMAL 0x00
#define WM8960_IFACE1_ADCCH_SWAP 0x01
#define WM8960_IFACE1_ALRSWAP(x) ((x << WM8960_IFACE1_ALRSWAP_SHIFT) & WM8960_IFACE1_ALRSWAP_MASK)

/*! @brief WM8960_POWER1 */
#define WM8960_POWER1_VREF_MASK 0x40
#define WM8960_POWER1_VREF_SHIFT 0x06

#define WM8960_POWER1_AINL_MASK 0x20
#define WM8960_POWER1_AINL_SHIFT 0x05

#define WM8960_POWER1_AINR_MASK 0x10
#define WM8960_POWER1_AINR_SHIFT 0x04

#define WM8960_POWER1_ADCL_MASK 0x08
#define WM8960_POWER1_ADCL_SHIFT 0x03

#define WM8960_POWER1_ADCR_MASK 0x04
#define WM8960_POWER1_ADCR_SHIFT 0x02

#define WM8960_POWER1_MICB_MASK 0x02
#define WM8960_POWER1_MICB_SHIFT 0x01

#define WM8960_POWER1_DIGENB_MASK 0x01
#define WM8960_POWER1_DIGENB_SHIFT 0x00

/*! @brief WM8960_POWER2 */
#define WM8960_POWER2_DACL_MASK 0x100
#define WM8960_POWER2_DACL_SHIFT 0x08

#define WM8960_POWER2_DACR_MASK 0x80
#define WM8960_POWER2_DACR_SHIFT 0x07

#define WM8960_POWER2_LOUT1_MASK 0x40
#define WM8960_POWER2_LOUT1_SHIFT 0x06

#define WM8960_POWER2_ROUT1_MASK 0x20
#define WM8960_POWER2_ROUT1_SHIFT 0x05

#define WM8960_POWER2_SPKL_MASK 0x10
#define WM8960_POWER2_SPKL_SHIFT 0x04

#define WM8960_POWER2_SPKR_MASK 0x08
#define WM8960_POWER2_SPKR_SHIFT 0x03

#define WM8960_POWER3_LMIC_MASK 0x20
#define WM8960_POWER3_LMIC_SHIFT 0x05
#define WM8960_POWER3_RMIC_MASK 0x10
#define WM8960_POWER3_RMIC_SHIFT 0x04
#define WM8960_POWER3_LOMIX_MASK 0x08
#define WM8960_POWER3_LOMIX_SHIFT 0x03
#define WM8960_POWER3_ROMIX_MASK 0x04
#define WM8960_POWER3_ROMIX_SHIFT 0x02
/* @brief WM8960 I2C address. */
#define WM8960_I2C_ADDR 0x1A

/*! @brief Modules in WM8960 board. */
typedef enum _WM8960_module
{
    kWM8960_ModuleADC = 0x0,     /*!< ADC module in WM8960 */
    kWM8960_ModuleDAC = 0x1,     /*!< DAC module in WM8960 */
    kWM8960_ModuleVREF = 0x2,    /*!< VREF module */
    kWM8960_ModuleHP = 0x03,     /*!< Headphone */
    kWM8960_ModuleMICB = 0x4,    /*!< Mic bias */
    kWM8960_ModuleMIC = 0x5,     /*!< Input Mic */
    kWM8960_ModuleLineIn = 0x6,  /*!< Analog in PGA  */
    kWM8960_ModuleLineOut = 0x7, /*!< Line out module */
    kWM8960_ModuleSpeaker = 0x8, /*!< Speaker module */
    kWM8960_ModuleOMIX = 0x9,    /*!< Output mixer */
} wm8960_module_t;

/*!
* @brief WM8960 data route.
* Only provide some typical data route, not all route listed.
* Note: Users cannot combine any routes, once a new route is set, the previous one would be replaced.
*/
typedef enum _wm8960_route
{
    kWM8960_RouteBypass = 0x0,            /*!< LINEIN->Headphone. */
    kWM8960_RoutePlayback = 0x1,          /*!<  I2SIN->DAC->Headphone. */
    kWM8960_RoutePlaybackandRecord = 0x2, /*!< I2SIN->DAC->Headphone, LINEIN->ADC->I2SOUT. */
    kWM8960_RouteRecord = 0x5             /*!< LINEIN->ADC->I2SOUT. */
} wm8960_route_t;

/*!
* @brief The audio data transfer protocol choice.
* WM8960 only supports I2S format and PCM format.
*/
typedef enum _wm8960_protocol
{
    kWM8960_BusI2S = 0x0,            /*!< I2S type */
    kWM8960_BusLeftJustified = 0x1,  /*!< Left justified mode */
    kWM8960_BusRightJustified = 0x2, /*!< Right justified mode */
    kWM8960_BusPCMA = 0x3,           /*!< PCM A mode */
    kWM8960_BusPCMB = 0x4            /*!< PCM B mode */
} wm8960_protocol_t;

typedef enum _wm8960_input
{
    kWM8960_InputClosed = 0x0,                /*!< Input device is closed */
    kWM8960_InputSingleEndedMic = 0x1,        /*!< Input as single ended mic, only use L/RINPUT1 */
    kWM8960_InputDifferentialMicInput2 = 0x2, /*!< Input as differential mic, use L/RINPUT1 and L/RINPUT2 */
    kWM8960_InputDifferentialMicInput3 = 0x3, /*!< Input as differential mic, use L/RINPUT1 and L/RINPUT3*/
    kWM8960_InputLineINPUT2 = 0x4,            /*!< Input as line input, only use L/RINPUT2 */
    kWM8960_InputLineINPUT3 = 0x5             /*!< Input as line input, only use L/RINPUT3 */
} wm8960_input_t;

/*! @brief Initialize structure of WM8960 */
typedef struct wm8960_config
{
    wm8960_route_t route;            /*!< Audio data route.*/
    wm8960_protocol_t bus;           /*!< Audio transfer protocol */
    bool master_slave;               /*!< Master or slave. */
    bool enableSpeaker;              /*!< True means enable class D speaker as output, false means no */
    wm8960_input_t leftInputSource;  /*!< Left input source for WM8960 */
    wm8960_input_t rightInputSource; /*!< Right input source for wm8960 */
} wm8960_config_t;

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief WM8960 initialize function.
 *
 * The second parameter is NULL to WM8960 in this version. If users want
 * to change the settings, they have to use wm8960_write_reg() or wm8960_modify_reg()
 * to set the register value of WM8960.
 * Note: If the codec_config is NULL, it would initialize WM8960 using default settings.
 * The default setting:
 * codec_config->route = kWM8960_RoutePlaybackandRecord
 * codec_config->bus = kWM8960_BusI2S
 * codec_config->master = slave
 *
 * @param handle WM8960 handle structure.
 * @param wm8960_configure WM8960 configuration structure.
 */
status_t WM8960_Init(codec_handle_t *handle, void *wm8960_configure);

/*!
 * @brief Deinit the WM8960 codec.
 *
 * This function close all modules in WM8960 to save power.
 *
 * @param handle WM8960 handle structure pointer.
 */
status_t WM8960_Deinit(codec_handle_t *handle);

/*!
 * @brief Set audio data route in WM8960.
 *
 * This function would set the data route according to route. The route cannot be combined,
 * as all route would enable different modules.
 * Note: If a new route is set, the previous route would not work.
 *
 * @param handle WM8960 handle structure.
 * @param route Audio data route in WM8960.
 */
status_t WM8960_SetDataRoute(codec_handle_t *handle, wm8960_route_t route);

/*!
 * @brief Set left audio input source in WM8960.
 *
 * @param handle WM8960 handle structure.
 * @param input Audio input source.
 */
status_t WM8960_SetLeftInput(codec_handle_t *handle, wm8960_input_t input);

/*!
 * @brief Set right audio input source in WM8960.
 *
 * @param handle WM8960 handle structure.
 * @param input Audio input source.
 */
status_t WM8960_SetRightInput(codec_handle_t *handle, wm8960_input_t input);

/*!
 * @brief Set the audio transfer protocol.
 *
 * WM8960 only supports I2S, left justified, right justified, PCM A, PCM B format.
 *
 * @param handle WM8960 handle structure.
 * @param bus Audio data transfer protocol.
 */
status_t WM8960_SetProtocol(codec_handle_t *handle, wm8960_protocol_t protocol);

/*!
 * @brief Set WM8960 as master or slave.
 *
 * @param handle WM8960 handle structure.
 * @param master 1 represent master, 0 represent slave.
 */
void WM8960_SetMasterSlave(codec_handle_t *handle, bool master);

/*!
 * @brief Set the volume of different modules in WM8960.
 *
 * This function would set the volume of WM8960 modules. Uses need to appoint the module.
 * The function assume that left channel and right channel has the same volume.
 *
 * @param handle WM8960 handle structure.
 * @param module Module to set volume, it can be ADC, DAC, Headphone and so on.
 * @param volume Volume value need to be set.
 */
status_t WM8960_SetVolume(codec_handle_t *handle, wm8960_module_t module, uint32_t volume);

/*!
 * @brief Get the volume of different modules in WM8960.
 *
 * This function gets the volume of WM8960 modules. Uses need to appoint the module.
 * The function assume that left channel and right channel has the same volume.
 *
 * @param handle WM8960 handle structure.
 * @param module Module to set volume, it can be ADC, DAC, Headphone and so on.
 * @return Volume value of the module.
 */
uint32_t WM8960_GetVolume(codec_handle_t *handle, wm8960_module_t module);

/*!
 * @brief Mute modules in WM8960.
 *
 * @param handle WM8960 handle structure.
 * @param module Modules need to be mute.
 * @param isEnabled Mute or unmute, 1 represent mute.
 */
status_t WM8960_SetMute(codec_handle_t *handle, wm8960_module_t module, bool isEnabled);

/*!
 * @brief Enable/disable expected devices.
 *
 * @param handle WM8960 handle structure.
 * @param module Module expected to enable.
 * @param isEnabled Enable or disable moudles.
 */
status_t WM8960_SetModule(codec_handle_t *handle, wm8960_module_t module, bool isEnabled);

/*!
 * @brief Configure the data format of audio data.
 *
 * This function would configure the registers about the sample rate, bit depths.
 *
 * @param handle WM8960 handle structure pointer.
 * @param sysclk system clock of the codec which can be generated by MCLK or PLL output.
 * @param sample_rate Sample rate of audio file running in WM8960. WM8960 now
 * supports 8k, 11.025k, 12k, 16k, 22.05k, 24k, 32k, 44.1k, 48k and 96k sample rate.
 * @param bits Bit depth of audio file (WM8960 only supports 16bit, 20bit, 24bit
 * and 32 bit in HW).
 */
status_t WM8960_ConfigDataFormat(codec_handle_t *handle, uint32_t sysclk, uint32_t sample_rate, uint32_t bits);

/*!
 * @brief Enable/disable jack detect feature.
 *
 * @param handle WM8960 handle structure.
 * @param isEnabled Enable or disable moudles.
 */
status_t WM8960_SetJackDetect(codec_handle_t *handle, bool isEnabled);

/*!
 * @brief Write register to WM8960 using I2C.
 *
 * @param handle WM8960 handle structure.
 * @param reg The register address in WM8960.
 * @param val Value needs to write into the register.
 */
status_t WM8960_WriteReg(codec_handle_t *handle, uint8_t reg, uint16_t val);

/*!
 * @brief Read register from WM8960 using I2C.
 * @param handle WM8960 handle structure.
 * @param reg The register address in WM8960.
 * @param val Value written to.
 */
status_t WM8960_ReadReg(uint8_t reg, uint16_t *val);

/*!
 * @brief Modify some bits in the register using I2C.
 * @param handle WM8960 handle structure.
 * @param reg The register address in WM8960.
 * @param mask The mask code for the bits want to write. The bit you want to write should be 0.
 * @param val Value needs to write into the register.
 */
status_t WM8960_ModifyReg(codec_handle_t *handle, uint8_t reg, uint16_t mask, uint16_t val);

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* _FSL_WM8960_H_ */

/*******************************************************************************
 * API
 ******************************************************************************/
