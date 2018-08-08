/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include "fsl_lpi2c.h"
#include "fsl_lpi2c_edma.h"

#include "dma.h"

#define MICROPY_HW_I2C_BAUDRATE_MAX	(1000*1000)

// I2C busses

#define MICROPY_HW_I2C3_NAME "i2c3"
#define MICROPY_HW_I2C3_SDA (pin_EMC_21)
#define MICROPY_HW_I2C3_SCL (pin_EMC_22)

#define MICROPY_HW_I2C4_NAME "i2c4"
#define MICROPY_HW_I2C4_SDA (pin_EMC_11)
#define MICROPY_HW_I2C4_SCL (pin_EMC_12)


typedef enum {
	PYB_I2C_0 = 0,
    PYB_I2C_1 = 1,
    PYB_I2C_2 = 2,
    PYB_I2C_3 = 3,
    PYB_I2C_4 = 4,

} pyb_i2c_t;

#define I2C_OBJ_FLAG_ENABLED	1
#define I2C_OBJ_FLAG_BUSY		2

typedef struct _pyb_i2c_obj_t {
    mp_obj_base_t base;
    LPI2C_Type *pI2C;
    pyb_i2c_t ndx;
	clock_name_t myClock;
	clock_mux_t clockSel;
	clock_div_t clockDiv;
	// SYSCON_RSTn_t resetNdx;  // call LPI2C_MasterReset();
    IRQn_Type irqn;
	uint32_t mstBaudrate;
	uint32_t flags;
	bool isUseDMA;
	bool isMaster;
	lpi2c_master_config_t mstCfg;
	lpi2c_slave_config_t slvCfg;
} pyb_i2c_obj_t;

// use this for OwnAddress1 to configure I2C in master mode
#define PYB_I2C_MASTER_ADDRESS (0xfe)

extern const mp_obj_type_t pyb_i2c_type;

#ifndef _I2C_C_
extern const pyb_i2c_obj_t pyb_i2c_obj[];
#endif

void i2c_init0(void);
bool i2c_init(uint32_t ndx, uint32_t baudRate);
void i2c_init_freq(pyb_i2c_obj_t *self, mp_int_t freq);
uint32_t i2c_get_baudrate(uint32_t ndx);
// void i2c_ev_irq_handler(mp_uint_t i2c_id);
// void i2c_er_irq_handler(mp_uint_t i2c_id);

