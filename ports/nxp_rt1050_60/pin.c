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

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#include "extmod/virtpin.h"
#include "pin.h"

/// \moduleref pyb
/// \class Pin - control I/O pins
///
/// A pin is the basic object to control I/O pins.  It has methods to set
/// the mode of the pin (input, output, etc) and methods to get and set the
/// digital logic level.  For analog control of a pin, see the ADC class.
///
/// Usage Model:
///
/// All Board Pins are predefined as pyb.Pin.board.Name
///
///     x1_pin = pyb.Pin.board.X1
///
///     g = pyb.Pin(pyb.Pin.board.X1, pyb.Pin.IN)
///
/// CPU pins which correspond to the board pins are available
/// as `pyb.cpu.Name`. For the CPU pins, the names are the port letter
/// followed by the pin number. On the PYBv1.0, `pyb.Pin.board.X1` and
/// `pyb.Pin.cpu.B6` are the same pin.
///
/// You can also use strings:
///
///     g = pyb.Pin('X1', pyb.Pin.OUT_PP)
///
/// Users can add their own names:
///
///     MyMapperDict = { 'LeftMotorDir' : pyb.Pin.cpu.C12 }
///     pyb.Pin.dict(MyMapperDict)
///     g = pyb.Pin("LeftMotorDir", pyb.Pin.OUT_OD)
///
/// and can query mappings
///
///     pin = pyb.Pin("LeftMotorDir")
///
/// Users can also add their own mapping function:
///
///     def MyMapper(pin_name):
///        if pin_name == "LeftMotorDir":
///            return pyb.Pin.cpu.A0
///
///     pyb.Pin.mapper(MyMapper)
///
/// So, if you were to call: `pyb.Pin("LeftMotorDir", pyb.Pin.OUT_PP)`
/// then `"LeftMotorDir"` is passed directly to the mapper function.
///
/// To summarise, the following order determines how things get mapped into
/// an ordinal pin number:
///
/// 1. Directly specify a pin object
/// 2. User supplied mapping function
/// 3. User supplied mapping (object must be usable as a dictionary key)
/// 4. Supply a string which matches a board pin
/// 5. Supply a string which matches a CPU port/pin
///
/// You can set `pyb.Pin.debug(True)` to get some debug information about
/// how a particular object gets mapped to a pin.

// Pin class variables
STATIC bool pin_class_debug;

void pin_init0(void) {
    MP_STATE_PORT(pin_class_mapper) = mp_const_none;
    MP_STATE_PORT(pin_class_map_dict) = mp_const_none;
    pin_class_debug = false;
}

// C API used to convert a user-supplied pin name into an ordinal pin number.
const pin_obj_t *pin_find(mp_obj_t user_obj) {
    const pin_obj_t *pin_obj;

    // If a pin was provided, then use it
    if (MP_OBJ_IS_TYPE(user_obj, &pin_type)) {
        pin_obj = user_obj;
        if (pin_class_debug) {
            printf("Pin map passed pin ");
            mp_obj_print((mp_obj_t)pin_obj, PRINT_STR);
            printf("\n");
        }
        return pin_obj;
    }

    if (MP_STATE_PORT(pin_class_mapper) != mp_const_none) {
        pin_obj = mp_call_function_1(MP_STATE_PORT(pin_class_mapper), user_obj);
        if (pin_obj != mp_const_none) {
            if (!MP_OBJ_IS_TYPE(pin_obj, &pin_type)) {
                nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "Pin.mapper didn't return a Pin object"));
            }
            if (pin_class_debug) {
                printf("Pin.mapper maps ");
                mp_obj_print(user_obj, PRINT_REPR);
                printf(" to ");
                mp_obj_print((mp_obj_t)pin_obj, PRINT_STR);
                printf("\n");
            }
            return pin_obj;
        }
        // The pin mapping function returned mp_const_none, fall through to
        // other lookup methods.
    }

    if (MP_STATE_PORT(pin_class_map_dict) != mp_const_none) {
        mp_map_t *pin_map_map = mp_obj_dict_get_map(MP_STATE_PORT(pin_class_map_dict));
        mp_map_elem_t *elem = mp_map_lookup(pin_map_map, user_obj, MP_MAP_LOOKUP);
        if (elem != NULL && elem->value != NULL) {
            pin_obj = elem->value;
            if (pin_class_debug) {
                printf("Pin.map_dict maps ");
                mp_obj_print(user_obj, PRINT_REPR);
                printf(" to ");
                mp_obj_print((mp_obj_t)pin_obj, PRINT_STR);
                printf("\n");
            }
            return pin_obj;
        }
    }

    // See if the pin name matches a board pin
    pin_obj = pin_find_named_pin(&pin_board_pins_locals_dict, user_obj);
    if (pin_obj) {
        if (pin_class_debug) {
            printf("Pin.board maps ");
            mp_obj_print(user_obj, PRINT_REPR);
            printf(" to ");
            mp_obj_print((mp_obj_t)pin_obj, PRINT_STR);
            printf("\n");
        }
        return pin_obj;
    }

    // See if the pin name matches a cpu pin
    pin_obj = pin_find_named_pin(&pin_cpu_pins_locals_dict, user_obj);
    if (pin_obj) {
        if (pin_class_debug) {
            printf("Pin.cpu maps ");
            mp_obj_print(user_obj, PRINT_REPR);
            printf(" to ");
            mp_obj_print((mp_obj_t)pin_obj, PRINT_STR);
            printf("\n");
        }
        return pin_obj;
    }

    nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "pin '%s' not a valid pin identifier", mp_obj_str_get_str(user_obj)));
}

