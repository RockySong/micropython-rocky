/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * main function.
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "mpconfig.h"
#include "systick.h"
#include "pendsv.h"
#include "qstr.h"
#include "nlr.h"
#include "lexer.h"
#include "parse.h"
#include "compile.h"
#include "runtime.h"
#include "obj.h"
#include "objmodule.h"
#include "objstr.h"
#include "gc.h"
#include "stackctrl.h"
#include "gccollect.h"
// #include "readline.h"
#include "timer.h"
#include "pin.h"
#include "usb.h"
#include "rtc.h"
#include "storage.h"
#include "sdcard.h"
#include "lib/oofatfs/ff.h"
#include "modnetwork.h"
#include "modmachine.h"

#include "extmod/vfs.h"
#include "extmod/vfs_fat.h"
#include "lib/utils/pyexec.h"

#include "irq.h"
#include "rng.h"
#include "led.h"
#include "spi.h"
#include "i2c.h"
#include "uart.h"
// #include "dac.h"
// #include "can.h"
#include "extint.h"
// #include "servo.h"

#include "sensor.h"
#include "usbdbg.h"
#include "sdram.h"
#include "fb_alloc.h"
#include "ff_wrapper.h"

#include "usb_app.h"


#include "py_sensor.h"
#include "py_image.h"
#include "py_lcd.h"
#include "py_fir.h"

#include "framebuffer.h"
#include "fsl_debug_console.h"

#include "ini.h"
#include "overlay_manager.h"
#if MICROPY_HW_WIFIDBG_EN
#include "wifidbg.h"
typedef struct openmv_config {
    bool wifidbg;
    wifidbg_config_t wifidbg_config;
} openmv_config_t;
#endif

void NORETURN __fatal_error(const char *msg);
void flash_error(int n);

int errno;
long long _vfs_buf[1024 / 8];
static fs_user_mount_t *vfs_fat = (fs_user_mount_t *) _vfs_buf;

#ifdef OMV_MPY_ONLY
void fb_alloc_free_till_mark() {}
void fb_free(void) {}
void *fb_alloc(uint32_t size) {return m_malloc(size);}
void fb_alloc_fail(void) {}
__WEAK void list_push_back(list_t *ptr, void *data) {}
__WEAK void* py_image_cobj(mp_obj_t img_obj) {}
#endif

#ifndef NDEBUG
void __attribute__((weak))
    __assert_func(const char *file, int line, const char *func, const char *expr) {
    (void)func;
    printf("Assertion '%s' failed, at file %s:%d\n", expr, file, line);
    __fatal_error("");
}
#endif

#ifdef STACK_PROTECTOR
uint32_t __stack_chk_guard=0xDEADBEEF;

void NORETURN __stack_chk_fail(void)
{
    while (1) {
        flash_error(100);
    }
}
#endif

static bool ini_handler_callback_is_true(const char *value)
{
    int i = ini_atoi(value);
    if (i) return true;
    if (strlen(value) != 4) return false;
    if ((value[0] != 'T') && (value[0] != 't')) return false;
    if ((value[1] != 'R') && (value[1] != 'r')) return false;
    if ((value[2] != 'U') && (value[2] != 'u')) return false;
    if ((value[3] != 'E') && (value[3] != 'e')) return false;
    return true;
}

__WEAK bool ini_is_true(const char *value)
{
    int i = ini_atoi(value);
    if (i) return true;
    if (strlen(value) != 4) return false;
    if ((value[0] != 'T') && (value[0] != 't')) return false;
    if ((value[1] != 'R') && (value[1] != 'r')) return false;
    if ((value[2] != 'U') && (value[2] != 'u')) return false;
    if ((value[3] != 'E') && (value[3] != 'e')) return false;
    return true;
}

