/*
 * This file is part of the MicroPython project, http://micropython.org/
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
#include <string.h>

#include "py/runtime.h"
#include "py/binary.h"
#include "py/mphal.h"
#include "adc.h"
#include "pin.h"
#include "timer.h"
#include "fsl_adc.h"

#include "genhdr/pins.h"

#if 1//MICROPY_HW_ENABLE_ADC

/// \moduleref pyb
/// \class ADC - analog to digital conversion: read analog values on a pin
///
/// Usage:
///
///     adc = pyb.ADC(pin)              # create an analog object from a pin
///     val = adc.read()                # read an analog value
///
///     adc = pyb.ADCAll(resolution)    # creale an ADCAll object
///     val = adc.read_channel(channel) # read the given channel
///     val = adc.read_core_temp()      # read MCU temperature
///     val = adc.read_core_vbat()      # read MCU VBAT
///     val = adc.read_core_vref()      # read MCU VREF

  //here the var means the address of the adc of STM
#define ADC_BASE                 ADC1  

#define ADC_CHANNEL_GROUP 0U
#define ADC_FIRST_GPIO_CHANNEL  (0)
#define ADC_LAST_GPIO_CHANNEL   (15)

#define ADC_CAL1                ((uint16_t*)(ADC1 + 2))   //the privous var is ADC_CAL_ADDRESS,but can not know what it meaning,so in this way, we use adc1 alter it,and i think this will be the use of the charging,about cut off the battery charing,and calculate the volumn of the battery, switch to the battery vlotage
#define ADC_CAL2                ((uint16_t*)(ADC2 + 4))

#define VBAT_DIV (3)

// Timeout for waiting for end-of-conversion, in ms
#define EOC_TIMEOUT (10)

/* Core temperature sensor definitions */
#define CORE_TEMP_V25          (943)  /* (0.76v/3.3v)*(2^ADC resoultion) */
#define CORE_TEMP_AVG_SLOPE    (3)    /* (2.5mv/3.3v)*(2^ADC resoultion) */

// scale and calibration values for VBAT and VREF
#define ADC_SCALE (3.3f / 4095)
#define VREFIN_CAL ((uint16_t *)ADC1)

#define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) == ADC_CHANNEL_0)           || \
                                 ((CHANNEL) == ADC_CHANNEL_1)           || \
                                 ((CHANNEL) == ADC_CHANNEL_2)           || \
                                 ((CHANNEL) == ADC_CHANNEL_3)           || \
                                 ((CHANNEL) == ADC_CHANNEL_4)           || \
                                 ((CHANNEL) == ADC_CHANNEL_5)           || \
                                 ((CHANNEL) == ADC_CHANNEL_6)           || \
                                 ((CHANNEL) == ADC_CHANNEL_7)           || \
                                 ((CHANNEL) == ADC_CHANNEL_8)           || \
                                 ((CHANNEL) == ADC_CHANNEL_9)           || \
                                 ((CHANNEL) == ADC_CHANNEL_10)          || \
                                 ((CHANNEL) == ADC_CHANNEL_11)          || \
                                 ((CHANNEL) == ADC_CHANNEL_12)          || \
                                 ((CHANNEL) == ADC_CHANNEL_13)          || \
                                 ((CHANNEL) == ADC_CHANNEL_14)          || \
                                 ((CHANNEL) == ADC_CHANNEL_15)          )


typedef struct _pyb_obj_adc_t {
    mp_obj_base_t base;
    mp_obj_t pin_name;
    int channel;
} pyb_obj_adc_t;

adc_config_t adcConfigStruct;	
// convert user-facing channel number into internal channel number
static inline uint32_t adc_get_internal_channel(uint32_t channel) {
    return channel;
}

STATIC bool is_adcx_channel(int channel) {
    return IS_ADC_CHANNEL(channel);

}
/* can not find this function in our rt evk board, think that we can rewrite it in our style*/
STATIC void adc_wait_for_eoc_or_timeout(int32_t timeout) {
    uint32_t tickstart = HAL_GetTick();
    while (0U == ADC_GetChannelStatusFlags(ADC_BASE,ADC_CHANNEL_GROUP)) 
{
        if (((HAL_GetTick() - tickstart ) > timeout)) {
            break; // timeout
        }
}
}

