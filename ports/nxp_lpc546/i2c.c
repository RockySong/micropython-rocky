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
#define _I2C_C_
#include <stdio.h>
#include <string.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "irq.h"
#include "pin.h"
#include "genhdr/pins.h"
#include "bufhelper.h"

#include "dma.h"
#include "i2c.h"



/// \moduleref pyb
/// \class I2C - a two-wire serial protocol
///
/// I2C is a two-wire protocol for communicating between devices.  At the physical
/// level it consists of 2 wires: SCL and SDA, the clock and data lines respectively.
///
/// I2C objects are created attached to a specific bus.  They can be initialised
/// when created, or initialised later on:
///
///     from pyb import I2C
///
///     i2c = I2C(1)                         # create on bus 1
///     i2c = I2C(1, I2C.MASTER)             # create and init as a master
///     i2c.init(I2C.MASTER, baudrate=20000) # init as a master
///     i2c.init(I2C.SLAVE, addr=0x42)       # init as a slave with given address
///     i2c.deinit()                         # turn off the peripheral
///
/// Printing the i2c object gives you information about its configuration.
///
/// Basic methods for slave are send and recv:
///
///     i2c.send('abc')      # send 3 bytes
///     i2c.send(0x42)       # send a single byte, given by the number
///     data = i2c.recv(3)   # receive 3 bytes
///
/// To receive inplace, first create a bytearray:
///
///     data = bytearray(3)  # create a buffer
///     i2c.recv(data)       # receive 3 bytes, writing them into data
///
/// You can specify a timeout (in ms):
///
///     i2c.send(b'123', timeout=2000)   # timout after 2 seconds
///
/// A master must specify the recipient's address:
///
///     i2c.init(I2C.MASTER)
///     i2c.send('123', 0x42)        # send 3 bytes to slave with address 0x42
///     i2c.send(b'456', addr=0x42)  # keyword for address
///
/// Master also has other methods:
///
///     i2c.is_ready(0x42)           # check if slave 0x42 is ready
///     i2c.scan()                   # scan for slaves on the bus, returning
///                                  #   a list of valid addresses
///     i2c.mem_read(3, 0x42, 2)     # read 3 bytes from memory of slave 0x42,
///                                  #   starting at address 2 in the slave
///     i2c.mem_write('abc', 0x42, 2, timeout=1000)
#define PYB_I2C_MASTER (0)
#define PYB_I2C_SLAVE  (1)
#define IS_MST_IDLE(self)  ((self->pI2C->STAT & 0xF) == 1)


pyb_i2c_obj_t pyb_i2c_obj[10] = {
    {{&pyb_i2c_type}, I2C0, PYB_I2C_0, kCLOCK_Flexcomm0, kFRO12M_to_FLEXCOMM0, kFC0_RST_SHIFT_RSTn, FLEXCOMM0_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C1, PYB_I2C_1, kCLOCK_Flexcomm1, kFRO12M_to_FLEXCOMM1, kFC1_RST_SHIFT_RSTn, FLEXCOMM1_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C2, PYB_I2C_2, kCLOCK_Flexcomm2, kFRO12M_to_FLEXCOMM2, kFC2_RST_SHIFT_RSTn, FLEXCOMM2_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C3, PYB_I2C_3, kCLOCK_Flexcomm3, kFRO12M_to_FLEXCOMM3, kFC3_RST_SHIFT_RSTn, FLEXCOMM3_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C4, PYB_I2C_4, kCLOCK_Flexcomm4, kFRO12M_to_FLEXCOMM4, kFC4_RST_SHIFT_RSTn, FLEXCOMM4_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C5, PYB_I2C_5, kCLOCK_Flexcomm5, kFRO12M_to_FLEXCOMM5, kFC5_RST_SHIFT_RSTn, FLEXCOMM5_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C6, PYB_I2C_6, kCLOCK_Flexcomm6, kFRO12M_to_FLEXCOMM6, kFC6_RST_SHIFT_RSTn, FLEXCOMM6_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C7, PYB_I2C_7, kCLOCK_Flexcomm7, kFRO12M_to_FLEXCOMM7, kFC7_RST_SHIFT_RSTn, FLEXCOMM7_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C8, PYB_I2C_8, kCLOCK_Flexcomm8, kFRO12M_to_FLEXCOMM8, kFC8_RST_SHIFT_RSTn, FLEXCOMM8_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
    {{&pyb_i2c_type}, I2C9, PYB_I2C_9, kCLOCK_Flexcomm9, kFRO12M_to_FLEXCOMM9, kFC9_RST_SHIFT_RSTn, FLEXCOMM9_IRQn, 400000, 0, 1, 1, {0}, {0}, {0}},
};

#define NUM_BAUDRATE_TIMINGS MP_ARRAY_SIZE(pyb_i2c_baudrate_timing)

STATIC void i2c_set_baudrate(uint32_t ndx, uint32_t baudrate) {
    if (baudrate <= 1000 * 1000) {
		pyb_i2c_obj[ndx].mstCfg.baudRate_Bps = baudrate;
		pyb_i2c_obj[ndx].mstBaudrate = baudrate;
	} else {
	    nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
	                                            "Unsupported I2C baudrate: %lu", baudrate));
	}
}

