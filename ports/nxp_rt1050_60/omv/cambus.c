/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * SCCB (I2C like) driver.
 *
 */
#include <stdbool.h>
#include "fsl_lpi2c.h"
#include "pin_mux.h"
#include "fsl_csi.h"
#include "fsl_gpio.h"
#include "clock_config.h"
#include <systick.h>
#include "omv_boardconfig.h"
#include "cambus.h"

/* Select USB1 PLL (480 MHz) as master lpi2c clock source */
#define LPI2C_CLOCK_SOURCE_SELECT (1U)
/* Clock divider for master lpi2c clock source */
#define LPI2C_CLOCK_SOURCE_DIVIDER (0U)
/* Get frequency of lpi2c clock */
#define LPI2C_CLOCK_FREQUENCY ((CLOCK_GetFreq(kCLOCK_Usb1PllClk) / 8) / (LPI2C_CLOCK_SOURCE_DIVIDER + 1U))
#define LPI2C_MASTER_CLOCK_FREQUENCY LPI2C_CLOCK_FREQUENCY

#ifdef BOARD_OMVRT1
#define I2C_MASTER_BASE (LPI2C4_BASE)
#else
#define I2C_MASTER_BASE (LPI2C1_BASE)
#endif

#define I2C_MASTER ((LPI2C_Type *)I2C_MASTER_BASE)

#define LPI2C_MASTER_SLAVE_ADDR_7BIT 0x7EU
#define LPI2C_BAUDRATE 100000U
#define LPI2C_DATA_LENGTH 2U
volatile bool g_MasterCompletionFlag = false;
static void lpi2c_master_callback(LPI2C_Type *base, lpi2c_master_handle_t *handle, status_t status, void *userData)
{
    /* Signal transfer success when received success status. */
    if (status == kStatus_Success)
    {
        g_MasterCompletionFlag = true;
    }
}
//attention please:in this file ,we have only writed the cambus->readb and cambus->writeb,the other two ,be lack of the campility,we do not completed it, will achieve it later.
int cambus_init()
{
    uint32_t sourceClock;
       /*Clock setting for LPI2C*/
    CLOCK_SetMux(kCLOCK_Lpi2cMux, LPI2C_CLOCK_SOURCE_SELECT);
    CLOCK_SetDiv(kCLOCK_Lpi2cDiv, LPI2C_CLOCK_SOURCE_DIVIDER);
        /* LPI2C clock is OSC clock. */
    sourceClock = CLOCK_GetOscFreq();

    lpi2c_master_config_t masterConfig;
    LPI2C_MasterGetDefaultConfig(&masterConfig);
    masterConfig.baudRate_Hz = LPI2C_BAUDRATE;
    LPI2C_MasterInit(I2C_MASTER, &masterConfig, sourceClock);
  /* CSI MCLK select 24M. */
    /*
     * CSI clock source:
     *
     * 00 derive clock from osc_clk (24M)
     * 01 derive clock from PLL2 PFD2
     * 10 derive clock from pll3_120M
     * 11 derive clock from PLL3 PFD1
     */
    CLOCK_SetMux(kCLOCK_CsiMux, 0);
    /*
     * CSI clock divider:
     *
     * 000 divide by 1
     * 001 divide by 2
     * 010 divide by 3
     * 011 divide by 4
     * 100 divide by 5
     * 101 divide by 6
     * 110 divide by 7
     * 111 divide by 8
     */
    CLOCK_SetDiv(kCLOCK_CsiDiv, 0);

    /*
     * For RT1050, there is not dedicate clock gate for CSI MCLK, it use CSI
     * clock gate.
     */

    /* Set the pins for CSI reset and power down. */
    gpio_pin_config_t pinConfig = {
        kGPIO_DigitalOutput, 1,
    };

    GPIO_PinInit(GPIO1, 4, &pinConfig);
    return 0;
}
/* no this function in IMXRT1050
int cambus_scan()
{
    for (uint8_t addr=0x08; addr<=0x77; addr++) {
        __disable_irq();
        if (LPI2C_MasterStart(I2C_MASTER, addr << 1, 10, I2C_TIMEOUT) == HAL_OK) {
            __enable_irq();
            return (addr << 1);
        }
        __enable_irq();
    }

    return 0;
}
*/
int cambus_readb(uint8_t slv_addr, uint8_t reg_addr, uint8_t *reg_data)    //blocking mode read until the buffer have somethin to read
{
   // lpi2c_master_transfer_t masterXfer = {0};
    status_t reVal = kStatus_Fail;
    uint8_t data[2];
    uint8_t size = 0;
    data[size++] = (uint8_t)reg_addr;
   // __disable_irq();
      while (1)
    {
        reVal = LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Write);   //attention:in our read function,this will be the write,because i2c need send the control word to the salve kit before read.

        if (kStatus_Success != reVal)
        {
            LPI2C_MasterStop(I2C_MASTER);
	    return -1;
        }
        else
        {
            break;
        }
    }
    LPI2C_MasterSend(I2C_MASTER, data, size);

    LPI2C_MasterStop(I2C_MASTER);

    LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Read);

    LPI2C_MasterReceive(I2C_MASTER, reg_data, 1);

    LPI2C_MasterStop(I2C_MASTER);

    //__enable_irq();
    return 0; 
}