static int ini_handler_callback(void *user, const char *section, const char *name, const char *value)
{
	#define MATCH(s, n) ((strcmp(section, (s)) == 0) && (strcmp(name, (n)) == 0))
	
#if MICROPY_HW_WIFIDBG_EN	
    openmv_config_t *openmv_config = (openmv_config_t *) user;

    

    if (MATCH("BoardConfig", "WiFiDebug")) {
        openmv_config->wifidbg = ini_is_true(value);
    } else if (MATCH("WiFiConfig", "Mode")) {
        openmv_config->wifidbg_config.mode = ini_atoi(value);
    } else if (MATCH("WiFiConfig", "ClientSSID")) {
        strncpy(openmv_config->wifidbg_config.client_ssid, value, WINC_MAX_SSID_LEN);
    } else if (MATCH("WiFiConfig", "ClientKey")) {
        strncpy(openmv_config->wifidbg_config.client_key,  value, WINC_MAX_PSK_LEN);
    } else if (MATCH("WiFiConfig", "ClientSecurity")) {
        openmv_config->wifidbg_config.client_security = ini_atoi(value);
    } else if (MATCH("WiFiConfig", "ClientChannel")) {
        openmv_config->wifidbg_config.client_channel = ini_atoi(value);
    } else if (MATCH("WiFiConfig", "AccessPointSSID")) {
        strncpy(openmv_config->wifidbg_config.access_point_ssid, value, WINC_MAX_SSID_LEN);
    } else if (MATCH("WiFiConfig", "AccessPointKey")) {
        strncpy(openmv_config->wifidbg_config.access_point_key,  value, WINC_MAX_PSK_LEN);
    } else if (MATCH("WiFiConfig", "AccessPointSecurity")) {
        openmv_config->wifidbg_config.access_point_security = ini_atoi(value);
    } else if (MATCH("WiFiConfig", "AccessPointChannel")) {
        openmv_config->wifidbg_config.access_point_channel = ini_atoi(value);
    } else if (MATCH("WiFiConfig", "BoardName")) {
        strncpy(openmv_config->wifidbg_config.board_name,  value, WINC_MAX_BOARD_NAME_LEN);
    } else if (MATCH("WiFiConfig", "DBGMODE")) {
        openmv_config->wifidbg_config.dbg_mode= ini_atoi(value);
    } else 
#endif	
	if (MATCH("BootSettings", "REPLUart")) {
        if (ini_handler_callback_is_true(value)) {
            mp_obj_t args[2] = {
                MP_OBJ_NEW_SMALL_INT(3), // UART Port
                MP_OBJ_NEW_SMALL_INT(115200) // Baud Rate
            };

            MP_STATE_PORT(pyb_stdio_uart) = pyb_uart_type.make_new((mp_obj_t) &pyb_uart_type, MP_ARRAY_SIZE(args), 0, args);
        }
    } else 
	{
        return 0;
    }

    return 1;

    #undef MATCH
}

FRESULT apply_settings(const char *path)
{
    nlr_buf_t nlr;
    FRESULT f_res = f_stat(&vfs_fat->fatfs, path, NULL);

    if (f_res == FR_OK) {
        if (nlr_push(&nlr) == 0) {
            ini_parse(&vfs_fat->fatfs, path, ini_handler_callback, NULL);
            nlr_pop();
        }
    }

    return f_res;
}