uint32_t i2c_get_baudrate(uint32_t ndx) {
    return pyb_i2c_obj[ndx].mstCfg.baudRate_Bps;
}


void i2c_init0(void) {
	#if !defined(MICROPY_HW_I2C0_NAME)
	pyb_i2c_obj[0].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C1_NAME)
	pyb_i2c_obj[1].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C2_NAME)
	pyb_i2c_obj[2].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C3_NAME)
	pyb_i2c_obj[3].pI2C = 0;
	#endif
	
	#if !defined(MICROPY_HW_I2C4_NAME)
	pyb_i2c_obj[4].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C5_NAME)
	pyb_i2c_obj[5].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C6_NAME)
	pyb_i2c_obj[6].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C7_NAME)
	pyb_i2c_obj[7].pI2C = 0;
	#endif
	
	#if !defined(MICROPY_HW_I2C8_NAME)
	pyb_i2c_obj[8].pI2C = 0;
	#endif

	#if !defined(MICROPY_HW_I2C9_NAME)
	pyb_i2c_obj[9].pI2C = 0;
	#endif

}


#define I2C_INIT_HLP(n) \
case PYB_I2C_##n: \
	pins[0] = &MICROPY_HW_I2C##n##_SCL; \
	pins[1] = &MICROPY_HW_I2C##n##_SDA; \
	CLOCK_EnableClock(kCLOCK_Flexcomm##n); \
	break;

bool i2c_init(uint32_t ndx, uint32_t baudRate) {
    const pin_obj_t *pins[2] = {0, 0};
    switch (ndx) {
        #if defined(MICROPY_HW_I2C0_SCL) && defined(MICROPY_HW_I2C0_SDA)
		I2C_INIT_HLP(0);
        #endif
		
        #if defined(MICROPY_HW_I2C1_SCL) && defined(MICROPY_HW_I2C1_SDA)
		I2C_INIT_HLP(1);
        #endif

        #if defined(MICROPY_HW_I2C2_SCL) && defined(MICROPY_HW_I2C2_SDA)
		I2C_INIT_HLP(2);
        #endif
		
        #if defined(MICROPY_HW_I2C3_SCL) && defined(MICROPY_HW_I2C3_SDA)
		I2C_INIT_HLP(3);
        #endif

        #if defined(MICROPY_HW_I2C4_SCL) && defined(MICROPY_HW_I2C4_SDA)
		I2C_INIT_HLP(4);
        #endif
		
        #if defined(MICROPY_HW_I2C5_SCL) && defined(MICROPY_HW_I2C5_SDA)
		I2C_INIT_HLP(5);
        #endif

        #if defined(MICROPY_HW_I2C6_SCL) && defined(MICROPY_HW_I2C6_SDA)
		I2C_INIT_HLP(6);
        #endif
		
        #if defined(MICROPY_HW_I2C7_SCL) && defined(MICROPY_HW_I2C7_SDA)
		I2C_INIT_HLP(7);
        #endif

        #if defined(MICROPY_HW_I2C8_SCL) && defined(MICROPY_HW_I2C8_SDA)
		I2C_INIT_HLP(8);
        #endif
		
        #if defined(MICROPY_HW_I2C9_SCL) && defined(MICROPY_HW_I2C9_SDA)
		I2C_INIT_HLP(9);
        #endif
        default:
            // I2C does not exist or is not configured for this board
            return false;
    }
	
    for (uint i = 0; i < 2; i++) {
        if (pins[i] != NULL) {
            bool ret;
			if (pins[i]->port == 0 && (pins[i]->pin == 13 || pins[i]->pin == 14) ||
				pins[i]->port == 3 && (pins[i]->pin == 23 || pins[i]->pin == 24)) {
				// true OD, has different encoding to IOMUX 
				ret = mp_hal_pin_config_alt(pins[i], GPIO_TRUE_OD_400KHz, 
					0, AF_FN_I2C, ndx);
			} else {
				// simulated OD
				ret = mp_hal_pin_config_alt(pins[i], GPIO_FILTEROFF | GPIO_MODE_DIGITAL | GPIO_MODE_OUTPUT_OD, 
					MP_HAL_PIN_PULL_UP, AF_FN_I2C, ndx);
			}
			if (!ret) {
                return false;
            }
        }
    }
	pyb_i2c_obj_t *pOb = &pyb_i2c_obj[ndx];
    /* attach 12 MHz clock to FLEXCOMM9 (I2C master) */
    CLOCK_AttachClk(pOb->clockSel);

    /* attach 12 MHz clock to FLEXCOMM8 (I2C slave) */
    // CLOCK_AttachClk(kFRO12M_to_FLEXCOMM8);
    /* reset FLEXCOMM for I2C */
    RESET_PeripheralReset(pOb->resetNdx);

	NVIC_EnableIRQ(pOb->irqn);
	
	I2C_MasterGetDefaultConfig(&pOb->mstCfg);
	pOb->mstCfg.baudRate_Bps = baudRate;
	I2C_MasterInit(pOb->pI2C, &pOb->mstCfg, 12000*1000);
	return true;
}

void i2c_deinit(uint32_t ndx) {
	pyb_i2c_obj_t *pOb = pyb_i2c_obj + ndx;
	I2C_MasterDeinit(pOb->pI2C);
	RESET_PeripheralReset(pOb->resetNdx);
	CLOCK_DisableClock(pOb->myClock);
	NVIC_DisableIRQ(pOb->irqn);
}

void i2c_init_freq(pyb_i2c_obj_t *self, mp_int_t freq) {
    i2c_deinit(self->ndx);
	self->mstBaudrate = MP_OBJ_SMALL_INT_VALUE(freq);
	i2c_init(self->ndx, self->mstBaudrate);
}

STATIC void i2c_reset_after_error(pyb_i2c_obj_t *self) {
    // wait for bus-busy flag to be cleared, with a timeout
    for (int timeout = 50; timeout > 0; --timeout) {
        if (IS_MST_IDLE(self)) {
            return;
        }
        mp_hal_delay_ms(1);
    }
    // bus was/is busy, need to reset the peripheral to get it to work again
    i2c_deinit(self->ndx);
    i2c_init(self->ndx, self->mstBaudrate);
}

/******************************************************************************/
/* Micro Python bindings                                                      */

STATIC void pyb_i2c_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_i2c_obj_t *self = self_in;

    uint i2c_num = self->ndx;

    if (!(self->flags & I2C_OBJ_FLAG_ENABLED)) {
        mp_printf(print, "I2C(%u)", i2c_num);
    } else {
        if (self->isMaster) {
            mp_printf(print, "I2C(%u, I2C.MASTER, baudrate=%u)", i2c_num, self->mstBaudrate);
        } else {
            mp_printf(print, "I2C(%u, I2C.SLAVE, addr=0x%02x)", i2c_num, self->slvCfg.address0.address & 0x7f);
        }
    }
}

