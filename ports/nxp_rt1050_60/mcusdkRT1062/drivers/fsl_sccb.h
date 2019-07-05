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

#ifndef _FSL_SCCB_H_
#define _FSL_SCCB_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#if defined(FSL_FEATURE_SOC_LPI2C_COUNT) && (FSL_FEATURE_SOC_LPI2C_COUNT)
typedef LPI2C_Type *sccb_i2c_t;
#include "fsl_lpi2c.h"
#else
typedef I2C_Type *sccb_i2c_t;
#include "fsl_i2c.h"
#endif

/*! @brief SCCB register address type. */
typedef enum _sccb_reg_addr
{
    kSCCB_RegAddr8Bit,  /*!< 8-bit register address. */
    kSCCB_RegAddr16Bit, /*!< 16-bit register address. */
} sccb_reg_addr_t;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Write value to the SCCB register.
 *
 * @param i2c SCCB I2C port.
 * @param i2cAddr SCCB I2C address.
 * @param addrType SCCB register address type.
 * @param reg The register to write.
 * @param value The value to write.
 * @return Returns @ref kStatus_Success if success, otherwise returns error code.
 */
status_t SCCB_WriteReg(sccb_i2c_t i2c, uint8_t i2cAddr, sccb_reg_addr_t addrType, uint32_t reg, uint8_t value);

/*!
 * @brief Write values to multiple SCCB registers.
 *
 * @param i2c SCCB I2C port.
 * @param i2cAddr SCCB I2C address.
 * @param addrType SCCB register address type.
 * @param startReg The start register to write.
 * @param value Pointer to the value to write.
 * @param len Length of the value to write.
 * @return Returns @ref kStatus_Success if success, otherwise returns error code.
 */
status_t SCCB_WriteMultiRegs(
    sccb_i2c_t i2c, uint8_t i2cAddr, sccb_reg_addr_t addrType, uint32_t startReg, const uint8_t *value, uint32_t len);

/*!
 * @brief Read the SCCB register value.
 *
 * @param i2c SCCB I2C port.
 * @param i2cAddr SCCB I2C address.
 * @param addrType SCCB register address type.
 * @param reg The register to read.
 * @param value The value read out.
 * @return Returns @ref kStatus_Success if success, otherwise returns error code.
 */
status_t SCCB_ReadReg(sccb_i2c_t i2c, uint8_t i2cAddr, sccb_reg_addr_t addrType, uint32_t reg, uint8_t *value);

/*!
 * @brief Modify the SCCB register value.
 *
 * This function modifies some bit fields of a register.
 *
 * @param i2c SCCB I2C port.
 * @param i2cAddr SCCB I2C address.
 * @param addrType SCCB register address type.
 * @param reg The register to modify.
 * @param clrMask The mask value to clear.
 * @param value The value to set.
 * @return Returns @ref kStatus_Success if success, otherwise returns error code.
 */
status_t SCCB_ModifyReg(
    sccb_i2c_t i2c, uint8_t i2cAddr, sccb_reg_addr_t addrType, uint32_t reg, uint8_t clrMask, uint8_t value);

#if defined(__cplusplus)
}
#endif

#endif /* _FSL_SCCB_H_ */
