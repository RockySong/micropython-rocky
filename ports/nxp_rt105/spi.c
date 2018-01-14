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
#define _SPI_C_
#include <stdio.h>
#include <string.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "extmod/machine_spi.h"
#include "irq.h"
#include "pin.h"
#include "genhdr/pins.h"
#include "bufhelper.h"
#include "spi.h"

/// \moduleref pyb
/// \class SPI - a master-driven serial protocol
///
/// SPI is a serial protocol that is driven by a master.  At the physical level
/// there are 3 lines: SCK, MOSI, MISO.
///
/// See usage model of I2C; SPI is very similar.  Main difference is
/// parameters to init the SPI bus:
///
///     from pyb import SPI
///     spi = SPI(1, SPI.MASTER, baudrate=600000, polarity=1, phase=0, crc=0x7)
///
/// Only required parameter is mode, SPI.MASTER or SPI.SLAVE.  Polarity can be
/// 0 or 1, and is the level the idle clock line sits at.  Phase can be 0 or 1
/// to sample data on the first or second clock edge respectively.  Crc can be
/// None for no CRC, or a polynomial specifier.
///
/// Additional method for SPI:
///
///     data = spi.send_recv(b'1234')        # send 4 bytes and receive 4 bytes
///     buf = bytearray(4)
///     spi.send_recv(b'1234', buf)          # send 4 bytes and receive 4 into buf
///     spi.send_recv(buf, buf)              # send/recv 4 bytes from/to buf

// Possible DMA configurations for SPI busses:
// SPI1_TX: DMA2_Stream3.CHANNEL_3 or DMA2_Stream5.CHANNEL_3
// SPI1_RX: DMA2_Stream0.CHANNEL_3 or DMA2_Stream2.CHANNEL_3
// SPI2_TX: DMA1_Stream4.CHANNEL_0
// SPI2_RX: DMA1_Stream3.CHANNEL_0
// SPI3_TX: DMA1_Stream5.CHANNEL_0 or DMA1_Stream7.CHANNEL_0
// SPI3_RX: DMA1_Stream0.CHANNEL_0 or DMA1_Stream2.CHANNEL_0
// SPI4_TX: DMA2_Stream4.CHANNEL_5 or DMA2_Stream1.CHANNEL_4
// SPI4_RX: DMA2_Stream3.CHANNEL_5 or DMA2_Stream0.CHANNEL_4
// SPI5_TX: DMA2_Stream4.CHANNEL_2 or DMA2_Stream6.CHANNEL_7
// SPI5_RX: DMA2_Stream3.CHANNEL_2 or DMA2_Stream5.CHANNEL_7
// SPI6_TX: DMA2_Stream5.CHANNEL_1
// SPI6_RX: DMA2_Stream6.CHANNEL_1