/// \method __str__()
/// Return a string describing the pin object.
#define _INC_PRINT(...) do { \
	snprintf(s + sNdx, sLenRem, __VA_ARGS__); \
	sNdx = strlen(s); \
	sLenRem = sizeof(s) - sNdx; }while(0)

STATIC void pin_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pin_obj_t *self = self_in;
	char s[128];
	const char* ppSpd[] = {"50MHz", "100MHz", "100MHz", "200MHz"};
	const char* ppPull[] = {"pDn100K", "pUp47K", "pUp100K", "pUp22K"};
	uint32_t sNdx, sLenRem = sizeof(s);

	McuPinCfgReg_t cfg;
	McuPinMuxReg_t mux;
	uint32_t afNdx;
	const char *pName;
	size_t qstrLen;
	pName = (const char*) qstr_data(self->name, &qstrLen);
	_INC_PRINT("Pin %s (P%02d.%02d):\r\n", pName, self->port, self->pin);
	
    cfg.v32 = REG_READ32(self->cfgReg);
	mux.v32 = REG_READ32(self->afReg);
	afNdx = pin_get_af(self);
	if (cfg.b11_1_OD_isOD)
		_INC_PRINT("OD, ");
	else
		_INC_PRINT("--, ");

    if (!(cfg.b12_1_PKE_digiInEn)) {
        // analog
		_INC_PRINT("Analog/Hiz\r\n");
    } else {
    	_INC_PRINT("Digital, mux=%d, ", afNdx & 7);

    	if (afNdx == 5) {
			_INC_PRINT("GPIO:");
			if (self->gpio->GDIR & (1<<self->pin))
				_INC_PRINT("OUT, ");
			else
				_INC_PRINT(" IN, ");
    	}
    }
	if (cfg.b00_1_SRE_isFastSlew)
		_INC_PRINT("Slew=Fast, ");
	else
		_INC_PRINT("Slew=Slow, ");

	_INC_PRINT("drive=%d/8, ", cfg.b03_3_DSE_driveStrength);
	_INC_PRINT("%s, ", ppSpd[cfg.b06_2_Speed]);
	if (cfg.b13_1_PUE_keepOrPull == 0)
		_INC_PRINT("keeper, ");
	else
		_INC_PRINT("%s, ", ppPull[cfg.b14_2_PUS_PullSel]);

	if (cfg.b16_1_HYS)
		_INC_PRINT("HYS, ");
	else
		_INC_PRINT("---, ");

	if (mux.b04_1_inForceOn)
		_INC_PRINT("INON, ");
	else
		_INC_PRINT("----, ");
	if (afNdx & 0x10) {
		_INC_PRINT("not selected! ");
	}

	mp_printf(print, "%s\r\n", s);
}

STATIC mp_obj_t pin_obj_init_helper(const pin_obj_t *pin, mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args);