/// \method init(mode, *, addr=0x12, baudrate=400000, gencall=False)
///
/// Initialise the I2C bus with the given parameters:
///
///   - `mode` must be either `I2C.MASTER` or `I2C.SLAVE`
///   - `addr` is the 7-bit address (only sensible for a slave)
///   - `baudrate` is the SCL clock rate (only sensible for a master)
///   - `gencall` is whether to support general call mode
STATIC mp_obj_t pyb_i2c_init_helper(pyb_i2c_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_mode,     MP_ARG_INT, {.u_int = PYB_I2C_MASTER} },
        { MP_QSTR_addr,     MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 0x12} },
        { MP_QSTR_baudrate, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 400000} },
        { MP_QSTR_gencall,  MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = false} },
        { MP_QSTR_dma,      MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = false} },
    };

    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // set the I2C configuration values
	  self->slvCfg.address0.address = (uint8_t)(args[1].u_int & 0x7F);
	  self->slvCfg.address1.address = (uint8_t)((args[1].u_int << 1) & 0xFE);
	
    i2c_set_baudrate(self->ndx, MIN(args[2].u_int, MICROPY_HW_I2C_BAUDRATE_MAX));
	self->isUseDMA = args[4].u_bool;
	if (self->isUseDMA) {
		nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "DMA not yet supported"));

	}
    // init the I2C bus
    i2c_deinit(self->ndx);
    i2c_init(self->ndx, args[2].u_int);
	self->flags |= I2C_OBJ_FLAG_ENABLED;
    return mp_const_none;
}

