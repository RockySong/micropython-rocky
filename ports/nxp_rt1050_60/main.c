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
#include <string.h>

#include "board.h"
#include "pin_mux.h"
#include "portmodules.h"
#include "py/runtime.h"
#include "py/stackctrl.h"
#include "py/gc.h"
#include "py/mphal.h"
#include "lib/mp-readline/readline.h"
#include "lib/utils/pyexec.h"
#include "lib/oofatfs/ff.h"
#include "extmod/vfs.h"
#include "extmod/vfs_fat.h"
#include "fsl_debug_console.h"
#include "systick.h"
#include "pendsv.h"
#include "pybthread.h"
#include "gccollect.h"
#include "modmachine.h"
// #include "i2c.h"
// #include "spi.h"
#include "uart.h"
// #include "timer.h"
#include "led.h"
#include "pin.h"
#include "extint.h"
#include "usrsw.h"
#include "usb_app.h"
// #include "rtc.h"
#include "storage.h"
#include "sdcard.h"
#include "rng.h"
// #include "accel.h"
// #include "servo.h"
// #include "dac.h"
// #include "can.h"
#include "modnetwork.h"
#include "virtual_com.h"
#include "fsl_cache.h"
void UnalignTest(void);
void SystemClock_Config(void);

pyb_thread_t pyb_thread_main;
fs_user_mount_t fs_user_mount_flash;

void flash_error(int n) {
    for (int i = 0; i < n; i++) {
        led_state(PYB_LED_RED, 1);
        led_state(PYB_LED_GREEN, 0);
        mp_hal_delay_ms(250);
        led_state(PYB_LED_RED, 0);
        led_state(PYB_LED_GREEN, 1);
        mp_hal_delay_ms(250);
    }
    led_state(PYB_LED_GREEN, 0);
}

void NORETURN __fatal_error(const char *msg) {
	// make sure this function can never return, i.e., use infinite loop or do system call
    for (volatile uint delay = 0; delay < 10000000; delay++) {
    }
    led_state(1, 1);
    led_state(2, 1);
    led_state(3, 1);
    led_state(4, 1);
    mp_hal_stdout_tx_strn("\nFATAL ERROR:\n", 14);
    mp_hal_stdout_tx_strn(msg, strlen(msg));
    for (uint i = 0;i<1000;i++) 
	{
        // led_toggle(((i++) & 3) + 1);
		led_toggle(0);
        for (volatile uint delay = 0; delay < 10000000; delay++) {
        }
        if (i >= 16) {
            // to conserve power
            HAL_WFI();
        }
    }
	while(1) {}
}

void nlr_jump_fail(void *val) {
    printf("FATAL: uncaught exception %p\n", val);
    mp_obj_print_exception(&mp_plat_print, (mp_obj_t)val);
    __fatal_error("");
}

#ifndef NDEBUG
void MP_WEAK __assert_func(const char *file, int line, const char *func, const char *expr) {
    (void)func;
    printf("Assertion '%s' failed, at file %s:%d\n", expr, file, line);
    __fatal_error("");
}
#endif

STATIC mp_obj_t pyb_main(mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_opt, MP_ARG_INT, {.u_int = 0} }
    };

    if (MP_OBJ_IS_STR(pos_args[0])) {
        MP_STATE_PORT(pyb_config_main) = pos_args[0];

        // parse args
        mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
        mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);
        MP_STATE_VM(mp_optimise_value) = args[0].u_int;
    }
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_KW(pyb_main_obj, 1, pyb_main);

static const char fresh_boot_py[] __ALIGNED(4) =
"# boot.py -- run on boot-up\r\n"
"# can run arbitrary Python, but best to keep it minimal\r\n"
"\r\n"
"import machine\r\n"
"import pyb\r\n"
"#pyb.main('main.py') # main script to run after this one\r\n"
"#pyb.usb_mode('VCP+MSC') # act as a serial and a storage device\r\n"
"#pyb.usb_mode('VCP+HID') # act as a serial device and a mouse\r\n"
;