pyb_spi_obj_t pyb_spi_obj[10] = {
    {{&pyb_spi_type}, SPI0, PYB_SPI_0, kCLOCK_Flexcomm0, kFRO12M_to_FLEXCOMM0, kFC0_RST_SHIFT_RSTn, FLEXCOMM0_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI1, PYB_SPI_1, kCLOCK_Flexcomm1, kFRO12M_to_FLEXCOMM1, kFC1_RST_SHIFT_RSTn, FLEXCOMM1_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI2, PYB_SPI_2, kCLOCK_Flexcomm2, kFRO12M_to_FLEXCOMM2, kFC2_RST_SHIFT_RSTn, FLEXCOMM2_IRQn, 1000000,
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI3, PYB_SPI_3, kCLOCK_Flexcomm3, kFRO12M_to_FLEXCOMM3, kFC3_RST_SHIFT_RSTn, FLEXCOMM3_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI4, PYB_SPI_4, kCLOCK_Flexcomm4, kFRO12M_to_FLEXCOMM4, kFC4_RST_SHIFT_RSTn, FLEXCOMM4_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI5, PYB_SPI_5, kCLOCK_Flexcomm5, kFRO12M_to_FLEXCOMM5, kFC5_RST_SHIFT_RSTn, FLEXCOMM5_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI6, PYB_SPI_6, kCLOCK_Flexcomm6, kFRO12M_to_FLEXCOMM6, kFC6_RST_SHIFT_RSTn, FLEXCOMM6_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI7, PYB_SPI_7, kCLOCK_Flexcomm7, kFRO12M_to_FLEXCOMM7, kFC7_RST_SHIFT_RSTn, FLEXCOMM7_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI8, PYB_SPI_8, kCLOCK_Flexcomm8, kFRO12M_to_FLEXCOMM8, kFC8_RST_SHIFT_RSTn, FLEXCOMM8_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
    {{&pyb_spi_type}, SPI9, PYB_SPI_9, kCLOCK_Flexcomm9, kFRO12M_to_FLEXCOMM9, kFC9_RST_SHIFT_RSTn, FLEXCOMM9_IRQn, 1000000, 
		0, 1, 1, 0, 0, 0, 0, {0}, {0}, {0}},
};

#define SPI_INIT_PINS(n) \
	pyb_spi_obj[n].pSSEL = &MICROPY_HW_SPI##n##_NSS; \
	pyb_spi_obj[n].pSCK = &MICROPY_HW_SPI##n##_SCK; \
	pyb_spi_obj[n].pMOSI = &MICROPY_HW_SPI##n##_MOSI; \
	pyb_spi_obj[n].pMISO = &MICROPY_HW_SPI##n##_MISO; 

void spi_init0(void) {
	#if !defined(MICROPY_HW_SPI0_NAME)
	pyb_spi_obj[0].pSPI = 0;
	#else
	SPI_INIT_PINS(0);
	#endif

	#if !defined(MICROPY_HW_SPI1_NAME)
	pyb_spi_obj[1].pSPI = 0;
	#else
	SPI_INIT_PINS(1);
	#endif

	#if !defined(MICROPY_HW_SPI2_NAME)
	pyb_spi_obj[2].pSPI = 0;
	#else
	SPI_INIT_PINS(2);
	#endif

	#if !defined(MICROPY_HW_SPI3_NAME)
	pyb_spi_obj[3].pSPI = 0;
	#else
	SPI_INIT_PINS(3);
	#endif

	
	#if !defined(MICROPY_HW_SPI4_NAME)
	pyb_spi_obj[4].pSPI = 0;
	#else
	SPI_INIT_PINS(4);
	#endif

	#if !defined(MICROPY_HW_SPI5_NAME)
	pyb_spi_obj[5].pSPI = 0;
	#else
	SPI_INIT_PINS(5);
	#endif


	#if !defined(MICROPY_HW_SPI6_NAME)
	pyb_spi_obj[6].pSPI = 0;
	#else
	SPI_INIT_PINS(6);
	#endif

	#if !defined(MICROPY_HW_SPI7_NAME)
	pyb_spi_obj[7].pSPI = 0;
	#else
	SPI_INIT_PINS(7);
	#endif

	
	#if !defined(MICROPY_HW_SPI8_NAME)
	pyb_spi_obj[8].pSPI = 0;
	#else
	SPI_INIT_PINS(8);
	#endif


	#if !defined(MICROPY_HW_SPI9_NAME)
	pyb_spi_obj[9].pSPI = 0;
	#else
	SPI_INIT_PINS(9);
	#endif


}


STATIC pyb_spi_t spi_find(mp_obj_t id) {
    if (MP_OBJ_IS_STR(id)) {
        // given a string id
        const char *port = mp_obj_str_get_str(id);
        if (0) {
		#ifdef MICROPY_HW_SPI0_NAME
		} else if (strcmp(port, MICROPY_HW_SPI0_NAME) == 0) {
            return PYB_SPI_0;
        #endif
        #ifdef MICROPY_HW_SPI1_NAME
        } else if (strcmp(port, MICROPY_HW_SPI1_NAME) == 0) {
            return PYB_SPI_1;
        #endif
        #ifdef MICROPY_HW_SPI2_NAME
        } else if (strcmp(port, MICROPY_HW_SPI2_NAME) == 0) {
            return PYB_SPI_2;
        #endif
		#ifdef MICROPY_HW_SPI3_NAME
        } else if (strcmp(port, MICROPY_HW_SPI3_NAME) == 0) {
            return PYB_SPI_3;
        #endif
        #ifdef MICROPY_HW_SPI4_NAME
        } else if (strcmp(port, MICROPY_HW_SPI4_NAME) == 0) {
            return PYB_SPI_4;
        #endif
        #ifdef MICROPY_HW_SPI5_NAME
        } else if (strcmp(port, MICROPY_HW_SPI5_NAME) == 0) {
            return PYB_SPI_5;
        #endif
		#ifdef MICROPY_HW_SPI6_NAME
        } else if (strcmp(port, MICROPY_HW_SPI6_NAME) == 0) {
            return PYB_SPI_6;
        #endif
        #ifdef MICROPY_HW_SPI7_NAME
        } else if (strcmp(port, MICROPY_HW_SPI7_NAME) == 0) {
            return PYB_SPI_7;
        #endif
        #ifdef MICROPY_HW_SPI8_NAME
        } else if (strcmp(port, MICROPY_HW_SPI8_NAME) == 0) {
            return PYB_SPI_8;
        #endif
		#ifdef MICROPY_HW_SPI9_NAME
        } else if (strcmp(port, MICROPY_HW_SPI9_NAME) == 0) {
            return PYB_SPI_9;
        #endif
        }			
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
            "SPI(%s) does not exist", port));
    } else {
        // given an integer id
        int spi_id = mp_obj_get_int(id);
        if (spi_id < MP_ARRAY_SIZE(pyb_spi_obj)
            && pyb_spi_obj[spi_id].pSPI != NULL) {
            return spi_id;
        }
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
            "SPI(%d) does not exist", spi_id));
    }
}