/// \classmethod \constructor(id, ...)
/// Create a new Pin object associated with the id.  If additional arguments are given,
/// they are used to initialise the pin.  See `init`.
mp_obj_t mp_pin_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // Run an argument through the mapper and return the result.
    const pin_obj_t *pin = pin_find(args[0]);

    if (n_args > 1 || n_kw > 0) {
        // pin mode given, so configure this GPIO
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pin_obj_init_helper(pin, n_args - 1, args + 1, &kw_args);
    }

    return (mp_obj_t)pin;
}

// fast method for getting/setting pin value
STATIC mp_obj_t pin_call(mp_obj_t self_in, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    mp_arg_check_num(n_args, n_kw, 0, 1, false);
    pin_obj_t *self = self_in;
    if (n_args == 0) {
        // get pin
        return MP_OBJ_NEW_SMALL_INT(mp_hal_pin_read(self));
    } else {
        // set pin
        mp_hal_pin_write(self, mp_obj_is_true(args[0]));
        return mp_const_none;
    }
}

/// \classmethod mapper([fun])
/// Get or set the pin mapper function.
STATIC mp_obj_t pin_mapper(mp_uint_t n_args, const mp_obj_t *args) {
    if (n_args > 1) {
        MP_STATE_PORT(pin_class_mapper) = args[1];
        return mp_const_none;
    }
    return MP_STATE_PORT(pin_class_mapper);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pin_mapper_fun_obj, 1, 2, pin_mapper);
STATIC MP_DEFINE_CONST_CLASSMETHOD_OBJ(pin_mapper_obj, (mp_obj_t)&pin_mapper_fun_obj);

/// \classmethod dict([dict])
/// Get or set the pin mapper dictionary.
STATIC mp_obj_t pin_map_dict(mp_uint_t n_args, const mp_obj_t *args) {
    if (n_args > 1) {
        MP_STATE_PORT(pin_class_map_dict) = args[1];
        return mp_const_none;
    }
    return MP_STATE_PORT(pin_class_map_dict);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pin_map_dict_fun_obj, 1, 2, pin_map_dict);
STATIC MP_DEFINE_CONST_CLASSMETHOD_OBJ(pin_map_dict_obj, (mp_obj_t)&pin_map_dict_fun_obj);

/// \classmethod af_list()
/// Returns an array of alternate functions available for this pin.
STATIC mp_obj_t pin_af_list(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    mp_obj_t result = mp_obj_new_list(0, NULL);

    const pin_af_obj_t *af = self->af;
    for (mp_uint_t i = 0; i < self->num_af; i++, af++) {
        mp_obj_list_append(result, (mp_obj_t)af);
    }
    return result;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_af_list_obj, pin_af_list);

/// \classmethod debug([state])
/// Get or set the debugging state (`True` or `False` for on or off).
STATIC mp_obj_t pin_debug(mp_uint_t n_args, const mp_obj_t *args) {
    if (n_args > 1) {
        pin_class_debug = mp_obj_is_true(args[1]);
        return mp_const_none;
    }
    return mp_obj_new_bool(pin_class_debug);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pin_debug_fun_obj, 1, 2, pin_debug);
STATIC MP_DEFINE_CONST_CLASSMETHOD_OBJ(pin_debug_obj, (mp_obj_t)&pin_debug_fun_obj);

// init(mode, pull=None, af=-1, *, value, alt, inv=0)
typedef struct _pin_init_t{
		mp_arg_val_t mode, value, alt, fastslew, hys, pad_expert_cfg;
}pin_init_t;
STATIC mp_obj_t pin_obj_init_helper(const pin_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_mode, MP_ARG_REQUIRED | MP_ARG_INT },
		// embedded in "mode" { MP_QSTR_pull, MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_obj = MP_OBJ_NULL}},
        { MP_QSTR_value, MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = true}},
        { MP_QSTR_alt, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 5}},
		{ MP_QSTR_fastslew, MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = false}},
		{ MP_QSTR_hys, MP_ARG_KW_ONLY | MP_ARG_BOOL, {.u_bool = false}},
		// if this arg is specified, it overrides mode & hys. User must have i.mx RT105 pad cfg h/w know how to use (SW_PAD_CTL_<PAD>)
		{ MP_QSTR_pad_expert_cfg, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = MP_OBJ_NULL}},	
    };
	pin_init_t args;
    // parse args
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, (mp_arg_val_t*)&args);
	mp_uint_t alt = args.alt.u_int;
	mp_uint_t hys = (args.hys.u_bool != 0) << 16;	// HYS bit
	mp_uint_t slew = (args.fastslew.u_bool != 0) << 0;	// SRE bit
	mp_uint_t padCfg;
    if (args.pad_expert_cfg.u_obj != MP_OBJ_NULL) {
		padCfg = mp_obj_get_int(&args.pad_expert_cfg);
    } else {
		padCfg = args.mode.u_int | hys | slew;		
    }
	if (alt == 5) {
		// config GPIO
		mp_hal_ConfigGPIO(self, padCfg, args.value.u_int);
	} else {
		mp_hal_pin_config_alt(self, padCfg, alt);
	}
    return mp_const_none;
}