static const char fresh_selftest_py[] =
"import sensor, time, pyb\n"
"\n"
"def test_int_adc():\n"
"    adc  = pyb.ADCAll(12)\n"
"    # Test VBAT\n"
"    vbat = adc.read_core_vbat()\n"
"    vbat_diff = abs(vbat-3.3)\n"
"    if (vbat_diff > 0.1):\n"
"        raise Exception('INTERNAL ADC TEST FAILED VBAT=%fv'%vbat)\n"
"\n"
"    # Test VREF\n"
"    vref = adc.read_core_vref()\n"
"    vref_diff = abs(vref-1.2)\n"
"    if (vref_diff > 0.1):\n"
"        raise Exception('INTERNAL ADC TEST FAILED VREF=%fv'%vref)\n"
"    adc = None\n"
"    print('INTERNAL ADC TEST PASSED...')\n"
"\n"
"def test_color_bars():\n"
"    sensor.reset()\n"
"    # Set sensor settings\n"
"    sensor.set_brightness(0)\n"
"    sensor.set_saturation(3)\n"
"    sensor.set_gainceiling(8)\n"
"    sensor.set_contrast(2)\n"
"\n"
"    # Set sensor pixel format\n"
"    sensor.set_framesize(sensor.QVGA)\n"
"    sensor.set_pixformat(sensor.RGB565)\n"
"\n"
"    # Enable colorbar test mode\n"
"    sensor.set_colorbar(True)\n"
"\n"
"    # Skip a few frames to allow the sensor settle down\n"
"    for i in range(0, 100):\n"
"        image = sensor.snapshot()\n"
"\n"
"    #color bars thresholds\n"
"    t = [lambda r, g, b: r < 70  and g < 70  and b < 70,   # Black\n"
"         lambda r, g, b: r < 70  and g < 70  and b > 200,  # Blue\n"
"         lambda r, g, b: r > 200 and g < 70  and b < 70,   # Red\n"
"         lambda r, g, b: r > 200 and g < 70  and b > 200,  # Purple\n"
"         lambda r, g, b: r < 70  and g > 200 and b < 70,   # Green\n"
"         lambda r, g, b: r < 70  and g > 200 and b > 200,  # Aqua\n"
"         lambda r, g, b: r > 200 and g > 200 and b < 70,   # Yellow\n"
"         lambda r, g, b: r > 200 and g > 200 and b > 200]  # White\n"
"\n"
"    # color bars are inverted for OV7725\n"
"    if (sensor.get_id() == sensor.OV7725):\n"
"        t = t[::-1]\n"
"\n"
"    #320x240 image with 8 color bars each one is approx 40 pixels.\n"
"    #we start from the center of the frame buffer, and average the\n"
"    #values of 10 sample pixels from the center of each color bar.\n"
"    for i in range(0, 8):\n"
"        avg = (0, 0, 0)\n"
"        idx = 40*i+20 #center of colorbars\n"
"        for off in range(0, 10): #avg 10 pixels\n"
"            rgb = image.get_pixel(idx+off, 120)\n"
"            avg = tuple(map(sum, zip(avg, rgb)))\n"
"\n"
"        if not t[i](avg[0]/10, avg[1]/10, avg[2]/10):\n"
"            raise Exception('COLOR BARS TEST FAILED.'\n"
"            'BAR#(%d): RGB(%d,%d,%d)'%(i+1, avg[0]/10, avg[1]/10, avg[2]/10))\n"
"\n"
"    print('COLOR BARS TEST PASSED...')\n"
"\n"
"if __name__ == '__main__':\n"
"    print('')\n"
"    test_int_adc()\n"
"    test_color_bars()\n"
"\n"
;

static const char fresh_main_py[] __ALIGNED(4) =
"# main.py -- put your code here!\n"
"import pyb, time\n"
"led = pyb.LED(1)\n"
"usb = pyb.USB_VCP()\n"
"while (usb.isconnected()==False):\n"
"   led.on()\n"
"   time.sleep(150)\n"
"   led.off()\n"
"   time.sleep(100)\n"
"   led.on()\n"
"   time.sleep(150)\n"
"   led.off()\n"
"   time.sleep(600)\n"
;

static const char fresh_pybcdc_inf[] __ALIGNED(4) =
#include "genhdr/pybcdc_inf.h"
;