FRESULT exec_boot_script(const char *path, bool selftest, bool interruptible)
{
    nlr_buf_t nlr;
    bool interrupted = false;
    FRESULT f_res = f_stat(&vfs_fat->fatfs, path, NULL);

    if (f_res == FR_OK) {
        if (nlr_push(&nlr) == 0) {
            // Enable IDE interrupts if allowed
            if (interruptible) {
                usbdbg_set_irq_enabled(true);
                usbdbg_set_script_running(true);
            }
            // Parse, compile and execute the main script.
            pyexec_file(path);
            nlr_pop();
        } else {
            interrupted = true;
        }
    }

    // Disable IDE interrupts
    usbdbg_set_irq_enabled(false);
    usbdbg_set_script_running(false);

    if (interrupted) {
        if (selftest) {
            // Get the exception message. TODO: might be a hack.
            mp_obj_str_t *str = mp_obj_exception_get_value((mp_obj_t)nlr.ret_val);
            // If any of the self-tests fail log the exception message
            // and loop forever. Note: IDE exceptions will not be caught.
            __fatal_error((const char*) str->data);
        } else {
            mp_obj_print_exception(&mp_plat_print, (mp_obj_t)nlr.ret_val);
            if (nlr_push(&nlr) == 0) {
                flash_error(3);
                nlr_pop();
            }// If this gets interrupted again ignore it.
        }
    }

    if (selftest && f_res == FR_OK) {
        // Remove self tests script and flush cache
        f_unlink(&vfs_fat->fatfs, path);
		#if MICROPY_HW_HAS_FLASH
        storage_flush();
		#endif

        // Set flag for SWD debugger.
        // Note: main.py does not use the frame buffer.
		#ifndef OMV_MPY_ONLY
        MAIN_FB()->bpp = 0xDEAD;
		#endif
    }

    return f_res;
}
extern void ProfReset(void);
__WEAK int OverlaySwitch(uint8_t ovlyNdx) {return 0;}
__WEAK int OverlaySetToDefault(void) {return 0;}

