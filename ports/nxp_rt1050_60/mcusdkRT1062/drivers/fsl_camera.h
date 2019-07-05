/*
 * Copyright (c) 2017, NXP Semiconductors, Inc.
 * All rights reserved.
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

#ifndef _FSL_CAMERA_H_
#define _FSL_CAMERA_H_

#include "fsl_video_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Camera control flags. */
enum _camera_flags
{
    kCAMERA_HrefActiveLow = 0U,                 /*!< HREF is active low. */
    kCAMERA_HrefActiveHigh = (1U << 0U),        /*!< HREF is active high. */
    kCAMERA_DataLatchOnFallingEdge = 0U,        /*!< Pixel data latched at falling edge of pixel clock. */
    kCAMERA_DataLatchOnRisingEdge = (1U << 1U), /*!< Pixel data latched at rising edge of pixel clock. */
    kCAMERA_VsyncActiveLow = 0U,                /*!< VSYNC is active low. */
    kCAMERA_VsyncActiveHigh = (1U << 2U),       /*!< VSYNC is active high. */
};

/*! @brief Camera interface type. */
typedef enum _camera_interface
{
    kCAMERA_InterfaceGatedClock,    /*!< HSYNC/HREF, VSYNC, and PIXCLK signals are used. */
    kCAMERA_InterfaceNonGatedClock, /*!< VSYNC, and PIXCLK signals are used. */
    kCAMERA_InterfaceCCIR656,       /*!< CCIR656 interface. */
    kCAMERA_InterfaceMIPI,          /*!< MIPI CSI2 interface. */
} camera_interface_t;

/*! @brief Camera configuration. */
typedef struct _camera_config
{
    video_pixel_format_t pixelFormat;    /*!< Pixel format. */
    uint8_t bytesPerPixel;               /*!< Byte per pixel. */
    uint32_t resolution;                 /*!< Resolution, see @ref video_resolution_t and @ref FSL_VIDEO_RESOLUTION. */
    uint16_t frameBufferLinePitch_Bytes; /*!< Frame buffer line pitch in bytes. */
    camera_interface_t interface;        /*!< Interface type. */
    uint32_t controlFlags;               /*!< Control flags, OR'ed value of @ref _camera_flags. */
    uint8_t framePerSec;                 /*!< Frame per second. */
} camera_config_t;

#endif /* _FSL_CAMERA_H_ */