static const char fresh_readme_txt[] __ALIGNED(4) =
"This is a MicroPython board\r\n"
"\r\n"
"You can get started right away by writing your Python code in 'main.py'.\r\n"
"\r\n"
"For a serial prompt:\r\n"
" - Windows: you need to go to 'Device manager', right click on the unknown device,\r\n"
"   then update the driver software, using the 'pybcdc.inf' file found on this drive.\r\n"
"   Then use a terminal program like Hyperterminal or putty.\r\n"
" - Mac OS X: use the command: screen /dev/tty.usbmodem*\r\n"
" - Linux: use the command: screen /dev/ttyACM0\r\n"
"\r\n"
"Please visit http://micropython.org/help/ for further help.\r\n"
"Thank you for supporting the OpenMV project!\r\n"
"\r\n"
"To download the IDE, please visit:\r\n"
"https://openmv.io/pages/download\r\n"
"\r\n"
"For tutorials and documentation, please visit:\r\n"
"http://docs.openmv.io/\r\n"
"\r\n"
"For technical support and projects, please visit the forums:\r\n"
"http://forums.openmv.io/\r\n"
"\r\n"
"Please use github to report bugs and issues:\r\n"
"https://github.com/openmv/openmv\r\n"
;

// avoid inlining to avoid stack usage within main()
MP_NOINLINE STATIC bool init_flash_fs(uint reset_mode) {
    // init the vfs object
    fs_user_mount_t *vfs_fat = &fs_user_mount_flash;
    vfs_fat->flags = 0;
    pyb_flash_init_vfs(vfs_fat);

    // try to mount the flash
    FRESULT res = f_mount(&vfs_fat->fatfs);

    if (reset_mode == 3 || res == FR_NO_FILESYSTEM) {
        // no filesystem, or asked to reset it, so create a fresh one

        // LED on to indicate creation of LFS
        led_state(PYB_LED_GREEN, 1);
        uint32_t start_tick = HAL_GetTick();

        uint8_t working_buf[_MAX_SS];
        res = f_mkfs(&vfs_fat->fatfs, FM_FAT, 0, working_buf, sizeof(working_buf));
        if (res == FR_OK) {
            // success creating fresh LFS
        } else {
            printf("PYB: can't create flash filesystem\n");
            return false;
        }

        // set label
        f_setlabel(&vfs_fat->fatfs, "pybflash");

        // create empty main.py
        FIL fp;
        f_open(&vfs_fat->fatfs, &fp, "/main.py", FA_WRITE | FA_CREATE_ALWAYS);
        UINT n;
        f_write(&fp, fresh_main_py, sizeof(fresh_main_py) - 1 /* don't count null terminator */, &n);
        // TODO check we could write n bytes
        f_close(&fp);

        // create .inf driver file
        f_open(&vfs_fat->fatfs, &fp, "/pybcdc.inf", FA_WRITE | FA_CREATE_ALWAYS);
        f_write(&fp, fresh_pybcdc_inf, sizeof(fresh_pybcdc_inf) - 1 /* don't count null terminator */, &n);
        f_close(&fp);

        // create readme file
        f_open(&vfs_fat->fatfs, &fp, "/README.txt", FA_WRITE | FA_CREATE_ALWAYS);
        f_write(&fp, fresh_readme_txt, sizeof(fresh_readme_txt) - 1 /* don't count null terminator */, &n);
        f_close(&fp);

	    // Create default selftest.py
	    f_open(&vfs_fat->fatfs, &fp, "/selftest.py", FA_WRITE | FA_CREATE_ALWAYS);
	    f_write(&fp, fresh_selftest_py, sizeof(fresh_selftest_py) - 1 /* don't count null terminator */, &n);
	    f_close(&fp);

        // keep LED on for at least 200ms
        sys_tick_wait_at_least(start_tick, 200);
        led_state(PYB_LED_GREEN, 0);
    } else if (res == FR_OK) {
        // mount sucessful
    } else {
    fail:
        printf("PYB: can't mount flash\n");
        return false;
    }

    // mount the flash device (there should be no other devices mounted at this point)
    // we allocate this structure on the heap because vfs->next is a root pointer
    mp_vfs_mount_t *vfs = m_new_obj_maybe(mp_vfs_mount_t);
    if (vfs == NULL) {
        goto fail;
    }
    vfs->str = "/flash";
    vfs->len = 6;
    vfs->obj = MP_OBJ_FROM_PTR(vfs_fat);
    vfs->next = NULL;
    MP_STATE_VM(vfs_mount_table) = vfs;

    // The current directory is used as the boot up directory.
    // It is set to the internal flash filesystem by default.
    MP_STATE_PORT(vfs_cur) = vfs;

    // Make sure we have a /flash/boot.py.  Create it if needed.
    FILINFO fno;
    res = f_stat(&vfs_fat->fatfs, "/boot.py", &fno);
    if (res != FR_OK) {
        // doesn't exist, create fresh file

        // LED on to indicate creation of boot.py
        led_state(PYB_LED_GREEN, 1);
        uint32_t start_tick = HAL_GetTick();

        FIL fp;
        f_open(&vfs_fat->fatfs, &fp, "/boot.py", FA_WRITE | FA_CREATE_ALWAYS);
        UINT n;
        f_write(&fp, fresh_boot_py, sizeof(fresh_boot_py) - 1 /* don't count null terminator */, &n);
        // TODO check we could write n bytes
        f_close(&fp);

        // keep LED on for at least 200ms
        sys_tick_wait_at_least(start_tick, 200);
        led_state(PYB_LED_GREEN, 0);
    }

    return true;
}

