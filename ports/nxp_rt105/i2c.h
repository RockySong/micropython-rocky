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
#define MICROPY_HW_I2C0_NAME "i2c0"
#define MICROPY_HW_I2C0_SDA (pin_024)
#define MICROPY_HW_I2C0_SCL (pin_025)

#define MICROPY_HW_I2C2_NAME "i2c2"
#define MICROPY_HW_I2C2_SDA (pin_323)
#define MICROPY_HW_I2C2_SCL (pin_324)

#define MICROPY_HW_I2C3_NAME "i2c3"
#define MICROPY_HW_I2C3_SDA (pin_218)
#define MICROPY_HW_I2C3_SCL (pin_219)

#define MICROPY_HW_I2C4_NAME "i2c4"
#define MICROPY_HW_I2C4_SDA (pin_326)
#define MICROPY_HW_I2C4_SCL (pin_327)

#define MICROPY_HW_I2C6_NAME "i2c6"
#define MICROPY_HW_I2C6_SDA (pin_42)
#define MICROPY_HW_I2C6_SCL (pin_43)

#define MICROPY_HW_I2C8_NAME "i2c8"
#define MICROPY_HW_I2C8_SDA (pin_117)
#define MICROPY_HW_I2C8_SCL (pin_118)

#define MICROPY_HW_I2C9_NAME "i2c9"
#define MICROPY_HW_I2C9_SDA (pin_321)
#define MICROPY_HW_I2C9_SCL (pin_322)

typedef enum {
	PYB_I2C_0 = 0,
    PYB_I2C_1 = 1,
    PYB_I2C_2 = 2,
    PYB_I2C_3 = 3,
    PYB_I2C_4 = 4,
    PYB_I2C_5 = 5,
    PYB_I2C_6 = 6,
    PYB_I2C_7 = 7,
    PYB_I2C_8 = 8,
    PYB_I2C_9 = 9,
    PYB_I2C_NONE = 31, 
} pyb_i2c_t;

#define I2C_OBJ_FLAG_ENABLED	1
#define I2C_OBJ_FLAG_BUSY		2

typedef struct _pyb_i2c_obj_t {
    mp_obj_base_t base;
    LPI2C_Type *pI2C;
    pyb_i2c_t ndx;
	clock_name_t myClock;
	clock_mux_t clockSel;
	// SYSCON_RSTn_t resetNdx;  // call LPI2C_MasterReset();
    IRQn_Type irqn;
	uint32_t mstBaudrate;
	uint32_t flags;
	bool isUseDMA;
	bool isMaster;
	lpi2c_master_config_t mstCfg;
	// lpi2c_master_dma_handle_t hMstDma;
	// lpi2c_slave_config_t slvCfg;
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