/// \classmethod \constructor(bus, ...)
///
/// Construct an I2C object on the given bus.  `bus` can be 1 or 2.
/// With no additional parameters, the I2C object is created but not
/// initialised (it has the settings from the last initialisation of
/// the bus, if any).  If extra arguments are given, the bus is initialised.
/// See `init` for parameters of initialisation.
///
/// The physical pins of the I2C busses are:
///
///   - `I2C(1)` is on the X position: `(SCL, SDA) = (X9, X10) = (PB6, PB7)`
///   - `I2C(2)` is on the Y position: `(SCL, SDA) = (Y9, Y10) = (PB10, PB11)`
STATIC mp_obj_t pyb_i2c_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out i2c bus
    int i2c_id = 0;
    if (MP_OBJ_IS_STR(args[0])) {
        const char *port = mp_obj_str_get_str(args[0]);
        if (0) {
		#ifdef MICROPY_HW_I2C0_NAME
		} else if (strcmp(port, MICROPY_HW_I2C0_NAME) == 0) {
			i2c_id = PYB_I2C_0;
		#endif
		#ifdef MICROPY_HW_I2C1_NAME
		} else if (strcmp(port, MICROPY_HW_I2C1_NAME) == 0) {
			i2c_id = PYB_I2C_1;
		#endif		
		#ifdef MICROPY_HW_I2C2_NAME
		} else if (strcmp(port, MICROPY_HW_I2C2_NAME) == 0) {
			i2c_id = PYB_I2C_2;
		#endif
		#ifdef MICROPY_HW_I2C3_NAME
		} else if (strcmp(port, MICROPY_HW_I2C3_NAME) == 0) {
			i2c_id = PYB_I2C_3;
		#endif
		#ifdef MICROPY_HW_I2C4_NAME
		} else if (strcmp(port, MICROPY_HW_I2C4_NAME) == 0) {
			i2c_id = PYB_I2C_4;
		#endif
		#ifdef MICROPY_HW_I2C5_NAME
		} else if (strcmp(port, MICROPY_HW_I2C5_NAME) == 0) {
			i2c_id = PYB_I2C_5;
		#endif
		#ifdef MICROPY_HW_I2C6_NAME
		} else if (strcmp(port, MICROPY_HW_I2C6_NAME) == 0) {
			i2c_id = PYB_I2C_6;
		#endif
		#ifdef MICROPY_HW_I2C7_NAME
		} else if (strcmp(port, MICROPY_HW_I2C7_NAME) == 0) {
			i2c_id = PYB_I2C_7;
		#endif		
		#ifdef MICROPY_HW_I2C8_NAME
		} else if (strcmp(port, MICROPY_HW_I2C8_NAME) == 0) {
			i2c_id = PYB_I2C_8;
		#endif
		#ifdef MICROPY_HW_I2C9_NAME
		} else if (strcmp(port, MICROPY_HW_I2C9_NAME) == 0) {
			i2c_id = PYB_I2C_9;
		#endif

        } else {
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
                "I2C(%s) does not exist", port));
        }
    } else {
        i2c_id = mp_obj_get_int(args[0]);
        if (i2c_id > MP_ARRAY_SIZE(pyb_i2c_obj) || pyb_i2c_obj[i2c_id].pI2C == NULL) {
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
                "I2C(%d) does not exist", i2c_id));
        }
    }

    // get I2C object
    pyb_i2c_obj_t *i2c_obj = &pyb_i2c_obj[i2c_id ];

    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_i2c_init_helper(i2c_obj, n_args - 1, args + 1, &kw_args);
    }

    return (mp_obj_t)i2c_obj;
}