// sets the parameters in the SPI_InitTypeDef struct
// if an argument is -1 then the corresponding parameter is not changed
STATIC void spi_set_params(pyb_spi_obj_t *self, int32_t baudrate,
    int32_t polarity, int32_t phase, int32_t bits, int32_t firstbit) 
{
	self->mstCfg.baudRate_Bps = self->mstBaudrate = baudrate;
	self->mstCfg.polarity = !polarity ? kSPI_ClockPolarityActiveHigh : kSPI_ClockPolarityActiveLow;
	self->mstCfg.phase = !phase ? kSPI_ClockPhaseFirstEdge : kSPI_ClockPhaseSecondEdge; 
	self->mstCfg.dataWidth = (spi_data_width_t)(kSPI_Data4Bits + bits - 4);
	self->mstCfg.direction = !firstbit ? kSPI_MsbFirst : kSPI_LsbFirst;
}

// TODO allow to take a list of pins to use
void spi_init(pyb_spi_obj_t *self) 
{
    // init the GPIO lines
	gpio_pin_config_t t;
	t.pinDirection = kGPIO_DigitalOutput , t.outputLogic = 1;    
	// we use GPIO to control SSEL
	mp_hal_pin_config(self->pSSEL, GPIO_FILTEROFF | GPIO_MODE_DIGITAL, MP_HAL_PIN_PULL_UP, 0);
	GPIO_PinInit(self->pSSEL->gpio, self->pSSEL->port, self->pSSEL->pin, &t);
	
	mp_hal_pin_config_alt(self->pSCK, GPIO_FILTEROFF | GPIO_MODE_DIGITAL, MP_HAL_PIN_PULL_UP, AF_FN_SPI, self->ndx);
	mp_hal_pin_config_alt(self->pMOSI, GPIO_FILTEROFF | GPIO_MODE_DIGITAL, MP_HAL_PIN_PULL_UP, AF_FN_SPI, self->ndx);
	if (self->pMISO != self->pMOSI) // if we don't use MISO, then set MISO the same pin as MOSI to mark
		mp_hal_pin_config_alt(self->pMISO, GPIO_FILTEROFF | GPIO_MODE_DIGITAL, MP_HAL_PIN_PULL_UP, AF_FN_SPI, self->ndx);
    CLOCK_AttachClk(self->clockSel);

    /* attach 12 MHz clock to FLEXCOMM8 (I2C slave) */
    // CLOCK_AttachClk(kFRO12M_to_FLEXCOMM8);
    /* reset FLEXCOMM for I2C */
    RESET_PeripheralReset(self->resetNdx);

	NVIC_EnableIRQ(self->irqn);
	
	status_t ret = SPI_MasterInit(self->pSPI, &self->mstCfg, 12000*1000);
	if (ret != kStatus_Success) {
		nlr_raise(mp_obj_new_exception_msg(&mp_type_Exception, "SPI master init failed!"));	
	}
}