#if MICROPY_HW_HAS_SDCARD
STATIC bool init_sdcard_fs(bool first_soft_reset) {
    bool first_part = true;
    for (int part_num = 1; part_num <= 4; ++part_num) {
        // create vfs object
        fs_user_mount_t *vfs_fat = m_new_obj_maybe(fs_user_mount_t);
        mp_vfs_mount_t *vfs = m_new_obj_maybe(mp_vfs_mount_t);
        if (vfs == NULL || vfs_fat == NULL) {
            break;
        }
        vfs_fat->flags = FSUSER_FREE_OBJ;
        sdcard_init_vfs(vfs_fat, part_num);

        // try to mount the partition
        FRESULT res = f_mount(&vfs_fat->fatfs);

        if (res != FR_OK) {
            // couldn't mount
			
            m_del_obj(fs_user_mount_t, vfs_fat);
            m_del_obj(mp_vfs_mount_t, vfs);
        } else {
            // mounted via FatFs, now mount the SD partition in the VFS
            if (first_part) {
                // the first available partition is traditionally called "sd" for simplicity
                vfs->str = "/";
                vfs->len = 1;
				// for openMV's root dir, set to SD card
				MP_STATE_PORT(vfs_cur) = vfs;
            } else {
                // subsequent partitions are numbered by their index in the partition table
                if (part_num == 2) {
                    vfs->str = "/sd2";
                } else if (part_num == 2) {
                    vfs->str = "/sd3";
                } else {
                    vfs->str = "/sd4";
                }
                vfs->len = 4;
            }
            vfs->obj = MP_OBJ_FROM_PTR(vfs_fat);
            vfs->next = NULL;
            for (mp_vfs_mount_t **m = &MP_STATE_VM(vfs_mount_table);; m = &(*m)->next) {
                if (*m == NULL) {
                    *m = vfs;
                    break;
                }
            }

            if (first_soft_reset) {
                // use SD card as medium for the USB MSD
                #if defined(USE_DEVICE_MODE)
                pyb_usb_storage_medium = PYB_USB_STORAGE_MEDIUM_SDCARD;
                #endif
            }

            #if defined(USE_DEVICE_MODE)
            // only use SD card as current directory if that's what the USB medium is
            if (pyb_usb_storage_medium == PYB_USB_STORAGE_MEDIUM_SDCARD)
            #endif
            {
                if (first_part) {
                    // use SD card as current directory
                    MP_STATE_PORT(vfs_cur) = vfs;
                }
            }
            first_part = false;
        }
    }

    if (first_part) {
        printf("PYB: can't mount SD card\n");
        return false;
    } else {
        return true;
    }
}
#endif

