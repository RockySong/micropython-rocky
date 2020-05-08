#ifndef _MPCONFIGBOARD_H_
#define _MPCONFIGBOARD_H_

#define MICROPY_HW_BOARD_NAME       "mimxrt1050-evk"
#define MICROPY_HW_MCU_NAME         "i.MX RT105x"
#define MICROPY_HW_UART_REPL    	(repl_uart_id)	// uart ID of REPL uart, must be the same as repl_uart_id in uart.h
#define MICROPY_HW_HAS_SWITCH       (1)
#ifndef EVK1050_60_HYPER
#define MICROPY_HW_HAS_FLASH        (1)
#else
#define MICROPY_HW_HAS_FLASH        (0)
#endif
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_CTMR      (0)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_CAN       (0)
#define MICROPY_MW_ENABLE_SWIM		(0)
#define MICROPY_HW_ENABLE_STORAGE   (1)
// XTAL is 12MHz
#if defined(BOARD_OMVRT1)
#define FLASH_CAP                   (4 * 1024 * 1024)
#elif defined(EVK1050_60_QSPI)
#define FLASH_CAP                   (8 * 1024 * 1024)
#endif

typedef enum _enum_rootPtrs
{
	rootptr_oledfb = 0,
}enum_rootPtrs;

// USB config
// #define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
// #define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// MMA accelerometer config
// #define MICROPY_HW_MMA_AVDD_PIN     (pin_B5)
#endif