STATIC mp_obj_t pyb_i2c_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    return pyb_i2c_init_helper(args[0], n_args - 1, args + 1, kw_args);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_i2c_init_obj, 1, pyb_i2c_init);

/// \method deinit()
/// Turn off the I2C bus.
STATIC mp_obj_t pyb_i2c_deinit(mp_obj_t self_in) {
    pyb_i2c_obj_t *self = self_in;
    i2c_deinit(self->ndx);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_i2c_deinit_obj, pyb_i2c_deinit);

bool HAL_I2C_IsDeviceReady(I2C_Type *pI2C, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout)
{
	uint32_t I2C_Trials = 0;
	uint32_t t0, t1;
	uint32_t status;
	/* Get tick */
	t0 = HAL_GetTick();

	do {
		I2C_MasterStart(pI2C, DevAddress, kI2C_Write);
		do
		{
			status = I2C_GetStatusFlags(pI2C);
		} while ((status & I2C_STAT_MSTPENDING_MASK) == 0);

		/* Clear controller state. */
		I2C_MasterClearStatusFlags(pI2C, I2C_STAT_MSTARBLOSS_MASK | I2C_STAT_MSTSTSTPERR_MASK);
		if (status & 1<<6) {
			// Start/Stop error
			pI2C->CFG &= ~1;
			pI2C->CFG |= 1; // if master get an ACK of address and we do nothing, then next time master can't send start. So we disable and reenable
		
		} else {
			pI2C->MSTCTL = I2C_MSTCTL_MSTSTOP_MASK;	// stop
			while ((I2C_GetStatusFlags(pI2C) & I2C_STAT_MSTPENDING_MASK) == 0);
		}
		status = (status & I2C_STAT_MSTSTATE_MASK) >> I2C_STAT_MSTSTATE_SHIFT;
		if (status == I2C_STAT_MSTCODE_TXREADY) {
//			pI2C->CFG &= ~1;
//			pI2C->CFG |= 1; // if master get an ACK of address and we do nothing, then next time master can't send start. So we disable and reenable
			
			return 1;
		}
		t1 = HAL_GetTick() - t0;
		if (t1 > Timeout)
			break;
	}while(++I2C_Trials < Trials);
	return 0;
}


/// \method is_ready(addr)
/// Check if an I2C device responds to the given address.  Only valid when in master mode.
STATIC mp_obj_t pyb_i2c_is_ready(mp_obj_t self_in, mp_obj_t i2c_addr_o) {
    pyb_i2c_obj_t *self = self_in;

    if (!self->isMaster) {
        nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "I2C must be a master"));
    }

    mp_uint_t i2c_addr = mp_obj_get_int(i2c_addr_o) << 1;

    for (int i = 0; i < 5; i++) {
        bool isOK = HAL_I2C_IsDeviceReady(self->pI2C, i2c_addr, 10, 200);
        if (isOK) {
            return mp_const_true;
        }
    }

    return mp_const_false;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(pyb_i2c_is_ready_obj, pyb_i2c_is_ready);