void spi_deinit(pyb_spi_t ndx) {
	pyb_spi_obj_t *pOb = pyb_spi_obj + ndx;
	SPI_Deinit(pOb->pSPI);
	RESET_PeripheralReset(pOb->resetNdx);
	CLOCK_DisableClock(pOb->myClock);
	NVIC_DisableIRQ(pOb->irqn);
}

/*STATIC*/ HAL_StatusTypeDef spi_wait_dma_finished(pyb_spi_t ndx, uint32_t timeout) {
    // Note: we can't use WFI to idle in this loop because the DMA completion
    // interrupt may occur before the WFI.  Hence we miss it and have to wait
    // until the next sys-tick (up to 1ms).
    return HAL_OK;
}

// A transfer of "len" bytes should take len*8*1000/baudrate milliseconds.
// To simplify the calculation we assume the baudrate is never less than 8kHz
// and use that value for the baudrate in the formula, plus a small constant.
#define SPI_TRANSFER_TIMEOUT(len) ((len) + 100)

void spi_transfer(pyb_spi_t ndx, size_t txLen, const uint8_t *src, size_t rxLen, uint8_t *dest, uint32_t timeout, bool isCtrlSSEL) 
{
    // Note: there seems to be a problem sending 1 byte using DMA the first
    // time directly after the SPI/DMA is initialised.  The cause of this is
    // unknown but we sidestep the issue by using polling for 1 byte transfer.
	spi_transfer_t xfer;
	pyb_spi_obj_t *self = pyb_spi_obj + ndx;
    status_t st = kStatus_Success;

	// first , we send
	if (isCtrlSSEL)
		mp_hal_pin_low(self->pSSEL);
	if (src) {
		xfer.txData = (uint8_t*) src;
		xfer.rxData = 0;
		xfer.dataSize = txLen;
		xfer.configFlags = 0;
		st = SPI_MasterTransferBlocking(self->pSPI, &xfer);
		if (st != kStatus_Success)
			goto cleanup;
	}
	if (dest) {
		xfer.txData = 0;
		xfer.rxData = dest;
		xfer.dataSize = rxLen;
		st = SPI_MasterTransferBlocking(self->pSPI, &xfer);
	}	
cleanup:
	if (isCtrlSSEL)
		mp_hal_pin_high(self->pSSEL);

	if (st != kStatus_Success)
		mp_hal_raise(st);
}

/*STATIC*/ void spi_transfer_full_duplex(
	pyb_spi_obj_t *self, size_t len, const uint8_t *src, uint8_t *dest, uint32_t timeout, bool isCtrlSSEL) 
{
    // Note: there seems to be a problem sending 1 byte using DMA the first
    // time directly after the SPI/DMA is initialised.  The cause of this is
    // unknown but we sidestep the issue by using polling for 1 byte transfer.
	spi_transfer_t xfer;
    status_t st = kStatus_Success;
	if (isCtrlSSEL)
		mp_hal_pin_low(self->pSSEL);	
	xfer.txData = (uint8_t*) src;
	xfer.rxData = dest;
	xfer.dataSize = len;
	xfer.configFlags = 0;
	st = SPI_MasterTransferBlocking(self->pSPI, &xfer);

	if (isCtrlSSEL)
		mp_hal_pin_high(self->pSSEL);

	if (st != kStatus_Success)
		mp_hal_raise(st);
}


STATIC void spi_print(const mp_print_t *print, pyb_spi_obj_t *self, bool legacy) {
    
    mp_printf(print, "SPI(%u", self->ndx);
    if (self->flags & SPI_OBJ_FLAG_ENABLED) {
        if (self->isMaster) {
            if (legacy) {
                mp_printf(print, ", SPI.MASTER");
            }
            mp_printf(print, ", baudrate=%u kbps", self->mstBaudrate / 1000);
        } else {
            mp_printf(print, ", SPI.SLAVE");
        }
        mp_printf(print, ", polarity=%u, phase=%u, bits=%u", self->mstCfg.polarity, self->mstCfg.phase, self->mstCfg.dataWidth + 1);
        // if (spi->Init.CRCCalculation == SPI_CRCCALCULATION_ENABLED) {
        //    mp_printf(print, ", crc=0x%x", spi->Init.CRCPolynomial);
        // }
    }
    mp_print_str(print, ")");
}