STATIC uint update_reset_mode(uint reset_mode) {
#if MICROPY_HW_HAS_SWITCH
    if (switch_get()) {

        // The original method used on the pyboard is appropriate if you have 2
        // or more LEDs.
#if defined(MICROPY_HW_LED2)
        for (uint i = 0; i < 3000; i++) {
            if (!switch_get()) {
                break;
            }
            mp_hal_delay_ms(20);
            if (i % 30 == 29) {
                if (++reset_mode > 3) {
                    reset_mode = 1;
                }
                led_state(2, reset_mode & 1);
                led_state(3, reset_mode & 2);
                led_state(4, reset_mode & 4);
            }
        }
        // flash the selected reset mode
        for (uint i = 0; i < 6; i++) {
            led_state(2, 0);
            led_state(3, 0);
            led_state(4, 0);
            mp_hal_delay_ms(50);
            led_state(2, reset_mode & 1);
            led_state(3, reset_mode & 2);
            led_state(4, reset_mode & 4);
            mp_hal_delay_ms(50);
        }
        mp_hal_delay_ms(400);

#elif defined(MICROPY_HW_LED1)

        // For boards with only a single LED, we'll flash that LED the
        // appropriate number of times, with a pause between each one
        for (uint i = 0; i < 10; i++) {
            led_state(1, 0);
            for (uint j = 0; j < reset_mode; j++) {
                if (!switch_get()) {
                    break;
                }
                led_state(1, 1);
                mp_hal_delay_ms(100);
                led_state(1, 0);
                mp_hal_delay_ms(200);
            }
            mp_hal_delay_ms(400);
            if (!switch_get()) {
                break;
            }
            if (++reset_mode > 3) {
                reset_mode = 1;
            }
        }
        // Flash the selected reset mode
        for (uint i = 0; i < 2; i++) {
            for (uint j = 0; j < reset_mode; j++) {
                led_state(1, 1);
                mp_hal_delay_ms(100);
                led_state(1, 0);
                mp_hal_delay_ms(200);
            }
            mp_hal_delay_ms(400);
        }
#else
#error Need a reset mode update method
#endif
    }
#endif
    return reset_mode;
}
#include "irq.h"
HAL_StatusTypeDef HAL_Init(void)
{
    BOARD_ConfigMPU();
    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
	PRINTF("Debug console inited!\r\n");
	/* Set Interrupt Group Priority */
	NVIC_SetPriorityGrouping(3);
	
	/* Use systick as time base source and configure 1ms tick (default clock after Reset is HSI) */
	HAL_InitTick(IRQ_PRI_SYSTICK);

	#if 0 // #ifdef XIP_EXTERNAL_FLASH
	uint32_t wait;
	for (wait = HAL_GetTick(); wait < 1501; wait = HAL_GetTick()) {
		if (wait % 250 == 0) {
			PRINTF("%d\r\n", (1501 - wait) / 250);
		}
		HAL_WFI();
	}
	#endif
	
	return HAL_OK;
}

#define DTCM_END  0x20074000  // leave 16kB, letnet can makes openmv access out of range.
#define OCRAM_END 0x20280000
#ifdef USE_OCRAM
#define RAM_START 0x20200000
#define RAM_END	  OCRAM_END
#else
#define RAM_START 	0x20000000
#define RAM_END		DTCM_END
#endif

#if defined(__CC_ARM)
	#define STACK_SIZE	(0x2000)
	uint32_t  _ram_start = RAM_START, ram_end = RAM_END, _estack = 0x6000, _heap_end = RAM_END;
	extern unsigned int Image$$MPY_HEAP_START$$Base;
	uint32_t _heap_start = (uint32_t) &Image$$MPY_HEAP_START$$Base;
#elif defined(__ICCARM__)
	extern unsigned int CHEAP$$Limit[], lg_c1Stack[];
	uint32_t _heap_start = (uint32_t)CHEAP$$Limit;	// we put HEAP at the last of DATA region, so we can assume mpy heap start here
	
	uint32_t  _ram_start = RAM_START, _ram_end = (uint32_t)CHEAP$$Limit, _estack = 0x6000 + (uint32_t)lg_c1Stack, _heap_end = RAM_END;
#elif defined(__GNUC__)
extern uint32_t _ram_start, _ram_end, _estack, _heap_end, _heap_start;
extern uint32_t _stack_size;
#endif