/// \method scan()
/// Scan all I2C addresses from 0x08 to 0x77 and return a list of those that respond.
/// Only valid when in master mode.
STATIC mp_obj_t pyb_i2c_scan(mp_obj_t self_in) {
    pyb_i2c_obj_t *self = self_in;

    if (!self->isMaster) {
        nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "I2C must be a master"));
    }

    mp_obj_t list = mp_obj_new_list(0, NULL);

    for (uint addr = 0x02; addr <= 0x7E; addr++) {
		bool isOK = HAL_I2C_IsDeviceReady(self->pI2C, addr, 3, 200);
		if (isOK) {
			mp_obj_list_append(list, mp_obj_new_int(addr));
		}
    }

    return list;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_i2c_scan_obj, pyb_i2c_scan);

/// \method send(send, addr=0x00, timeout=5000)
/// Send data on the bus:
///
///   - `send` is the data to send (an integer to send, or a buffer object)
///   - `addr` is the address to send to (only required in master mode)
///   - `timeout` is the timeout in milliseconds to wait for the send
///
/// Return value: `None`.
STATIC mp_obj_t pyb_i2c_send(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_send,    MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_addr,    MP_ARG_INT, {.u_int = PYB_I2C_MASTER_ADDRESS} },
        { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5000} },
    };

    // parse args
    pyb_i2c_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // get the buffer to send from
    mp_buffer_info_t bufinfo;
    uint8_t data[1];
    pyb_buf_get_for_send(args[0].u_obj, &bufinfo, data);

    // if option is set and IRQs are enabled then we can use DMA
    bool use_dma = self->isUseDMA && query_irq() == IRQ_STATE_ENABLED;

	use_dma = use_dma;	// rocky todo: implement DMA

    // send the data
    status_t status;
    if (self->isMaster) {
        if (args[1].u_int == PYB_I2C_MASTER_ADDRESS) {
            if (use_dma) {
                use_dma = use_dma;	// rocky todo: implement DMA
            }
            nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "addr argument required"));
        }
        mp_uint_t i2c_addr = args[1].u_int;
        if (!use_dma) {
			I2C_MasterStart(self->pI2C, i2c_addr, kI2C_Write);
			status = I2C_MasterWriteBlocking(self->pI2C, bufinfo.buf, bufinfo.len, kI2C_TransferNoStopFlag);
			I2C_MasterStop(self->pI2C);
        } else {
            status = status; // todo: dma
        }
    } else {
        if (!use_dma) {
            status = status; // todo: slave
        } else {
            status = status; // todo: slave DMA
        }
    }

    // if we used DMA, wait for it to finish
    if (use_dma) {
        // todo: dma
    }

    if (status != kStatus_Success) {
        // i2c_reset_after_error(self);
        mp_hal_raise(status);
    }

    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_i2c_send_obj, 1, pyb_i2c_send);

/// \method recv(recv, addr=0x00, timeout=5000)
///
/// Receive data on the bus:
///
///   - `recv` can be an integer, which is the number of bytes to receive,
///     or a mutable buffer, which will be filled with received bytes
///   - `addr` is the address to receive from (only required in master mode)
///   - `timeout` is the timeout in milliseconds to wait for the receive
///
/// Return value: if `recv` is an integer then a new buffer of the bytes received,
/// otherwise the same buffer that was passed in to `recv`.
STATIC mp_obj_t pyb_i2c_recv(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_recv,    MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
        { MP_QSTR_addr,    MP_ARG_INT, {.u_int = PYB_I2C_MASTER_ADDRESS} },
        { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5000} },
    };

    // parse args
    pyb_i2c_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // get the buffer to receive into
    vstr_t vstr;
    mp_obj_t o_ret = pyb_buf_get_for_recv(args[0].u_obj, &vstr);

    // if option is set and IRQs are enabled then we can use DMA
    bool use_dma = self->isUseDMA && query_irq() == IRQ_STATE_ENABLED;

    if (use_dma) {
		use_dma = use_dma;
	}

    // receive the data
    HAL_StatusTypeDef status;
    if (self->isMaster) {
        if (args[1].u_int == PYB_I2C_MASTER_ADDRESS) {
            nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "addr argument required"));
        }
        mp_uint_t i2c_addr = args[1].u_int;
        if (!use_dma) {
			I2C_MasterStart(self->pI2C, i2c_addr, kI2C_Read);
			status = I2C_MasterReadBlocking(self->pI2C, vstr.buf, vstr.len, kI2C_TransferNoStopFlag);
			I2C_MasterStop(self->pI2C); 
        } else {
            // todo: DMA
        }
    } else {
        if (!use_dma) {
            // todo: slave
        } else {
            // todo: slave DMA
        }
    }

    // if we used DMA, wait for it to finish
    if (use_dma) {
        // todo: dma
    }

    if (status != kStatus_Success) {
        i2c_reset_after_error(self);

        mp_hal_raise(status);
    }

    // return the received data
    if (o_ret != MP_OBJ_NULL) {
        return o_ret;
    } else {
        return mp_obj_new_str_from_vstr(&mp_type_bytes, &vstr);
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_i2c_recv_obj, 1, pyb_i2c_recv);