/******************************************************************************/
/* MicroPython bindings for legacy pyb API                                    */

STATIC void pyb_spi_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_spi_obj_t *self = self_in;
    spi_print(print, self, true);
}

bool pyb_spi_init_c(pyb_spi_t ndx, mp_arg_val_t args[]) {
	pyb_spi_obj_t *self = pyb_spi_obj + ndx;
    if (args[10].u_obj != mp_const_none) {
		nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "CRC not supported in this SPI"));
    } else {
    }

    // init the SPI bus
	SPI_MasterGetDefaultConfig(&self->mstCfg);
	spi_set_params(self, args[1].u_int, args[2].u_int, args[3].u_int, args[4].u_int, args[5].u_int);    
    spi_init(self);
	self->flags |= SPI_OBJ_FLAG_ENABLED;
	return true;
}

/// \method init(mode, baudrate=328125, *, polarity=1, phase=0, bits=8, firstbit=SPI.MSB, ti=False, crc=None)
///
/// Initialise the SPI bus with the given parameters:
///
///   - `mode` must be either `SPI.MASTER` or `SPI.SLAVE`.
///   - `baudrate` is the SCK clock rate (only sensible for a master).
STATIC mp_obj_t pyb_spi_init_helper(pyb_spi_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_mode,     MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 0} },	// 0 = master, !0 = slave
        { MP_QSTR_baudrate, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 1000000} },
        { MP_QSTR_polarity, MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = 0} },
        { MP_QSTR_phase,    MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = 0} },
        { MP_QSTR_bits,     MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = 8} },
        { MP_QSTR_firstbit, MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = kSPI_MsbFirst} },
		// >>> unsupported/unnessary args, keep for compatibility
        { MP_QSTR_prescaler, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 0xffffffff} },
        { MP_QSTR_dir,      MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = 0} },
        { MP_QSTR_nss,      MP_ARG_KW_ONLY | MP_ARG_INT,  {.u_int = 0} },
        { MP_QSTR_ti,       MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = false} },
        { MP_QSTR_crc,      MP_ARG_KW_ONLY | MP_ARG_OBJ,  {.u_obj = mp_const_none} },
		// <<<
    };
	
    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

	pyb_spi_init_c(self->ndx, args);
	
    return mp_const_none;
}

/// \classmethod \constructor(bus, ...)
///
/// Construct an SPI object on the given bus.  `bus` can be 1 or 2.
/// With no additional parameters, the SPI object is created but not
/// initialised (it has the settings from the last initialisation of
/// the bus, if any).  If extra arguments are given, the bus is initialised.
/// See `init` for parameters of initialisation.
///
///
/// At the moment, the NSS pin is not used by the SPI driver and is free
/// for other use.
STATIC mp_obj_t pyb_spi_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out SPI bus
    int spi_id = spi_find(args[0]);

    // get SPI object
    pyb_spi_obj_t *spi_obj = &pyb_spi_obj[spi_id];

    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_spi_init_helper(spi_obj, n_args - 1, args + 1, &kw_args);
    }

    return (mp_obj_t)spi_obj;
}

STATIC mp_obj_t pyb_spi_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    return pyb_spi_init_helper(args[0], n_args - 1, args + 1, kw_args);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_spi_init_obj, 1, pyb_spi_init);

/// \method deinit()
/// Turn off the SPI bus.
STATIC mp_obj_t pyb_spi_deinit(mp_obj_t self_in) {
    pyb_spi_obj_t *self = self_in;
	self->flags &= ~SPI_OBJ_FLAG_ENABLED;
    spi_deinit(self->ndx);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_spi_deinit_obj, pyb_spi_deinit);

