// <MCU>_prefix.c becomes the initial portion of the generated pins file.

#include <stdio.h>

#include "py/obj.h"
#include "py/mphal.h"
#include "pin.h"

#define AF(af_idx, af_fn, af_unit, af_type, af_ptr, af_inSelReg, af_inSelVal) \
{ \
    { &pin_af_type }, \
    .name = MP_QSTR_AF ## af_idx ## _ ## af_fn ## af_unit, \
    .idx = (af_idx), \
    .fn = AF_FN_ ## af_fn, \
    .unit = (af_unit), \
    .type = AF_PIN_TYPE_ ## af_fn ## _ ## af_type, \
    .reg = (af_ptr), \
    .inSelReg = (af_inSelReg), \
    .inSelVal = (af_inSelVal), \
}

#define PIN(p_name, p_port, p_pin, p_af, p_adc_num, p_adc_channel, p_afReg, p_cfgReg) \
{ \
    { &pin_type }, \
    .name = MP_QSTR_ ## p_name, \
    .port = PORT_ ## p_port, \
    .pin = (p_pin), \
    .num_af = (sizeof(p_af) / sizeof(pin_af_obj_t)), \
    .pin_mask = (1 << ((p_pin) & 0x0f)), \
    .gpio = GPIO ## p_port, \
    .af = p_af, \
    .adc_num = p_adc_num, \
    .adc_channel = p_adc_channel, \
    .afReg = p_afReg, \
    .cfgReg = p_cfgReg, \
}