STATIC mp_obj_t pin_obj_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    return pin_obj_init_helper(args[0], n_args - 1, args + 1, kw_args);
}
MP_DEFINE_CONST_FUN_OBJ_KW(pin_init_obj, 1, pin_obj_init);

/// \method value([value])
/// Get or set the digital logic level of the pin:
///
///   - With no argument, return 0 or 1 depending on the logic level of the pin.
///   - With `value` given, set the logic level of the pin.  `value` can be
///   anything that converts to a boolean.  If it converts to `True`, the pin
///   is set high, otherwise it is set low.
STATIC mp_obj_t pin_value(mp_uint_t n_args, const mp_obj_t *args) {
    return pin_call(args[0], n_args - 1, 0, args + 1);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(pin_value_obj, 1, 2, pin_value);

STATIC mp_obj_t pin_off(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    mp_hal_pin_low(self);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_off_obj, pin_off);

STATIC mp_obj_t pin_on(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    mp_hal_pin_high(self);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_on_obj, pin_on);

/// \method name()
/// Get the pin name.
STATIC mp_obj_t pin_name(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    return MP_OBJ_NEW_QSTR(self->name);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_name_obj, pin_name);

/// \method names()
/// Returns the cpu and board names for this pin.
STATIC mp_obj_t pin_names(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    mp_obj_t result = mp_obj_new_list(0, NULL);
    mp_obj_list_append(result, MP_OBJ_NEW_QSTR(self->name));

    mp_map_t *map = mp_obj_dict_get_map((mp_obj_t)&pin_board_pins_locals_dict);
    mp_map_elem_t *elem = map->table;

    for (mp_uint_t i = 0; i < map->used; i++, elem++) {
        if (elem->value == self) {
            mp_obj_list_append(result, elem->key);
        }
    }
    return result;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_names_obj, pin_names);

/// \method port()
/// Get the pin port.
STATIC mp_obj_t pin_port(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    return MP_OBJ_NEW_SMALL_INT(self->port);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_port_obj, pin_port);

/// \method pin()
/// Get the pin number.
STATIC mp_obj_t pin_pin(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    return MP_OBJ_NEW_SMALL_INT(self->pin);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_pin_obj, pin_pin);

/// \method gpio()
/// Returns the base address of the GPIO block associated with this pin.
STATIC mp_obj_t pin_gpio(mp_obj_t self_in) {
    pin_obj_t *self = self_in;
    return MP_OBJ_NEW_SMALL_INT((mp_int_t)self->gpio);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_gpio_obj, pin_gpio);

/// \method mode()
/// Returns the currently configured mode of the pin. The integer returned
/// will match one of the allowed constants for the mode argument to the init
/// function.
STATIC mp_obj_t pin_mode(mp_obj_t self_in) {
    return MP_OBJ_NEW_SMALL_INT(pin_get_mode(self_in));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_mode_obj, pin_mode);

/// \method pull()
/// Returns the currently configured pull of the pin. The integer returned
/// will match one of the allowed constants for the pull argument to the init
/// function.
STATIC mp_obj_t pin_pull(mp_obj_t self_in) {
    return MP_OBJ_NEW_SMALL_INT(pin_get_pull(self_in));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_pull_obj, pin_pull);

/// \method af()
/// Returns the currently configured alternate-function of the pin. The
/// integer returned will match one of the allowed constants for the af
/// argument to the init function.
STATIC mp_obj_t pin_af(mp_obj_t self_in) {
    return MP_OBJ_NEW_SMALL_INT(pin_get_af(self_in));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_af_obj, pin_af);

STATIC const mp_rom_map_elem_t pin_locals_dict_table[] = {
    // instance methods
    { MP_ROM_QSTR(MP_QSTR_init),    MP_ROM_PTR(&pin_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_value),   MP_ROM_PTR(&pin_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_off),     MP_ROM_PTR(&pin_off_obj) },
    { MP_ROM_QSTR(MP_QSTR_on),      MP_ROM_PTR(&pin_on_obj) },
    // Legacy names as used by pyb.Pin

    { MP_ROM_QSTR(MP_QSTR_low),     MP_ROM_PTR(&pin_off_obj) },
    { MP_ROM_QSTR(MP_QSTR_high),    MP_ROM_PTR(&pin_on_obj) },
    { MP_ROM_QSTR(MP_QSTR_name),    MP_ROM_PTR(&pin_name_obj) },
    { MP_ROM_QSTR(MP_QSTR_names),   MP_ROM_PTR(&pin_names_obj) },
    { MP_ROM_QSTR(MP_QSTR_af_list), MP_ROM_PTR(&pin_af_list_obj) },
    { MP_ROM_QSTR(MP_QSTR_port),    MP_ROM_PTR(&pin_port_obj) },
    { MP_ROM_QSTR(MP_QSTR_pin),     MP_ROM_PTR(&pin_pin_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio),    MP_ROM_PTR(&pin_gpio_obj) },

	{ MP_ROM_QSTR(MP_QSTR_mode),    MP_ROM_PTR(&pin_mode_obj) },
    { MP_ROM_QSTR(MP_QSTR_pull),    MP_ROM_PTR(&pin_pull_obj) },
    { MP_ROM_QSTR(MP_QSTR_af),      MP_ROM_PTR(&pin_af_obj) },

    // class methods
    { MP_ROM_QSTR(MP_QSTR_mapper),  MP_ROM_PTR(&pin_mapper_obj) },
    { MP_ROM_QSTR(MP_QSTR_dict),    MP_ROM_PTR(&pin_map_dict_obj) },
    { MP_ROM_QSTR(MP_QSTR_debug),   MP_ROM_PTR(&pin_debug_obj) },

    // class attributes
    { MP_ROM_QSTR(MP_QSTR_board),   MP_ROM_PTR(&pin_board_pins_obj_type) },
    { MP_ROM_QSTR(MP_QSTR_cpu),     MP_ROM_PTR(&pin_cpu_pins_obj_type) },

    // class constants

	{ MP_ROM_QSTR(MP_QSTR_HIZ),        	MP_ROM_INT(IOPAD_IN_HIZ) },
    { MP_ROM_QSTR(MP_QSTR_ANALOG),      MP_ROM_INT(GPIO_MODE_ANALOG) },
    { MP_ROM_QSTR(MP_QSTR_IN),          MP_ROM_INT(GPIO_MODE_INPUT) },
	{ MP_ROM_QSTR(MP_QSTR_IN_PUP),		MP_ROM_INT(GPIO_MODE_INPUT_PUP) },
	{ MP_ROM_QSTR(MP_QSTR_IN_PUP_WEAK), MP_ROM_INT(GPIO_MODE_INPUT_PUP_WEAK) },
	{ MP_ROM_QSTR(MP_QSTR_IN_PDN),	    MP_ROM_INT(GPIO_MODE_INPUT_PDN) },

	{ MP_ROM_QSTR(MP_QSTR_OUT),     	MP_ROM_INT(GPIO_MODE_OUTPUT_PP) },
	{ MP_ROM_QSTR(MP_QSTR_OUT_WEAK),    MP_ROM_INT(GPIO_MODE_OUTPUT_PP_WEAK) },
	{ MP_ROM_QSTR(MP_QSTR_OPEN_DRAIN),  MP_ROM_INT(GPIO_MODE_OUTPUT_OD) },
	{ MP_ROM_QSTR(MP_QSTR_OD_PUP),      MP_ROM_INT(GPIO_MODE_OUTPUT_OD_PUP) },
	// >>> below are custom cfg
	{ MP_ROM_QSTR(MP_QSTR_SLEW_FAST),   MP_ROM_INT(IOPAD_OUT_SLEW_FAST) },
	{ MP_ROM_QSTR(MP_QSTR_HYS),   		MP_ROM_INT(IOPAD_IN_HYST) },
};

STATIC MP_DEFINE_CONST_DICT(pin_locals_dict, pin_locals_dict_table);

STATIC mp_uint_t pin_ioctl(mp_obj_t self_in, mp_uint_t request, uintptr_t arg, int *errcode) {
    (void)errcode;
    pin_obj_t *self = self_in;

    switch (request) {
        case MP_PIN_READ: {
            return mp_hal_pin_read(self);
        }
        case MP_PIN_WRITE: {
            mp_hal_pin_write(self, arg);
            return 0;
        }
    }
    return -1;
}

STATIC const mp_pin_p_t pin_pin_p = {
    .ioctl = pin_ioctl,
};

const mp_obj_type_t pin_type = {
    { &mp_type_type },
    .name = MP_QSTR_Pin,
    .print = pin_print,
    .make_new = mp_pin_make_new,
    .call = pin_call,
    .protocol = &pin_pin_p,
    .locals_dict = (mp_obj_dict_t*)&pin_locals_dict,
};

/// \moduleref pyb
/// \class PinAF - Pin Alternate Functions
///
/// A Pin represents a physical pin on the microcprocessor. Each pin
/// can have a variety of functions (GPIO, I2C SDA, etc). Each PinAF
/// object represents a particular function for a pin.
///
/// Usage Model:
///
///     x3 = pyb.Pin.board.X3
///     x3_af = x3.af_list()
///
/// x3_af will now contain an array of PinAF objects which are availble on
/// pin X3.
///
/// For the pyboard, x3_af would contain:
///     [Pin.AF1_TIM2, Pin.AF2_TIM5, Pin.AF3_TIM9, Pin.AF7_USART2]
///
/// Normally, each peripheral would configure the af automatically, but sometimes
/// the same function is available on multiple pins, and having more control
/// is desired.
///
/// To configure X3 to expose TIM2_CH3, you could use:
///    pin = pyb.Pin(pyb.Pin.board.X3, mode=pyb.Pin.AF_PP, af=pyb.Pin.AF1_TIM2)
/// or:
///    pin = pyb.Pin(pyb.Pin.board.X3, mode=pyb.Pin.AF_PP, af=1)

/// \method __str__()
/// Return a string describing the alternate function.
STATIC void pin_af_obj_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pin_af_obj_t *self = self_in;
    mp_printf(print, "Pin.%q", self->name);
}