/// \method send(send, *, timeout=5000)
/// Send data on the bus:
///
///   - `send` is the data to send (an integer to send, or a buffer object).
///   - `timeout` is the timeout in milliseconds to wait for the send.
///
/// Return value: `None`.
STATIC mp_obj_t pyb_spi_send(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // TODO assumes transmission size is 8-bits wide

    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_send,    MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5000} },
    };

    // parse args
    pyb_spi_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // get the buffer to send from
    mp_buffer_info_t bufinfo;
    uint8_t data[1];
    pyb_buf_get_for_send(args[0].u_obj, &bufinfo, data);

    // send the data
    spi_transfer(self->ndx, bufinfo.len, bufinfo.buf, 0, NULL, args[1].u_int, 1);

    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_spi_send_obj, 1, pyb_spi_send);

/// \method recv(recv, *, timeout=5000)
///
/// Receive data on the bus:
///
///   - `recv` can be an integer, which is the number of bytes to receive,
///     or a mutable buffer, which will be filled with received bytes.
///   - `timeout` is the timeout in milliseconds to wait for the receive.
///
/// Return value: if `recv` is an integer then a new buffer of the bytes received,
/// otherwise the same buffer that was passed in to `recv`.
STATIC mp_obj_t pyb_spi_recv(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // TODO assumes transmission size is 8-bits wide

    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_recv,    MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5000} },
    };

    // parse args
    pyb_spi_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // get the buffer to receive into
    vstr_t vstr;
    mp_obj_t o_ret = pyb_buf_get_for_recv(args[0].u_obj, &vstr);

    // receive the data
	spi_transfer(self->ndx, 0, NULL, vstr.len, (uint8_t*)vstr.buf, args[1].u_int, 1);

    // return the received data
    if (o_ret != MP_OBJ_NULL) {
        return o_ret;
    } else {
        return mp_obj_new_str_from_vstr(&mp_type_bytes, &vstr);
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_spi_recv_obj, 1, pyb_spi_recv);

/// \method send_recv(send, recv=None, *, timeout=5000)
///
/// Send and receive data on the bus at the same time:
///
///   - `send` is the data to send (an integer to send, or a buffer object).
///   - `recv` is a mutable buffer which will be filled with received bytes.
///   It can be the same as `send`, or omitted.  If omitted, a new buffer will
///   be created.
///   - `timeout` is the timeout in milliseconds to wait for the receive.
///
/// Return value: the buffer with the received bytes.
STATIC mp_obj_t pyb_spi_send_recv(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // TODO assumes transmission size is 8-bits wide
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_send,    MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_recv,    MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5000} },
		{ MP_QSTR_halfduplex , MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = false} },
    };

    // parse args
    pyb_spi_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // get buffers to send from/receive to
    mp_buffer_info_t bufinfo_send;
    uint8_t data_send[1];
    mp_buffer_info_t bufinfo_recv;
    vstr_t vstr_recv;
    mp_obj_t o_ret;

    if (args[0].u_obj == args[1].u_obj) {
        // same object for send and receive, it must be a r/w buffer
        mp_get_buffer_raise(args[0].u_obj, &bufinfo_send, MP_BUFFER_RW);
        bufinfo_recv = bufinfo_send;
        o_ret = args[0].u_obj;
    } else {
        // get the buffer to send from
        pyb_buf_get_for_send(args[0].u_obj, &bufinfo_send, data_send);

        // get the buffer to receive into
        if (args[1].u_obj == MP_OBJ_NULL) {
            // only send argument given, so create a fresh buffer of the send length
            vstr_init_len(&vstr_recv, bufinfo_send.len);
            bufinfo_recv.len = vstr_recv.len;
            bufinfo_recv.buf = vstr_recv.buf;
            o_ret = MP_OBJ_NULL;
        } else {
            // recv argument given
            mp_get_buffer_raise(args[1].u_obj, &bufinfo_recv, MP_BUFFER_WRITE);
            if (bufinfo_recv.len != bufinfo_send.len && args[3].u_bool == false) {
                nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "recv must be same length as send"));
            }
            o_ret = args[1].u_obj;
        }
    }

    // do the transfer
    spi_transfer(self->ndx, bufinfo_send.len, bufinfo_send.buf, bufinfo_recv.len, bufinfo_recv.buf, args[2].u_int, args[3].u_bool);

    // return the received data
    if (o_ret != MP_OBJ_NULL) {
        return o_ret;
    } else {
        return mp_obj_new_str_from_vstr(&mp_type_bytes, &vstr_recv);
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_spi_send_recv_obj, 1, pyb_spi_send_recv);

