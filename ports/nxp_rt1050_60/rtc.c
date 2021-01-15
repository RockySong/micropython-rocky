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
#include "rtc.h"
#include "fsl_snvs_hp.h"
#include <stdio.h>
#include "py/runtime.h"
#include "irq.h"
#include "fsl_debug_console.h"
#include "board.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_sdmmc_event.h"

#define kCLOCK_SnvsHp0 kCLOCK_SnvsHp
#define EXAMPLE_SNVS_IRQn SNVS_HP_WRAPPER_IRQn
#define EXAMPLE_SNVS_IRQHandler SNVS_HP_WRAPPER_IRQHandler

static mp_uint_t rtc_info;
volatile bool busyWait;

#ifndef RTC_ASYNCH_PREDIV
#define RTC_ASYNCH_PREDIV (0x7f)
#endif
#ifndef RTC_SYNCH_PREDIV
#define RTC_SYNCH_PREDIV  (0x00ff)
#endif

STATIC void RTC_CalendarConfig(void);

#if defined(MICROPY_HW_RTC_USE_LSE) && MICROPY_HW_RTC_USE_LSE
STATIC bool rtc_use_lse = true;
#else
STATIC bool rtc_use_lse = false;
#endif
STATIC uint32_t rtc_startup_tick;
STATIC bool rtc_need_init_finalise = false;

// check if LSE exists
// not well tested, should probably be removed
STATIC bool lse_magic(void) {
#if 0
    uint32_t mode_in = GPIOC->MODER & 0x3fffffff;
    uint32_t mode_out = mode_in | 0x40000000;
    GPIOC->MODER = mode_out;
    GPIOC->OTYPER &= 0x7fff;
    GPIOC->BSRRH = 0x8000;
    GPIOC->OSPEEDR &= 0x3fffffff;
    GPIOC->PUPDR &= 0x3fffffff;
    int i = 0xff0;
    __IO int d = 0;
    uint32_t tc = 0;
    __IO uint32_t j;
    while (i) {
        GPIOC->MODER = mode_out;
        GPIOC->MODER = mode_in;
        for (j = 0; j < d; j++) ;
        i--;
        if ((GPIOC->IDR & 0x8000) == 0) {
            tc++;
        }
    }
    return (tc < 0xff0)?true:false;
#else
    return false;
#endif
}

void EXAMPLE_SNVS_IRQHandler(void)
{
    if (SNVS_HP_RTC_GetStatusFlags(SNVS) & kSNVS_RTC_AlarmInterruptFlag)
    {
        busyWait = false;

        /* Clear alarm flag */
        SNVS_HP_RTC_ClearStatusFlags(SNVS, kSNVS_RTC_AlarmInterruptFlag);
    }
/* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F Store immediate overlapping
  exception return operation might vector to incorrect interrupt */
#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}

extern snvs_hp_rtc_datetime_t rtcDate;
int	rtc_info_init()
{	
	snvs_hp_rtc_datetime_t rtcDate;
	rtcDate.year = 2019;
    rtcDate.month = 02;
    rtcDate.day = 18;
    rtcDate.hour = 11;
    rtcDate.minute = 30;
    rtcDate.second = 35;
	/*PRINTF("Current datetime: %04d-%02d-%02d %02d:%02d:%02d\r\n", rtcDate.year, rtcDate.month, rtcDate.day,
               rtcDate.hour, rtcDate.minute, rtcDate.second);
    */
	return rtcDate.year;
}

int rtc_init_start() {
    uint32_t sec;
	uint32_t i;
    uint8_t index;
    snvs_hp_rtc_datetime_t rtcDate;
    BOARD_ConfigMPU();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
    /* Enable SNVS alarm interrupt */
    SNVS_HP_RTC_EnableInterrupts(SNVS, kSNVS_RTC_AlarmInterrupt);
    /* Enable at the NVIC */
    EnableIRQ(EXAMPLE_SNVS_IRQn);
    PRINTF("Set up time to wake up an alarm.\r\n");
    /* This loop will set the SNVS alarm */
    while (1)
    {
        busyWait = true;
        index = 0;
        sec = 0;
		for (i=0;i<200;i++)
		{
		/* Get date time */
        SNVS_HP_RTC_GetDatetime(SNVS, &rtcDate);
		/*mp_printf(&mp_plat_print, "Current datetime1: %04d-%02d-%02d %02d:%02d:%02d\r\n", rtcDate.year, rtcDate.month, rtcDate.day,
               rtcDate.hour, rtcDate.minute, rtcDate.second);
        */
		return rtcDate.second;
		}
    }
}
/******************************************************************************/
// MicroPython bindings
typedef struct _pyb_rtc_obj_t {
    mp_obj_base_t base;
} pyb_rtc_obj_t;

STATIC const pyb_rtc_obj_t pyb_rtc_obj = {{&pyb_rtc_type}};

/// Create an RTC object.
mp_obj_t pyb_rtc_gettime() {
	extern snvs_hp_rtc_datetime_t rtcDate;
	rtc_init_start();
	return mp_const_none;
//	return mp_obj_new_int(rtc_init_start());
}

MP_DEFINE_CONST_FUN_OBJ_0(pyb_rtc_gettime_obj, pyb_rtc_gettime);

mp_obj_t pyb_rtc_info() {
    return mp_obj_new_int(rtc_info_init());
}
MP_DEFINE_CONST_FUN_OBJ_0(pyb_rtc_info_obj, pyb_rtc_info);

#define MEG_DIV_64 (1000000 / 64)
#define MEG_DIV_SCALE ((RTC_SYNCH_PREDIV + 1) / 64)

#if defined(MICROPY_HW_RTC_USE_US) && MICROPY_HW_RTC_USE_US
uint32_t rtc_subsec_to_us(uint32_t ss) {
    return ((RTC_SYNCH_PREDIV - ss) * MEG_DIV_64) / MEG_DIV_SCALE;
}

uint32_t rtc_us_to_subsec(uint32_t us) {
    return RTC_SYNCH_PREDIV - (us * MEG_DIV_SCALE / MEG_DIV_64);
}
#else
#define rtc_us_to_subsec
#define rtc_subsec_to_us
#endif

STATIC const mp_rom_map_elem_t pyb_rtc_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_gettime), MP_ROM_PTR(&pyb_rtc_gettime_obj) },
    { MP_ROM_QSTR(MP_QSTR_info), MP_ROM_PTR(&pyb_rtc_info_obj) },

};
STATIC MP_DEFINE_CONST_DICT(pyb_rtc_locals_dict, pyb_rtc_locals_dict_table);

const mp_obj_type_t pyb_rtc_type = {
    { &mp_type_type },
    .name = MP_QSTR_rtc,
    .locals_dict = (mp_obj_dict_t*)&pyb_rtc_locals_dict,
};