/// \method index()
/// Return the alternate function index.
STATIC mp_obj_t pin_af_index(mp_obj_t self_in) {
    pin_af_obj_t *af = self_in;
    return MP_OBJ_NEW_SMALL_INT(af->idx);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_af_index_obj, pin_af_index);

/// \method name()
/// Return the name of the alternate function.
STATIC mp_obj_t pin_af_name(mp_obj_t self_in) {
    pin_af_obj_t *af = self_in;
    return MP_OBJ_NEW_QSTR(af->name);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_af_name_obj, pin_af_name);

/// \method reg()
/// Return the base register associated with the peripheral assigned to this
/// alternate function. For example, if the alternate function were TIM2_CH3
/// this would return stm.TIM2
STATIC mp_obj_t pin_af_reg(mp_obj_t self_in) {
    pin_af_obj_t *af = self_in;
    return MP_OBJ_NEW_SMALL_INT((mp_uint_t)af->reg);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pin_af_reg_obj, pin_af_reg);

STATIC const mp_rom_map_elem_t pin_af_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_index), MP_ROM_PTR(&pin_af_index_obj) },
    { MP_ROM_QSTR(MP_QSTR_name), MP_ROM_PTR(&pin_af_name_obj) },
    { MP_ROM_QSTR(MP_QSTR_reg), MP_ROM_PTR(&pin_af_reg_obj) },
};
STATIC MP_DEFINE_CONST_DICT(pin_af_locals_dict, pin_af_locals_dict_table);

const mp_obj_type_t pin_af_type = {
    { &mp_type_type },
    .name = MP_QSTR_PinAF,
    .print = pin_af_obj_print,
    .locals_dict = (mp_obj_dict_t*)&pin_af_locals_dict,
};