STATIC const mp_rom_map_elem_t pyb_spi_locals_dict_table[] = {
    // instance methods
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_spi_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_spi_deinit_obj) },

    { MP_ROM_QSTR(MP_QSTR_read), MP_ROM_PTR(&mp_machine_spi_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_readinto), MP_ROM_PTR(&mp_machine_spi_readinto_obj) },
    { MP_ROM_QSTR(MP_QSTR_write), MP_ROM_PTR(&mp_machine_spi_write_obj) },
    { MP_ROM_QSTR(MP_QSTR_write_readinto), MP_ROM_PTR(&mp_machine_spi_write_readinto_obj) },

    // legacy methods
    { MP_ROM_QSTR(MP_QSTR_send), MP_ROM_PTR(&pyb_spi_send_obj) },
    { MP_ROM_QSTR(MP_QSTR_recv), MP_ROM_PTR(&pyb_spi_recv_obj) },
    { MP_ROM_QSTR(MP_QSTR_send_recv), MP_ROM_PTR(&pyb_spi_send_recv_obj) },

    // class constants
    /// \constant MASTER - for initialising the bus to master mode
    /// \constant SLAVE - for initialising the bus to slave mode
    /// \constant MSB - set the first bit to MSB
    /// \constant LSB - set the first bit to LSB
    { MP_ROM_QSTR(MP_QSTR_MASTER), MP_ROM_INT(0) },
    { MP_ROM_QSTR(MP_QSTR_SLAVE),  MP_ROM_INT(1) },
    { MP_ROM_QSTR(MP_QSTR_MSB),    MP_ROM_INT(kSPI_MsbFirst) },
    { MP_ROM_QSTR(MP_QSTR_LSB),    MP_ROM_INT(kSPI_LsbFirst) },
    /* TODO
    { MP_ROM_QSTR(MP_QSTR_DIRECTION_2LINES             ((uint32_t)0x00000000)
    { MP_ROM_QSTR(MP_QSTR_DIRECTION_2LINES_RXONLY      SPI_CR1_RXONLY
    { MP_ROM_QSTR(MP_QSTR_DIRECTION_1LINE              SPI_CR1_BIDIMODE
    { MP_ROM_QSTR(MP_QSTR_NSS_SOFT                    SPI_CR1_SSM
    { MP_ROM_QSTR(MP_QSTR_NSS_HARD_INPUT              ((uint32_t)0x00000000)
    { MP_ROM_QSTR(MP_QSTR_NSS_HARD_OUTPUT             ((uint32_t)0x00040000)
    */
};

STATIC MP_DEFINE_CONST_DICT(pyb_spi_locals_dict, pyb_spi_locals_dict_table);

STATIC void spi_transfer_machine(mp_obj_base_t *self_in, size_t len, const uint8_t *src, uint8_t *dest) {
	pyb_spi_obj_t *self = (pyb_spi_obj_t*)self_in;
    spi_transfer(self->ndx, len, src, len, dest, SPI_TRANSFER_TIMEOUT(len), 0);
}

STATIC const mp_machine_spi_p_t pyb_spi_p = {
    .transfer = spi_transfer_machine,
};

const mp_obj_type_t pyb_spi_type = {
    { &mp_type_type },
    .name = MP_QSTR_SPI,
    .print = pyb_spi_print,
    .make_new = pyb_spi_make_new,
    .protocol = &pyb_spi_p,
    .locals_dict = (mp_obj_dict_t*)&pyb_spi_locals_dict,
};

/******************************************************************************/
// Implementation of hard SPI for machine module

typedef struct _machine_hard_spi_obj_t {
    mp_obj_base_t base;
    pyb_spi_obj_t *pyb;
} machine_hard_spi_obj_t;

STATIC const machine_hard_spi_obj_t machine_hard_spi_obj[] = {
    {{&machine_hard_spi_type}, &pyb_spi_obj[0]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[1]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[2]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[3]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[4]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[5]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[6]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[7]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[8]},
    {{&machine_hard_spi_type}, &pyb_spi_obj[9]},
};