#define SCnSCB_ACTLR_DISDEFWBUF_Pos         1U                                         /*!< ACTLR: DISDEFWBUF Position */
#define SCnSCB_ACTLR_DISDEFWBUF_Msk        (1UL << SCnSCB_ACTLR_DISDEFWBUF_Pos)        /*!< ACTLR: DISDEFWBUF Mask */
volatile uint8_t g_isMainDotPyRunning;
int OpenMV_Main(uint32_t first_soft_reset)
{
	int ret = 0;
	PRINTF("Enter OpenMV main\r\n");
	// SCnSCB->ACTLR |= SCnSCB_ACTLR_DISDEFWBUF_Msk;
/*    
	extint_init0();
    timer_init0();
    can_init0();
    rng_init0();
    i2c_init0();
    spi_init0();
    uart_init0();
    MP_STATE_PORT(pyb_stdio_uart) = NULL; // need to zero
    dac_init();
    pyb_usb_init0();
    sensor_init0();
*/
	#ifndef OMV_MPY_ONLY
	fb_alloc_init0();
	#endif
    file_buffer_init0();
    // py_lcd_init0();
    // far InfraRed sensor py_fir_init0();
//    servo_init();
#if MICROPY_HW_WIFIDBG_EN
	static openmv_config_t openmv_config;
	
	memset(&openmv_config, 0, sizeof(openmv_config));
#endif
    // Run boot script(s)
	if (!usbdbg_script_ready()) {
		if (first_soft_reset) {
			first_soft_reset = 0;
			exec_boot_script("/selftest.py", true, false);
		#if MICROPY_HW_WIFIDBG_EN
			const char *path_out;
			mp_vfs_mount_t *vfs = mp_vfs_lookup_path("openmv.config", &path_out);
			if (vfs != NULL){
				fs_user_mount_t *vfs_fat = MP_OBJ_TO_PTR(vfs->obj);
				// Parse config, and init wifi if enabled.
				ini_parse(&vfs_fat->fatfs, "openmv.config", ini_handler_callback, &openmv_config);
			}
			else
			{
				openmv_config.wifidbg = true;
				strcpy(openmv_config.wifidbg_config.client_ssid , "mi_t");
				strcpy(openmv_config.wifidbg_config.client_key, "1234567890");
				//strcpy(openmv_config.wifidbg_config.client_ssid , "MICR_WIFI");
				//strcpy(openmv_config.wifidbg_config.client_key, "52062561");
				openmv_config.wifidbg_config.mode = 0;
				openmv_config.wifidbg_config.client_security = 0;
				strcpy(openmv_config.wifidbg_config.board_name, "openmv_rt");	
			}
		#else
			apply_settings("/openmv.config");
		#endif
			usbdbg_set_irq_enabled(true);
			// rocky: pyb's main uses different method to access file system from omv
			mp_import_stat_t stat = mp_import_stat("main.py");
			if (stat == MP_IMPORT_STAT_FILE) {
				nlr_buf_t nlr;
				if (nlr_push(&nlr) == 0) {
                    g_isMainDotPyRunning = 1;
					int ret = pyexec_file("main.py");
                    g_isMainDotPyRunning = 0;
					if (ret & PYEXEC_FORCED_EXIT) {
						ret = 1;
					}
					if (!ret) {
						flash_error(3);
					}
					nlr_pop();
				}
				else {
                    g_isMainDotPyRunning = 0;
                    #if 0
					// 2019.03.27 19:52 rocky: if main.py is interrupted by running another script, 
					// we have to do soft reset, otherwise fb alloc logic may fail and led to hard fault
					// In this case, it makes user have to press start button twice to start the script in OpenMV IDE
					goto cleanup;
                    #else
                    fb_free_all();
                    #endif                    
				}
			}
			// exec_boot_script("/sd/main.py", false, true);
			#if (MICROPY_HW_WIFIDBG_EN==1) && defined(MICROPY_PY_RTTHREAD)
			if(openmv_config.wifidbg == true)
			{
				rtt_wifidbg_start(&openmv_config.wifidbg_config);
			}		
			#endif
		}
	}
	
    // If there's no script ready, just re-exec REPL
RunREPL:
    while (!usbdbg_script_ready()) {
        nlr_buf_t nlr;

        if (nlr_push(&nlr) == 0) {
			#ifdef MICROPY_PY_RTTHREAD
				rtt_main_thread_enable_sig(1);
			#endif
            // enable IDE interrupt
            usbdbg_set_irq_enabled(true);

            // run REPL
            if (pyexec_mode_kind == PYEXEC_MODE_RAW_REPL) {
                if (pyexec_raw_repl() != 0) {
                    break;
                }
            } else {
                if (pyexec_friendly_repl() != 0) {
					ret = 1;
                    break;
                }
            }

            nlr_pop();
        }
    }
	
	#ifdef MICROPY_PY_RTTHREAD
		rtt_main_thread_enable_sig(0);
	#endif
    if (usbdbg_script_ready()) {
        nlr_buf_t nlr;
		PRINTF("script ready!\r\n");
        // execute the script
        if (nlr_push(&nlr) == 0) {
			#ifdef MICROPY_PY_RTTHREAD
				rtt_main_thread_enable_sig(1);
			#endif
			// rocky: 2019.03.27 19:00 reset fb alloc memory for new script
			#ifndef OMV_MPY_ONLY
			fb_alloc_init0();
			#endif
#if 0
			vstr_t *buf = usbdbg_get_script();
			mp_obj_t code = pyexec_compile_str(buf);	
            // enable IDE interrupt
            usbdbg_set_irq_enabled(true);
            pyexec_exec_code(code);
#else
			usbdbg_set_irq_enabled(true);
			pyexec_str(usbdbg_get_script());
#endif
            nlr_pop();
        } else {
            mp_obj_print_exception(&mp_plat_print, (mp_obj_t)nlr.ret_val);
            usbdbg_stop_script();
            goto RunREPL;   // rocky: script is stopped, waiting for next script
        }
		
		#ifdef MICROPY_PY_RTTHREAD
			rtt_main_thread_enable_sig(0);
		#endif
    }
cleanup:
	usbdbg_set_irq_enabled(true);
    // Disable all other IRQs except Systick and Flash IRQs
    // Note: FS IRQ is disable, since we're going for a soft-reset.
    // __set_BASEPRI(IRQ_PRI_FLASH + 1);

    // soft reset
//    storage_flush();
//    timer_deinit();
//    uart_deinit();
//    can_deinit();
	ProfReset();
	return ret;
}
