/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013-2018 Damien P. George
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
#include "rng.h"
#include "mpconfigboard.h"
#include "board.h"
#include "fsl_trng.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include <stdio.h>
#include "py/nlr.h"
#include "py/runtime.h"
#include "py/mphal.h"
#define TRNG0 TRNG
#define TRNG_EXAMPLE_RANDOM_NUMBER 1

#if MICROPY_HW_ENABLE_RNG
uint32_t rng_get(void) {
    uint32_t i;
    trng_config_t trngConfig;
    status_t status;
    uint32_t data[TRNG_EXAMPLE_RANDOM_NUMBER];
    /* Init hardware*/
    BOARD_ConfigMPU();
    BOARD_BootClockRUN();
    TRNG_GetDefaultConfig(&trngConfig);
    /* Set sample mode of the TRNG ring oscillator to Von Neumann, for better random data.
     * It is optional.*/
    trngConfig.sampleMode = kTRNG_SampleModeVonNeumann;
    /* Initialize TRNG */
    status = TRNG_Init(TRNG0, &trngConfig);
    if (kStatus_Success == status)
    {
        while (1)
        {
            /* Get Random data*/
            status = TRNG_GetRandomData(TRNG0, data, sizeof(data));
            if (status == kStatus_Success)
            {
                /* Print data*/
                for (i = 0; i < TRNG_EXAMPLE_RANDOM_NUMBER; i++)
                {
					mp_printf(&mp_plat_print, "Random[%d] = %d\r\n", i, (data[i]>>2));
                }
				return data[i-1];
            }
            else
            {
                PRINTF("TRNG failed!\r\n");
            }
        }
    }
    else
    {
        PRINTF("TRNG initialize failed!\r\n");
    }
    return data[i];
}

// Return a 30-bit hardware generated random number.
STATIC mp_obj_t pyb_rng_getnum(void) {
	rng_get();
	return mp_const_none;
}

MP_DEFINE_CONST_FUN_OBJ_0(pyb_rng_getnum_obj, pyb_rng_getnum);

STATIC const mp_rom_map_elem_t rng_locals_dict_table[] = {

    { MP_ROM_QSTR(MP_QSTR_getnum), MP_ROM_PTR(&pyb_rng_getnum_obj) },

};

STATIC MP_DEFINE_CONST_DICT(rng_locals_dict, rng_locals_dict_table);

const mp_obj_type_t pyb_rng_type = {
    { &mp_type_type },
    .name = MP_QSTR_rng,
    .locals_dict = (mp_obj_dict_t*)&rng_locals_dict,
};

#endif // MICROPY_HW_ENABLE_RNG