int cambus_writeb(uint8_t slv_addr, uint8_t reg_addr, uint8_t reg_data)     
{
    uint8_t data[3];
    uint8_t size = 0;
    data[size++] = (uint8_t)reg_addr;
    data[size++] = reg_data;
    status_t status;
    while(1)
    {
	status = LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Write);

        if (kStatus_Success != status)
        {
            LPI2C_MasterStop(I2C_MASTER);
	    return -1;
        }
        else
        {
            break;
        }
    }

    LPI2C_MasterSend(I2C_MASTER, data, size);
    
    LPI2C_MasterStop(I2C_MASTER);
    return 0;
}

static lpi2c_master_handle_t g_m_handle;
int cambus_readw(uint8_t slv_addr, uint8_t reg_addr, uint16_t *reg_data)     //non blocking mode
{
    status_t reVal = kStatus_Fail;
    lpi2c_master_transfer_t masterXfer = {0};
   // __disable_irq();
      while (1)
    {
        reVal = LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Read);

        if (kStatus_Success != reVal)
        {
            LPI2C_MasterStop(I2C_MASTER);
	    return -1;
        }
        else
        {
            break;
        }
    }
    /* Create the LPI2C handle for the non-blocking transfer */
    LPI2C_MasterTransferCreateHandle(I2C_MASTER, &g_m_handle, lpi2c_master_callback, NULL);
    /* subAddress = 0x01, data = g_master_rxBuff - read from slave.
      start + slaveaddress(w) + subAddress + repeated start + slaveaddress(r) + rx data buffer + stop */
    masterXfer.slaveAddress = LPI2C_MASTER_SLAVE_ADDR_7BIT;
    masterXfer.direction = kLPI2C_Read;
    masterXfer.subaddress = (uint32_t)slv_addr;
    masterXfer.subaddressSize = 1;
    masterXfer.data = reg_data;
    masterXfer.dataSize = LPI2C_DATA_LENGTH - 1;
    masterXfer.flags = kLPI2C_TransferDefaultFlag;
    reVal = LPI2C_MasterTransferNonBlocking(I2C_MASTER, &g_m_handle, &masterXfer);
    /*  Reset master completion flag to false. */
    g_MasterCompletionFlag = false;
    if (reVal != kStatus_Success)
    {
        return -1;
    }
    /*  Wait for transfer completed. */
    while (!g_MasterCompletionFlag)
    {
    }
    g_MasterCompletionFlag = false;
    //__enable_irq();
    *reg_data = (*reg_data >> 8) | (*reg_data << 8);
    return 0;
}