void PYB_MainLoop(uint32_t reset_mode) {
    // Run the main script from the current directory.
    if ((reset_mode == 1 || reset_mode == 3) && pyexec_mode_kind == PYEXEC_MODE_FRIENDLY_REPL) {
        const char *main_py;
        if (MP_STATE_PORT(pyb_config_main) == MP_OBJ_NULL) {
            main_py = "main.py";
        } else {
            main_py = mp_obj_str_get_str(MP_STATE_PORT(pyb_config_main));
        }
        mp_import_stat_t stat = mp_import_stat(main_py);
        if (stat == MP_IMPORT_STAT_FILE) {
            int ret = pyexec_file(main_py);
            if (ret & PYEXEC_FORCED_EXIT) {
                // goto soft_reset_exit;
				return;
            }
            if (!ret) {
                flash_error(3);
            }
        }
    }

    // Main script is finished, so now go into REPL mode.
    // The REPL mode can change, or it can request a soft reset.
    for (;;) {
        if (pyexec_mode_kind == PYEXEC_MODE_RAW_REPL) {
            if (pyexec_raw_repl() != 0) {
                break;
            }
        } else {
			VCOM_Open();
            if (pyexec_friendly_repl() != 0) {
                break;
            }
        }
    }
}

__WEAK void sensor_init0() {}
__WEAK void sensor_init() {}
#include "usbdbg.h"

extern int OpenMV_Main(uint32_t first_soft_reset);

extern int TestCchBug(void);
int TestCacheBug(void)
{
	L1CACHE_CleanInvalidateDCache();
	return TestCchBug();
}	
	