/// \method mem_read(data, addr, memaddr, timeout=5000, addr_size=8)
///
/// Read from the memory of an I2C device:
///
///   - `data` can be an integer or a buffer to read into
///   - `addr` is the I2C device address
///   - `memaddr` is the memory location within the I2C device
///   - `timeout` is the timeout in milliseconds to wait for the read
///   - `addr_size` selects width of memaddr: 8 or 16 bits
///
/// Returns the read data.
/// This is only valid in master mode.
STATIC const mp_arg_t pyb_i2c_mem_io_allowed_args[] = {
    { MP_QSTR_data,    MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL} },
    { MP_QSTR_addr,    MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 0} },
    { MP_QSTR_memaddr, MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 0} },
    { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5000} },
    { MP_QSTR_addr_size, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 8} },
};

status_t pyb_i2c_mem_read_c(pyb_i2c_t ndx, bool use_dma, 
	mp_uint_t i2c_addr, mp_uint_t mem_addr, mp_uint_t mem_addr_size, char*buf, uint32_t cbRx)
{
    status_t status = kStatus_Fail;
	pyb_i2c_obj_t *self = pyb_i2c_obj + ndx;
    if (!use_dma) {
		I2C_MasterStart(self->pI2C, i2c_addr, kI2C_Write);
		status = I2C_MasterWriteBlocking(self->pI2C, &mem_addr, mem_addr_size, kI2C_TransferNoStopFlag);
		if (status == kStatus_Success) {
			I2C_MasterStart(self->pI2C, i2c_addr, kI2C_Read);
			status = I2C_MasterReadBlocking(self->pI2C, buf, cbRx, kI2C_TransferNoStopFlag);	
				I2C_MasterStop(self->pI2C);		
		}
		I2C_MasterStop(self->pI2C);	
    } else {
        // todo: dma
    }
	return status;
}

STATIC mp_obj_t pyb_i2c_mem_read(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // parse args
    pyb_i2c_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(pyb_i2c_mem_io_allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(pyb_i2c_mem_io_allowed_args), pyb_i2c_mem_io_allowed_args, args);

    if (!self->isMaster) {
        nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "I2C must be a master"));
    }

    // get the buffer to read into
    vstr_t vstr;
    mp_obj_t o_ret = pyb_buf_get_for_recv(args[0].u_obj, &vstr);

    // get the addresses
    mp_uint_t i2c_addr = args[1].u_int;
    mp_uint_t mem_addr = args[2].u_int;
    // determine width of mem_addr; default is 8 bits, entering any other value gives 16 bit width
    mp_uint_t mem_addr_size = (args[4].u_int + 7) >> 3;

    // if option is set and IRQs are enabled then we can use DMA
    bool use_dma = self->isUseDMA && query_irq() == IRQ_STATE_ENABLED;

    status_t status = pyb_i2c_mem_read_c(self->ndx, 0, i2c_addr, mem_addr, mem_addr_size, vstr.buf, vstr.len);

    if (status != kStatus_Success) {
        i2c_reset_after_error(self);
        mp_hal_raise(status);
    }

    // return the read data
    if (o_ret != MP_OBJ_NULL) {
        return o_ret;
    } else {
        return mp_obj_new_str_from_vstr(&mp_type_bytes, &vstr);
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_i2c_mem_read_obj, 1, pyb_i2c_mem_read);

