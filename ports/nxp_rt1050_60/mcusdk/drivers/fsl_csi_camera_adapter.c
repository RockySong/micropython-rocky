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

#include "fsl_camera.h"
#include "fsl_camera_receiver.h"
#include "fsl_csi.h"
#include "fsl_csi_camera_adapter.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

static status_t CSI_ADAPTER_Init(camera_receiver_handle_t *handle,
                                 const camera_config_t *config,
                                 camera_receiver_callback_t callback,
                                 void *userData);

static status_t CSI_ADAPTER_Deinit(camera_receiver_handle_t *handle);

static status_t CSI_ADAPTER_Start(camera_receiver_handle_t *handle);

static status_t CSI_ADAPTER_Stop(camera_receiver_handle_t *handle);

static status_t CSI_ADAPTER_SubmitEmptyBuffer(camera_receiver_handle_t *handle, uint32_t buffer);

static status_t CSI_ADAPTER_GetFullBuffer(camera_receiver_handle_t *handle, uint32_t *buffer);

static void CSI_ADAPTER_Callback(CSI_Type *base, csi_handle_t *handle, status_t status, void *userData);

static status_t CSI_ADAPTER_InitExt(camera_receiver_handle_t *handle,
                                 const camera_config_t *config,
                                 const void *specialConfig,
                                 camera_receiver_callback_t callback,
                                 void *userData);

/*******************************************************************************
 * Variables
 ******************************************************************************/
const camera_receiver_operations_t csi_ops = {
    .init = CSI_ADAPTER_Init,
    .deinit = CSI_ADAPTER_Deinit,
    .start = CSI_ADAPTER_Start,
    .stop = CSI_ADAPTER_Stop,
    .submitEmptyBuffer = CSI_ADAPTER_SubmitEmptyBuffer,
    .getFullBuffer = CSI_ADAPTER_GetFullBuffer,
    .init_ext = CSI_ADAPTER_InitExt
};

/*******************************************************************************
 * Code
 ******************************************************************************/

static status_t CSI_ADAPTER_Init(camera_receiver_handle_t *handle,
                                 const camera_config_t *config,
                                 camera_receiver_callback_t callback,
                                 void *userData)
{
    csi_config_t csiConfig;

    csi_resource_t *resource = (csi_resource_t *)(handle->resource);
    csi_private_data_t *privateData = (csi_private_data_t *)(handle->privateData);

    CSI_GetDefaultConfig(&csiConfig);

    csiConfig.bytesPerPixel = config->bytesPerPixel;

    if (kCAMERA_InterfaceGatedClock == config->interface)
    {
        csiConfig.workMode = kCSI_GatedClockMode;
    }
    else if (kCAMERA_InterfaceNonGatedClock == config->interface)
    {
        csiConfig.workMode = kCSI_NonGatedClockMode;
    }
    else if (kCAMERA_InterfaceCCIR656 == config->interface)
    {
        csiConfig.workMode = kCSI_CCIR656ProgressiveMode;
    }
    else
    {
        return kStatus_InvalidArgument;
    }

    csiConfig.linePitch_Bytes = config->frameBufferLinePitch_Bytes;
    csiConfig.dataBus = kCSI_DataBus8Bit;
    csiConfig.useExtVsync = true;
    csiConfig.height = FSL_VIDEO_EXTRACT_HEIGHT(config->resolution);
    csiConfig.width = FSL_VIDEO_EXTRACT_WIDTH(config->resolution);

    csiConfig.polarityFlags = 0U;
    if (kCAMERA_HrefActiveHigh == (config->controlFlags & kCAMERA_HrefActiveHigh))
    {
        csiConfig.polarityFlags |= kCSI_HsyncActiveHigh;
    }
    if (kCAMERA_DataLatchOnRisingEdge == (config->controlFlags & kCAMERA_DataLatchOnRisingEdge))
    {
        csiConfig.polarityFlags |= kCSI_DataLatchOnRisingEdge;
    }
    if (kCAMERA_VsyncActiveHigh != (config->controlFlags & kCAMERA_VsyncActiveHigh))
    {
        csiConfig.polarityFlags |= kCSI_VsyncActiveLow;
    }

    CSI_Init(resource->csiBase, &csiConfig);

    privateData->callback = callback;
    privateData->userData = userData;

    return CSI_TransferCreateHandle(resource->csiBase, &(privateData->csiHandle), CSI_ADAPTER_Callback,
                                    (void *)(handle));
}

static status_t CSI_ADAPTER_Deinit(camera_receiver_handle_t *handle)
{
    CSI_Deinit(((csi_resource_t *)handle->resource)->csiBase);

    return kStatus_Success;
}

static status_t CSI_ADAPTER_Start(camera_receiver_handle_t *handle)
{
    return CSI_TransferStart(((csi_resource_t *)handle->resource)->csiBase,
                             &(((csi_private_data_t *)(handle->privateData))->csiHandle));
}

static status_t CSI_ADAPTER_Stop(camera_receiver_handle_t *handle)
{
    return CSI_TransferStop(((csi_resource_t *)handle->resource)->csiBase,
                            &(((csi_private_data_t *)(handle->privateData))->csiHandle));
}

static status_t CSI_ADAPTER_SubmitEmptyBuffer(camera_receiver_handle_t *handle, uint32_t buffer)
{
    return CSI_TransferSubmitEmptyBuffer(((csi_resource_t *)handle->resource)->csiBase,
                                         &(((csi_private_data_t *)(handle->privateData))->csiHandle), buffer);
}

static status_t CSI_ADAPTER_GetFullBuffer(camera_receiver_handle_t *handle, uint32_t *buffer)
{
    return CSI_TransferGetFullBuffer(((csi_resource_t *)handle->resource)->csiBase,
                                     &(((csi_private_data_t *)(handle->privateData))->csiHandle), buffer);
}

static void CSI_ADAPTER_Callback(CSI_Type *base, csi_handle_t *handle, status_t status, void *userData)
{
    camera_receiver_handle_t *cameraReceiverHandle = (camera_receiver_handle_t *)userData;
    csi_private_data_t *privateData = (csi_private_data_t *)(cameraReceiverHandle->privateData);

    if (privateData->callback)
    {
        if (kStatus_CSI_FrameDone == status)
        {
            status = kStatus_Success;
        }
        else
        {
            status = kStatus_Fail;
        }
        privateData->callback(cameraReceiverHandle, status, privateData->userData);
    }
}

static status_t CSI_ADAPTER_InitExt(camera_receiver_handle_t *handle,
                                 const camera_config_t *config,
                                 const void *specialConfig,
                                 camera_receiver_callback_t callback,
                                 void *userData)
{
    return CSI_ADAPTER_Init(handle, config, callback, userData);
}