int main(void) {
	int retCode = 0;
    // TODO disable JTAG
    /* STM32F4xx HAL library initialization:
         - Configure the Flash prefetch, instruction and Data caches
         - Configure the Systick to generate an interrupt each 1 msec
         - Set NVIC Group Priority to 4
         - Global MSP (MCU Support Package) initialization
       */
    HAL_Init();
	TestCacheBug();
    #if defined(MICROPY_BOARD_EARLY_INIT)
    MICROPY_BOARD_EARLY_INIT();
    #endif

    // basic sub-system init
    #if MICROPY_PY_THREAD
    pyb_thread_init(&pyb_thread_main);
    #endif
    pendsv_init();
    led_init();
#if MICROPY_HW_HAS_SWITCH
    switch_init0();
#endif

#if defined(USE_DEVICE_MODE)
    // default to internal flash being the usb medium
    pyb_usb_storage_medium = PYB_USB_STORAGE_MEDIUM_FLASH;
#endif

    bool first_soft_reset = true;
	retCode = true;
soft_reset:
	{
		uint32_t wait;
		uint32_t i = 0;
		for (wait = HAL_GetTick(); wait < 1001; wait = HAL_GetTick()) {
			if (wait % 125 == 0) {
				led_state(1, (++i) & 1);
			}
			// __WFI();
		}
		led_state(1, 0);
	}
	
    led_state(1, 1);
	#if defined(MICROPY_HW_LED2)
	led_state(2, 1);
	led_state(2, 0);
	#endif
	#if defined(MICROPY_HW_LED3)
	led_state(3, 1);
    led_state(3, 0);
	#endif
	#if defined(MICROPY_HW_LED4)
	led_state(4, 0);
    led_state(4, 1);
	#endif
    uint reset_mode = update_reset_mode(1);

    machine_init();
#if MICROPY_HW_ENABLE_RTC
    if (first_soft_reset) {
        rtc_init_start(false);
    }
#endif

    // more sub-system init
#if MICROPY_HW_HAS_SDCARD
    if (first_soft_reset) {
        sdcard_init();
		#ifndef __CC_ARM
		{
			volatile uint32_t t1, t2;
			t1 = HAL_GetTick();
			t2 = t1 + 2000;
			while (HAL_GetTick() < t2) {HAL_WFI();}
		}
		#endif
    }
#endif
    if (first_soft_reset) {
		// rocky: OMVRT1 uses GD32 flash, not yet supported internal file system
        #if defined(EVK1050_60_HYPER)
        storage_init();
		#endif
    }

    // Python threading init
    #if MICROPY_PY_THREAD
    mp_thread_init();
    #endif
    // GC init
#if defined(__CC_ARM) || defined(__ICCARM__)
    // Stack limit should be less than real stack size, so we have a chance
    // to recover from limit hit.  (Limit is measured in bytes.)
    // Note: stack control relies on main thread being initialised above
    mp_stack_set_top((void*) _estack);
    mp_stack_set_limit(STACK_SIZE);
	if (_heap_start >= 0x80000000) {
		// heap is in SDRAM region, we assume there is at least 1MB heap!
		_heap_end = _heap_start + 1024 * 1024;
	} else if (_heap_start >= 0x20200000)
	{
		_heap_end = OCRAM_END;
	} else {
		_heap_end = DTCM_END;
	}
    gc_init((void*) _heap_start, (void*) _heap_end);
#elif defined(__GNUC__)
    // Stack limit should be less than real stack size, so we have a chance
    // to recover from limit hit.  (Limit is measured in bytes.)
    // Note: stack control relies on main thread being initialised above
    mp_stack_set_top(&_estack);
    mp_stack_set_limit(&_stack_size);
    gc_init(&_heap_start, &_heap_end);	
#endif
	MP_STATE_PORT(omv_ide_irq) = 0;

    // Micro Python init
    mp_init();
    mp_obj_list_init(mp_sys_path, 0);
    mp_obj_list_append(mp_sys_path, MP_OBJ_NEW_QSTR(MP_QSTR_)); // current dir (or base dir of the script)
    mp_obj_list_init(mp_sys_argv, 0);

    // Initialise low-level sub-systems.  Here we need to very basic things like
    // zeroing out memory and resetting any of the sub-systems.  Following this
    // we can run Python scripts (eg boot.py), but anything that is configurable
    // by boot.py must be set after boot.py is run.

    // sensor_init0();
    readline_init0();
    pin_init0();
    // rocky ignore: extint_init0();
    // rocky ignore: timer_init0();
    uart_init0();

    // Define MICROPY_HW_UART_REPL to be PYB_UART_6 and define
    // MICROPY_HW_UART_REPL_BAUD in your mpconfigboard.h file if you want a
    // REPL on a hardware UART as well as on USB VCP
#if defined(MICROPY_HW_UART_REPL)
    {

        mp_obj_t args[2] = {
            MP_OBJ_NEW_SMALL_INT(MICROPY_HW_UART_REPL),
            MP_OBJ_NEW_SMALL_INT(115200),
        };
        MP_STATE_PORT(pyb_stdio_uart) = pyb_uart_type.make_new((mp_obj_t)&pyb_uart_type, MP_ARRAY_SIZE(args), 0, args);
    }
#else
    MP_STATE_PORT(pyb_stdio_uart) = NULL;
#endif

#if MICROPY_HW_ENABLE_CAN
    can_init0();
#endif

#if MICROPY_HW_ENABLE_RNG
    rng_init0();
#endif
	usbdbg_init();	// must be after mpy's heap init, as it uses mpy's heap
	// rocky ignore: i2c_init0();
	// rocky ignore: spi_init0();

	pyb_usb_init0();

    // Initialise the local flash filesystem.
    // Create it if needed, mount in on /flash, and set it as current dir.
	bool mounted_flash;
	#ifndef XIP_EXTERNAL_FLASH
    mounted_flash = init_flash_fs(reset_mode);
	#else
	mounted_flash = 0;
	#endif

    bool mounted_sdcard = false;
#if MICROPY_HW_HAS_SDCARD
    // if an SD card is present then mount it on /sd/
    if (sdcard_is_present()) {
        // if there is a file in the flash called "SKIPSD", then we don't mount the SD card
        if (!mounted_flash || f_stat(&fs_user_mount_flash.fatfs, "/SKIPSD", NULL) != FR_OK) {
			int retry = 16;
			while (retry--) {
				mounted_sdcard = init_sdcard_fs(first_soft_reset);
				if (mounted_sdcard)
					break;
				else
				{
					uint32_t t0;
					PRINTF("can't mount SD card FS!\r\n");
					t0 = HAL_GetTick();
					while (HAL_GetTick() - t0 < 250) {}
				}
			}
        }
    } else {
		 
	}
#endif

    // set sys.path based on mounted filesystems (/sd is first so it can override /flash)
    if (mounted_sdcard) {
        mp_obj_list_append(mp_sys_path, MP_OBJ_NEW_QSTR(MP_QSTR__slash_sd));
        mp_obj_list_append(mp_sys_path, MP_OBJ_NEW_QSTR(MP_QSTR__slash_sd_slash_lib));
    }
    if (mounted_flash) {
        mp_obj_list_append(mp_sys_path, MP_OBJ_NEW_QSTR(MP_QSTR__slash_flash));
        mp_obj_list_append(mp_sys_path, MP_OBJ_NEW_QSTR(MP_QSTR__slash_flash_slash_lib));
    }

    // reset config variables; they should be set by boot.py
    MP_STATE_PORT(pyb_config_main) = MP_OBJ_NULL;

	#if 1 //#ifdef __CC_ARM
    // run boot.py, if it exists
    // TODO perhaps have pyb.reboot([bootpy]) function to soft-reboot and execute custom boot.py
    if (reset_mode == 1 || reset_mode == 3) {
        const char *boot_py = "boot.py";
        mp_import_stat_t stat = mp_import_stat(boot_py);
        if (stat == MP_IMPORT_STAT_FILE) {
			PRINTF("Executing boot.py\r\n");
            int ret = pyexec_file(boot_py);
            if (ret & PYEXEC_FORCED_EXIT) {
                goto soft_reset_exit;
            }
            if (!ret) {
                flash_error(4);
            }
        }
    }
	#endif

    led_state(1, 0);
    led_state(2, 0);
    led_state(3, 0);
    led_state(4, 0);

    // Now we initialise sub-systems that need configuration from boot.py,
    // or whose initialisation can be safely deferred until after running
    // boot.py.

#if defined(USE_DEVICE_MODE)
    // init USB device to default setting if it was not already configured
    if (first_soft_reset) {
	    if (!(pyb_usb_flags & PYB_USB_FLAG_USB_MODE_CALLED)) {
	        pyb_usb_dev_init(USBD_VID, USBD_PID_CDC_MSC, USBD_MODE_CDC_MSC, NULL);
			// NVIC_SetPriority(USB_OTG1_IRQn, 0);
	    }
    }
#endif

#if MICROPY_HW_HAS_MMA7660
    // MMA accel: init and reset
    accel_init();
#endif

#if MICROPY_HW_ENABLE_SERVO
    // servo
    servo_init();
#endif

#if MICROPY_HW_ENABLE_DAC
    // DAC
    dac_init();
#endif

#if MICROPY_PY_NETWORK
    mod_network_init();
#endif


    // At this point everything is fully configured and initialised.

 	VCOM_Open();
	retCode = OpenMV_Main(retCode);
soft_reset_exit:

    // soft reset

    printf("PYB: sync filesystems\n");
    storage_flush();

    printf("PYB: soft reboot\n");
    // rocky ignore: timer_deinit();
    
	// rocky ignore: uart_deinit();
#if MICROPY_HW_ENABLE_CAN
    // rocky ignore: can_deinit();
#endif

    #if MICROPY_PY_THREAD
    pyb_thread_deinit();
    #endif

    first_soft_reset = false;
    goto soft_reset;
}

void _exit(int x) {
	printf("main() exit!\r\n");
	while (1) {}
}
#if 0
// own impl of alloca, has risk that later alloca overlap with earlier alloca
// larger ALLOCA_BUF_SIZE reduces the risk, make sure you make sufficient test!
#define ALLOCA_BUF_SIZE	2048
uint32_t s_allocaBuf[ALLOCA_BUF_SIZE / 4];
uint32_t s_allocaNdx;
void* rollback_alloca(uint32_t cb) 
{
	void *pRet;
	if (s_allocaNdx * 4 + cb >= ALLOCA_BUF_SIZE)
		s_allocaNdx = 0;
	pRet = (void*)(s_allocaBuf + s_allocaNdx);
	s_allocaNdx += (cb + 3) >> 2;
	return pRet;
}
#endif