STATIC void machine_hard_spi_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    machine_hard_spi_obj_t *self = (machine_hard_spi_obj_t*)self_in;
    spi_print(print, self->pyb, false);
}

mp_obj_t machine_hard_spi_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *all_args) {
    enum { ARG_id, ARG_baudrate, ARG_polarity, ARG_phase, ARG_bits, ARG_firstbit, ARG_sck, ARG_mosi, ARG_miso };
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_id,       MP_ARG_OBJ, {.u_obj = MP_OBJ_NEW_SMALL_INT(-1)} },
        { MP_QSTR_baudrate, MP_ARG_INT, {.u_int = 500000} },
        { MP_QSTR_polarity, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 0} },
        { MP_QSTR_phase,    MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 0} },
        { MP_QSTR_bits,     MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 8} },
        { MP_QSTR_firstbit, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = kSPI_MsbFirst} },
        { MP_QSTR_sck,      MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_mosi,     MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_miso,     MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all_kw_array(n_args, n_kw, all_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // get static peripheral object
    int spi_id = spi_find(args[ARG_id].u_obj);
    const machine_hard_spi_obj_t *self = &machine_hard_spi_obj[spi_id - 1];

	SPI_MasterGetDefaultConfig(&self->pyb->mstCfg);
	spi_set_params(self->pyb, args[ARG_baudrate].u_int, args[ARG_polarity].u_int, args[ARG_phase].u_int, 
		args[ARG_bits].u_int, args[ARG_firstbit].u_int);  

	if (args[ARG_sck].u_obj != MP_OBJ_NULL)
		self->pyb->pSCK = mp_hal_get_pin_obj(args[ARG_sck].u_obj);
	if (args[ARG_sck].u_obj != MP_OBJ_NULL)
		self->pyb->pMOSI = mp_hal_get_pin_obj(args[ARG_mosi].u_obj);
	if (args[ARG_sck].u_obj != MP_OBJ_NULL)
		self->pyb->pMISO = mp_hal_get_pin_obj(args[ARG_miso].u_obj);

    // init the SPI bus
    spi_init(self->pyb);

    return MP_OBJ_FROM_PTR(self);
}

STATIC void machine_hard_spi_init(mp_obj_base_t *self_in, size_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    machine_hard_spi_obj_t *self = (machine_hard_spi_obj_t*)self_in;

    enum { ARG_baudrate, ARG_polarity, ARG_phase, ARG_bits, ARG_firstbit };
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_baudrate, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = -1} },
        { MP_QSTR_polarity, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = -1} },
        { MP_QSTR_phase,    MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = -1} },
        { MP_QSTR_bits,     MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = -1} },
        { MP_QSTR_firstbit, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = -1} },
    };
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

	SPI_MasterGetDefaultConfig(&self->pyb->mstCfg);
	spi_set_params(self->pyb, args[ARG_baudrate].u_int, args[ARG_polarity].u_int, args[ARG_phase].u_int, 
		args[ARG_bits].u_int, args[ARG_firstbit].u_int);  
    // init the SPI bus
    spi_init(self->pyb);

}

STATIC void machine_hard_spi_deinit(mp_obj_base_t *self_in) {
    machine_hard_spi_obj_t *self = (machine_hard_spi_obj_t*)self_in;
    spi_deinit(self->pyb->ndx);
}

STATIC void machine_hard_spi_transfer(mp_obj_base_t *self_in, size_t len, const uint8_t *src, uint8_t *dest) {
    machine_hard_spi_obj_t *self = (machine_hard_spi_obj_t*)self_in;
    spi_transfer(self->pyb->ndx, len, src, len, dest, SPI_TRANSFER_TIMEOUT(len), 0);
}

STATIC const mp_machine_spi_p_t machine_hard_spi_p = {
    .init = machine_hard_spi_init,
    .deinit = machine_hard_spi_deinit,
    .transfer = machine_hard_spi_transfer,
};

const mp_obj_type_t machine_hard_spi_type = {
    { &mp_type_type },
    .name = MP_QSTR_SPI,
    .print = machine_hard_spi_print,
    .make_new = mp_machine_spi_make_new, // delegate to master constructor
    .protocol = &machine_hard_spi_p,
    .locals_dict = (mp_obj_t)&mp_machine_spi_locals_dict,
};