/// \method mem_write(data, addr, memaddr, timeout=5000, addr_size=8)
///
/// Write to the memory of an I2C device:
///
///   - `data` can be an integer or a buffer to write from
///   - `addr` is the I2C device address
///   - `memaddr` is the memory location within the I2C device
///   - `timeout` is the timeout in milliseconds to wait for the write
///   - `addr_size` selects width of memaddr: 8 or 16 bits
///
/// Returns `None`.
/// This is only valid in master mode.
STATIC mp_obj_t pyb_i2c_mem_write(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    // parse args (same as mem_read)
    pyb_i2c_obj_t *self = pos_args[0];
    mp_arg_val_t args[MP_ARRAY_SIZE(pyb_i2c_mem_io_allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(pyb_i2c_mem_io_allowed_args), pyb_i2c_mem_io_allowed_args, args);

    if (!self->isMaster) {
        nlr_raise(mp_obj_new_exception_msg(&mp_type_TypeError, "I2C must be a master"));
    }

    // get the buffer to write from
    mp_buffer_info_t bufinfo;
    uint8_t data[1];
    pyb_buf_get_for_send(args[0].u_obj, &bufinfo, data);

    // get the addresses
    mp_uint_t i2c_addr = args[1].u_int;
    mp_uint_t mem_addr = args[2].u_int;
    // determine width of mem_addr; default is 8 bits, entering any other value gives 16 bit width
    mp_uint_t mem_addr_size = 1;
    if (args[4].u_int != 8) {
        mem_addr_size = 2;
    }

    // if option is set and IRQs are enabled then we can use DMA
    bool use_dma = self->isUseDMA && query_irq() == IRQ_STATE_ENABLED;

    HAL_StatusTypeDef status;
    if (!use_dma) {
		I2C_MasterStart(self->pI2C, i2c_addr, kI2C_Write);
		status = I2C_MasterWriteBlocking(self->pI2C, &mem_addr, mem_addr_size, kI2C_TransferNoStopFlag);
		if (status == kStatus_Success) {
			status = I2C_MasterWriteBlocking(self->pI2C, bufinfo.buf, bufinfo.len, kI2C_TransferNoStopFlag);
		}
		I2C_MasterStop(self->pI2C);	
    } else {
        // todo: dma
    }

    if (status != HAL_OK) {
        i2c_reset_after_error(self);
        mp_hal_raise(status);
    }

    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_i2c_mem_write_obj, 1, pyb_i2c_mem_write);

STATIC const mp_rom_map_elem_t pyb_i2c_locals_dict_table[] = {
    // instance methods
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_i2c_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_i2c_deinit_obj) },
    { MP_ROM_QSTR(MP_QSTR_is_ready), MP_ROM_PTR(&pyb_i2c_is_ready_obj) },
    { MP_ROM_QSTR(MP_QSTR_scan), MP_ROM_PTR(&pyb_i2c_scan_obj) },
    { MP_ROM_QSTR(MP_QSTR_send), MP_ROM_PTR(&pyb_i2c_send_obj) },
    { MP_ROM_QSTR(MP_QSTR_recv), MP_ROM_PTR(&pyb_i2c_recv_obj) },
    { MP_ROM_QSTR(MP_QSTR_mem_read), MP_ROM_PTR(&pyb_i2c_mem_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_mem_write), MP_ROM_PTR(&pyb_i2c_mem_write_obj) },

    // class constants
    /// \constant MASTER - for initialising the bus to master mode
    /// \constant SLAVE - for initialising the bus to slave mode
    { MP_ROM_QSTR(MP_QSTR_MASTER), MP_ROM_INT(PYB_I2C_MASTER) },
    { MP_ROM_QSTR(MP_QSTR_SLAVE), MP_ROM_INT(PYB_I2C_SLAVE) },
};

STATIC MP_DEFINE_CONST_DICT(pyb_i2c_locals_dict, pyb_i2c_locals_dict_table);

const mp_obj_type_t pyb_i2c_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2C,
    .print = pyb_i2c_print,
    .make_new = pyb_i2c_make_new,
    .locals_dict = (mp_obj_dict_t*)&pyb_i2c_locals_dict,
};