STATIC void adcx_init_periph(uint32_t resolution) {
     ADC_GetDefaultConfig(&adcConfigStruct);
     adcConfigStruct.resolution = resolution;
     ADC_Init(ADC_BASE, &adcConfigStruct);
}

STATIC void adc_init_single(pyb_obj_adc_t *adc_obj) {
    if (!is_adcx_channel(adc_obj->channel)) {
        return;
    }

    if (ADC_FIRST_GPIO_CHANNEL <= adc_obj->channel && adc_obj->channel <= ADC_LAST_GPIO_CHANNEL) {
        // Channels 0-16 correspond to real pins. Configure the GPIO pin in ADC mode.
        const pin_obj_t *pin = pin_adc1[adc_obj->channel];
        mp_hal_ConfigGPIO(pin, 2/*MP_HAL_PIN_MODE_ADC*/, MP_HAL_PIN_PULL_NONE);
    }

    adcx_init_periph(kADC_Resolution12Bit);
}

STATIC void adc_config_channel(uint32_t channel) {
    adc_channel_config_t adcChannelConfigStruct;
    adcChannelConfigStruct.channelNumber = channel;
    adcChannelConfigStruct.enableInterruptOnConversionCompleted = false;
    ADC_SetChannelConfig(ADC_BASE, ADC_CHANNEL_GROUP, &adcChannelConfigStruct);
}

STATIC uint32_t adc_read_channel() {
    adc_wait_for_eoc_or_timeout(EOC_TIMEOUT);
    uint32_t value;
    value = ADC_GetChannelConversionValue(ADC_BASE, ADC_CHANNEL_GROUP);
    return value;
}

STATIC uint32_t adc_config_and_read_channel( uint32_t channel) {
    adc_config_channel(channel);
    return adc_read_channel();
}

/******************************************************************************/
/* MicroPython bindings : adc object (single channel)                         */

STATIC void adc_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_obj_adc_t *self = MP_OBJ_TO_PTR(self_in);
    mp_print_str(print, "<ADC on ");
    mp_obj_print_helper(print, self->pin_name, PRINT_STR);
    mp_printf(print, " channel=%u>", self->channel);
}

/// \classmethod \constructor(pin)
/// Create an ADC object associated with the given pin.
/// This allows you to then read analog values on that pin.
STATIC mp_obj_t adc_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check number of arguments
    mp_arg_check_num(n_args, n_kw, 1, 1, false);

    // 1st argument is the pin name
    mp_obj_t pin_obj = args[0];

    uint32_t channel;

    if (MP_OBJ_IS_INT(pin_obj)) {
        channel = adc_get_internal_channel(mp_obj_get_int(pin_obj));
    } else {
        const pin_obj_t *pin = pin_find(pin_obj);
        if ((pin->adc_num & PIN_ADC1) == 0) {
            // No ADC1 function on that pin
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "pin %q does not have ADC capabilities", pin->name));
        }
        channel = pin->adc_channel;
    }

    if (!is_adcx_channel(channel)) {
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "not a valid ADC Channel: %d", channel));
    }


    if (ADC_FIRST_GPIO_CHANNEL <= channel && channel <= ADC_LAST_GPIO_CHANNEL) {
        // these channels correspond to physical GPIO ports so make sure they exist
        if (pin_adc1[channel] == NULL) {
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
                "channel %d not available on this board", channel));
        }
    }

    pyb_obj_adc_t *o = m_new_obj(pyb_obj_adc_t);
    memset(o, 0, sizeof(*o));
    o->base.type = &pyb_adc_type;
    o->pin_name = pin_obj;
    o->channel = channel;
    adc_init_single(o);

    return MP_OBJ_FROM_PTR(o);
}

