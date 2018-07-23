#include <string.h>

#include "py/mpstate.h"
#include "py/runtime.h"
#include "py/mperrno.h"
#include "py/mphal.h"
#include "usb_app.h"
#include "uart.h"
#include "fsl_gpio.h"
#include "fsl_iomuxc.h"
#include "fsl_debug_console.h"
bool mp_hal_ticks_cpu_enabled = false;

// this table converts from HAL_StatusTypeDef to POSIX errno
const byte mp_hal_status_to_errno_table[4] = {
    [HAL_OK] = 0,
    [HAL_ERROR] = MP_EIO,
    [HAL_BUSY] = MP_EBUSY,
    [HAL_TIMEOUT] = MP_ETIMEDOUT,
};

NORETURN void mp_hal_raise(HAL_StatusTypeDef status) {
    mp_raise_OSError(mp_hal_status_to_errno_table[status]);
}

int mp_hal_stdin_rx_chr(void) {
	int c;
	for (;;) {
	#ifdef USE_HOST_MODE
		pyb_usb_host_process();
		int c = pyb_usb_host_get_keyboard();
		if (c != 0) {
			return c;
		}
	#endif
        if (usb_vcp_recv_byte((uint8_t*)&c) != 0) {
            return (uint8_t)(c & 0xFF);
        } else if (MP_STATE_PORT(pyb_stdio_uart) != NULL && uart_rx_any(MP_STATE_PORT(pyb_stdio_uart))) {
            return uart_rx_char(MP_STATE_PORT(pyb_stdio_uart));
        }
        MICROPY_EVENT_POLL_HOOK
    }
}

void mp_hal_stdout_tx_str(const char *str) {
    mp_hal_stdout_tx_strn(str, strlen(str));
}

void mp_hal_stdout_tx_strn(const char *str, size_t len) {
	if (MP_STATE_PORT(pyb_stdio_uart) != NULL) {
		uart_tx_strn(MP_STATE_PORT(pyb_stdio_uart), str, len);
	}
#if 0 && defined(USE_HOST_MODE) && MICROPY_HW_HAS_LCD
	lcd_print_strn(str, len);
#endif
	if (usb_vcp_is_enabled()) {
		// rocky: if send through VCP, on windows, MUST open the port,
		// otherwise, a buffer on windows will finally overrun, and host 
		// will no longer accept data from us!
		usb_vcp_send_strn(str, len);
	}

}

void mp_hal_stdout_tx_strn_cooked(const char *str, size_t len) {
    // send stdout to UART and USB CDC VCP
    if (MP_STATE_PORT(pyb_stdio_uart) != NULL) {
        uart_tx_strn_cooked(MP_STATE_PORT(pyb_stdio_uart), str, len);
    }
    if (usb_vcp_is_enabled()) {
		// rocky: if send through VCP, on windows, MUST open the port,
		// otherwise, a buffer on windows will finally overrun, and host 
		// will no longer accept data from us!		
        usb_vcp_send_strn_cooked(str, len);
    } else {

    }

}

void mp_hal_ticks_cpu_enable(void) {
    if (!mp_hal_ticks_cpu_enabled) {
        CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
        #if defined(__CORTEX_M) && __CORTEX_M == 7
        // on Cortex-M7 we must unlock the DWT before writing to its registers
        DWT->LAR = 0xc5acce55;
        #endif
        DWT->CYCCNT = 0;
        DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
        mp_hal_ticks_cpu_enabled = true;
    }
}

void mp_hal_gpio_clock_enable(uint32_t portNum) {
	 // i.MX RT's GPIO port starts from 1, and clock gate is not ordered in GPIO order
	const static clock_ip_name_t tab[] = {(clock_ip_name_t)0, kCLOCK_Gpio1, kCLOCK_Gpio2, kCLOCK_Gpio3, kCLOCK_Gpio4, kCLOCK_Gpio5};
	CLOCK_EnableClock(tab[portNum]); 

}

void mp_hal_pin_config(const pin_obj_t *p, const pin_af_obj_t *af, uint32_t alt, uint32_t padCfgVal ) {
	uint32_t isInputPathForcedOn = 0;
	padCfgVal &= ~(1UL<<31);	// clear MSb, as it is used to mark input/output for GPIO
	CLOCK_EnableClock(kCLOCK_Iomuxc);
	
	if (alt == PIN_ALT_NC) 
		alt = REG_READ32(p->afReg) & 7;
	isInputPathForcedOn =  (alt != 5);	// Alt 5 is GPIO
	IOMUXC_SetPinMux(p->afReg, alt, af->inSelReg, af->inSelVal, p->cfgReg, isInputPathForcedOn);
	IOMUXC_SetPinConfig(p->afReg,alt,af->inSelReg, af->inSelVal, p->cfgReg, padCfgVal);
}

bool mp_hal_pin_config_alt(mp_hal_pin_obj_t pin, uint32_t padCfg,  uint8_t fn) {
    const pin_af_obj_t *af = pin_find_af(pin, fn);
    if (af == NULL) {
        return false;
    }
	mp_hal_pin_config(pin, af, af->idx, padCfg);
    return true;
}

void mp_hal_ConfigGPIO(const pin_obj_t *p, uint32_t gpioMode, uint32_t isInitialHighForOutput)
{
	GPIO_Type *pGPIO = p->gpio;
	uint32_t pinMask = 1 << p->pin;
	mp_hal_gpio_clock_enable(p->port);
	pGPIO->IMR &= ~pinMask;	 // disable pin IRQ
	if (gpioMode & (1<<31)) {
		// output
		if (isInitialHighForOutput)
			pGPIO->DR |= pinMask;
		else
			pGPIO->DR &= ~pinMask;
		pGPIO->GDIR |= pinMask;
		
	} else {
		// input
		pGPIO->GDIR &= ~pinMask;
	}
	mp_hal_pin_config_alt(p, gpioMode, AF_FN_GPIO);
}


