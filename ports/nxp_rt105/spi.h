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

#include "fsl_lpspi.h"
#include "fsl_lpspi_edma.h"

#include "dma.h"

#define MICROPY_HW_SPI6_NAME "spi6"
#define MICROPY_HW_SPI6_NSS  (pin_21) // use GPIO
#define MICROPY_HW_SPI6_SCK  (pin_41) // J9_14
#define MICROPY_HW_SPI6_MISO (pin_43) // J9_12
#define MICROPY_HW_SPI6_MOSI (pin_42) // J9_10

#define MICROPY_HW_SPI7_NAME "spi7"
#define MICROPY_HW_SPI7_NSS  (pin_122) // use GPIO
#define MICROPY_HW_SPI7_SCK  (pin_218) // J9_16
#define MICROPY_HW_SPI7_MISO (pin_220) // J9_18
#define MICROPY_HW_SPI7_MOSI (pin_219) // J9_20


#define MICROPY_HW_SPI9_NAME "spi9"
#define MICROPY_HW_SPI9_NSS  (pin_330) // use GPIO
#define MICROPY_HW_SPI9_SCK  (pin_320) // J9_9
#define MICROPY_HW_SPI9_MISO (pin_322) // J9_11
#define MICROPY_HW_SPI9_MOSI (pin_321) // J9_13

typedef enum {
	PYB_SPI_0 = 0,
    PYB_SPI_1 = 1,
    PYB_SPI_2 = 2,
    PYB_SPI_3 = 3,
    PYB_SPI_4 = 4,
    PYB_SPI_5 = 5,
    PYB_SPI_6 = 6,
    PYB_SPI_7 = 7,
    PYB_SPI_8 = 8,
    PYB_SPI_9 = 9,
    PYB_SPI_NONE = 31, 
} pyb_spi_t;

#define SPI_OBJ_FLAG_ENABLED	1
#define SPI_OBJ_FLAG_BUSY		2
#define SPI_OBJ_FLAG_CPHA		3
#define SPI_OBJ_FLAG_CPOL		4

typedef struct _pyb_spi_obj_t {
    mp_obj_base_t base;
    LPSPI_Type *pSPI;
    pyb_spi_t ndx;
	clock_name_t myClock;
	clock_mux_t clockSel;
    IRQn_Type irqn;
	uint32_t mstBaudrate;
	uint32_t flags;
	bool isUseDMA;
	bool isMaster;
	const pin_obj_t *pSSEL;
	const pin_obj_t *pSCK;
	const pin_obj_t *pMISO;	
	const pin_obj_t *pMOSI;
	lpspi_master_config_t mstCfg;
	// lpspi_edma_handle_t hMstDma;
	lpspi_slave_config_t slvCfg;
} pyb_spi_obj_t;

extern const mp_obj_type_t pyb_spi_type;
extern const mp_obj_type_t mp_machine_soft_spi_type;
extern const mp_obj_type_t machine_hard_spi_type;

#include "runtime.h"

void spi_init0(void);
void spi_init(pyb_spi_obj_t *self);
bool pyb_spi_init_c(pyb_spi_t ndx, mp_arg_val_t args[]);
void spi_transfer(pyb_spi_t ndx, size_t txLen, const uint8_t *src, size_t rxLen, uint8_t *dest, uint32_t timeout, bool isCtrlSSEL);
void spi_deinit(pyb_spi_t ndx);

int *spi_get_handle(mp_obj_t o);
