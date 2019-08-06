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

#ifndef _FSL_CSI_CAMERA_ADAPTER_H_
#define _FSL_CSI_CAMERA_ADAPTER_H_

#include "fsl_common.h"
#include "fsl_camera_receiver.h"      //if no this line code,will have a error named "unkonwn name camera_receiver!"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @brief The private data used by the CSI camera receiver. */    
typedef struct _csi_private_data
{
    csi_handle_t csiHandle;              /*!< CSI driver handle. */
    camera_receiver_callback_t callback; /*!< Save the callback. */
    void *userData;                      /*!< Parameter for the callback. */
} csi_private_data_t;

/*!
 * @brief The resources used by the CSI camera receiver.
 *
 * Don't need to initialize the resource before CSI initialization.
 */
typedef struct _csi_resource
{
    CSI_Type *csiBase; /*!< CSI register base. */
} csi_resource_t;

/*! @brief CSI camera receiver operations structure. */
extern const camera_receiver_operations_t csi_ops;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__cplusplus)
}
#endif

#endif /* _FSL_CSI_CAMERA_ADAPTER_H_ */