int cambus_writew(uint8_t slv_addr, uint8_t reg_addr, uint16_t reg_data)
{
    status_t reVal = kStatus_Fail;
    lpi2c_master_transfer_t masterXfer = {0};
    reg_data = (reg_data >> 8) | (reg_data << 8);
    //__disable_irq();
      while (1)
    {
        reVal = LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Write);

        if (kStatus_Success != reVal)
        {
            LPI2C_MasterStop(I2C_MASTER);
	    return -1;
        }
        else
        {
            break;
        }
    }
      /* Create the LPI2C handle for the non-blocking transfer */
    LPI2C_MasterTransferCreateHandle(I2C_MASTER, &g_m_handle, lpi2c_master_callback, NULL);
     /* subAddress = 0x01, data = g_master_txBuff - write to slave.
      start + slaveaddress(w) + subAddress + length of data buffer + data buffer + stop*/
    masterXfer.slaveAddress = LPI2C_MASTER_SLAVE_ADDR_7BIT;
    masterXfer.direction = kLPI2C_Write;
    masterXfer.subaddress = (uint32_t)slv_addr;
    masterXfer.subaddressSize = 1;
    masterXfer.data = &reg_data;
    masterXfer.dataSize = LPI2C_DATA_LENGTH;
    masterXfer.flags = kLPI2C_TransferDefaultFlag;

    /* Send master non-blocking data to slave */
    reVal = LPI2C_MasterTransferNonBlocking(I2C_MASTER, &g_m_handle, &masterXfer);
    /*  Reset master completion flag to false. */
    g_MasterCompletionFlag = false;
    if (reVal != kStatus_Success)
    {
        return -1;
    }
    /*  Wait for transfer completed. */
    while (!g_MasterCompletionFlag)
    {
    }
    //__enable_irq();
    return 0;
}
/*
status_t reVal = kStatus_Fail;
    lpi2c_master_transfer_t masterXfer = {0};
    //__disable_irq();
    while (1)
    {
        reVal = LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Write);

        if (kStatus_Success != reVal)
        {
            LPI2C_MasterStop(I2C_MASTER);
	    return -1;
        }
        else
        {
            break;
        }
    }
    masterXfer.slaveAddress = LPI2C_MASTER_SLAVE_ADDR_7BIT;
    masterXfer.direction = kLPI2C_Write;
    masterXfer.subaddress = (uint32_t)slv_addr;
    masterXfer.subaddressSize = 1;
    masterXfer.data = &reg_data;
    masterXfer.dataSize = LPI2C_DATA_LENGTH-1;
    masterXfer.flags = kLPI2C_TransferDefaultFlag;
    reVal = LPI2C_MasterTransferBlocking(I2C_MASTER,&masterXfer);
       Reset master completion flag to false. 
    g_MasterCompletionFlag = false;
    if (reVal != kStatus_Success)
    {
        return -1;
    }
      Wait for transfer completed. 
    while (!g_MasterCompletionFlag)
    {
    }
    g_MasterCompletionFlag = false;
    //__enable_irq();    //above all is the writeb function,we rewrite it with our rt sdk
lpi2c_master_transfer_t masterXfer = {0};
    status_t reVal = kStatus_Fail;
  //  __disable_irq();
      while (1)
    {
        reVal = LPI2C_MasterStart(I2C_MASTER, slv_addr, kLPI2C_Read);

        if (kStatus_Success != reVal)
        {
            LPI2C_MasterStop(I2C_MASTER);
	    return -1;
        }
        else
        {
            break;
        }
    }
    masterXfer.slaveAddress = LPI2C_MASTER_SLAVE_ADDR_7BIT;
    masterXfer.direction = kLPI2C_Read;
    masterXfer.subaddress = (uint32_t)slv_addr;
    masterXfer.subaddressSize = 1;
    masterXfer.data = reg_data;
    masterXfer.dataSize = LPI2C_DATA_LENGTH - 1;
    masterXfer.flags = kLPI2C_TransferDefaultFlag;
    reVal = LPI2C_MasterTransferBlocking(I2C_MASTER,&masterXfer);
     Reset master completion flag to false. 
    g_MasterCompletionFlag = false;
    if (reVal != kStatus_Success)
    {
        return -1;
    }
     Wait for transfer completed. 
    while (!g_MasterCompletionFlag)
    {
    }
    g_MasterCompletionFlag = false;
 //   __enable_irq();
    return 0;*/