/// \method read()
/// Read the value on the analog pin and return it.  The returned value
/// will be between 0 and 4095.
STATIC mp_obj_t adc_read(mp_obj_t self_in) {
    pyb_obj_adc_t *self = MP_OBJ_TO_PTR(self_in);
    return mp_obj_new_int(adc_config_and_read_channel(self->channel));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(adc_read_obj, adc_read);


STATIC const mp_rom_map_elem_t adc_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_read), MP_ROM_PTR(&adc_read_obj) },
};

STATIC MP_DEFINE_CONST_DICT(adc_locals_dict, adc_locals_dict_table);

const mp_obj_type_t pyb_adc_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC,
    .print = adc_print,
    .make_new = adc_make_new,
    .locals_dict = (mp_obj_dict_t*)&adc_locals_dict,
};

/******************************************************************************/
/* adc all object                                                             */

typedef struct _pyb_adc_all_obj_t {
    mp_obj_base_t base;
} pyb_adc_all_obj_t;

void adc_init_all(pyb_adc_all_obj_t *adc_all, uint32_t resolution, uint32_t en_mask) {

    switch (resolution) {
        case 8:  resolution = kADC_Resolution8Bit;  break;
        case 10: resolution = kADC_Resolution10Bit; break;
        case 12: resolution = kADC_Resolution12Bit; break;
        default:
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError,
                "resolution %d not supported", resolution));
    }

    for (uint32_t channel = ADC_FIRST_GPIO_CHANNEL; channel <= ADC_LAST_GPIO_CHANNEL; ++channel) {
        // only initialise those channels that are selected with the en_mask
        if (en_mask & (1 << channel)) {
            // Channels 0-16 correspond to real pins. Configure the GPIO pin in
            // ADC mode.
            const pin_obj_t *pin = pin_adc1[channel];
            if (pin) {
                mp_hal_ConfigGPIO(pin, 2 /*MP_HAL_PIN_MODE_ADC*/, MP_HAL_PIN_PULL_NONE);
            }
        }
    }

    adcx_init_periph(resolution);
}

int adc_get_resolution() {
    uint32_t res_reg = adcConfigStruct.resolution;

    switch (res_reg) {
        case kADC_Resolution8Bit:  return 8;
        case kADC_Resolution10Bit:  return 10;
        case kADC_Resolution12Bit: return 12;
    }
    return 12;
}


/******************************************************************************/
/* MicroPython bindings : adc_all object                                      */

STATIC mp_obj_t adc_all_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check number of arguments
    mp_arg_check_num(n_args, n_kw, 1, 2, false);

    // make ADCAll object
    pyb_adc_all_obj_t *o = m_new_obj(pyb_adc_all_obj_t);
    o->base.type = &pyb_adc_all_type;
    mp_int_t res = mp_obj_get_int(args[0]);
    uint32_t en_mask = 0xffffffff;
    if (n_args > 1) {
        en_mask =  mp_obj_get_int(args[1]);
    }
    adc_init_all(o, res, en_mask);

    return MP_OBJ_FROM_PTR(o);
}

STATIC mp_obj_t adc_all_read_channel(mp_obj_t self_in, mp_obj_t channel) {
    pyb_adc_all_obj_t *self = MP_OBJ_TO_PTR(self_in);
    uint32_t chan = adc_get_internal_channel(mp_obj_get_int(channel));
    uint32_t data = adc_config_and_read_channel(chan);
    return mp_obj_new_int(data);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(adc_all_read_channel_obj, adc_all_read_channel);

STATIC const mp_rom_map_elem_t adc_all_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_read_channel), MP_ROM_PTR(&adc_all_read_channel_obj) },
};

STATIC MP_DEFINE_CONST_DICT(adc_all_locals_dict, adc_all_locals_dict_table);

const mp_obj_type_t pyb_adc_all_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADCAll,
    .make_new = adc_all_make_new,
    .locals_dict = (mp_obj_dict_t*)&adc_all_locals_dict,
};

#endif // MICROPY_HW_ENABLE_ADC
