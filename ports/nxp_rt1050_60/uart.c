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
#include <stdarg.h>
#include "fsl_common.h"
#include "fsl_debug_console.h"
#include "fsl_clock.h"
#include "fsl_lpuart.h"

#include "py/nlr.h"
#include "py/runtime.h"
#include "py/stream.h"
#include "py/mperrno.h"
#include "py/mphal.h"

#include "uart.h"
#include "irq.h"
#include "genhdr/pins.h"

#include "lib/utils/interrupt_char.h"
#include "pendsv.h"

/// \moduleref pyb
/// \class UART - duplex serial communication bus
///
/// UART implements the standard UART/LPUART duplex serial communications protocol.  At
/// the physical level it consists of 2 lines: RX and TX.  The unit of communication
/// is a character (not to be confused with a string character) which can be 8 or 9
/// bits wide.
///
/// UART objects can be created and initialised using:
///
///     from pyb import UART
///
///     uart = UART(1, 9600)                         # init with given baudrate
///     uart.init(9600, bits=8, parity=None, stop=1) # init with given parameters
///
/// Bits can be 8 or 9.  Parity can be None, 0 (even) or 1 (odd).  Stop can be 1 or 2.
///
/// A UART object acts like a stream object and reading and writing is done
/// using the standard stream methods:
///
///     uart.read(10)       # read 10 characters, returns a bytes object
///     uart.read()         # read all available characters
///     uart.readline()     # read a line
///     uart.readinto(buf)  # read and store into the given buffer
///     uart.write('abc')   # write the 3 characters
///
/// Individual characters can be read/written using:
///
///     uart.readchar()     # read 1 character and returns it as an integer
///     uart.writechar(42)  # write 1 character
///
/// To check if there is anything to be read, use:
///
///     uart.any()               # returns True if any characters waiting
#define UART_CLKSRC_HZ	11059200
#define CHAR_WIDTH_8BIT (0)
#define CHAR_WIDTH_9BIT (1)
#define UART_CLOCK_SRC_SEL 0	// 0=PLLUSB1, 1=XTAL24M
typedef lpuart_handle_t UART_HandleTypeDef;
struct _pyb_uart_obj_t {
    mp_obj_base_t base;
	LPUART_Type *pDev;
	clock_ip_name_t clk_ip_name;
    IRQn_Type irqn;
    pyb_uart_t uart_id;
    bool is_enabled;
    byte char_width;                    // 0 for 7,8 bit chars, 1 for 9 bit chars
    uint16_t char_mask;                 // 0x7f for 7 bit, 0xff for 8 bit, 0x1ff for 9 bit
    uint16_t timeout;                   // timeout waiting for first char.
    uint16_t timeout_char;              // timeout waiting between chars. 
    // uint16_t read_buf_len;              // len in chars; buf can hold len-1 chars
    // volatile uint16_t read_buf_head;    // indexes first empty slot
    // uint16_t read_buf_tail;             // indexes first full slot (not full if equals head)
    
    lpuart_config_t config;
    // usart_handle_t uart;
    volatile uint16_t read_buf_head;    // indexes first empty slot
    uint16_t read_buf_tail;             // indexes first full slot (not full if equals head)	
    byte *read_buf;                     // byte or uint16_t, depending on char size
    uint16_t read_buf_len;
};

pyb_uart_obj_t *s_pUarts[10];


#define UART_TXFIFO_FILL_CNT(p)  ((p->WATER >> 8) & 0Xff)
#define UART_RXFIFO_FILL_CNT(p) 	((p->WATER >> 24) & 0Xff)
#define UART_TXFIFO_IS_NOT_FULL(p) (UART_RXFIFO_FILL_CNT(p) < LPUART_FIFO_CAP - 1)
#define UART_RXFIFO_IS_NOT_EMPTY(p) (UART_RXFIFO_FILL_CNT(p) != 0)

#define UART_RX_IRQ_EN(p) (p->CTRL |= (1 << 21))
#define UART_RX_IRQ_DIS(p) (p->CTRL &= ~(1 << 21))


STATIC mp_obj_t pyb_uart_deinit(mp_obj_t self_in);

uint32_t _GetUartClock(void) {
	const uint32_t constDiv = 6;

	if (CLOCK_GetMux(kCLOCK_UartMux) == 1)
		return 24*1024*1024;
	else
		return CLOCK_GetPllFreq(kCLOCK_PllUsb1) / constDiv;
}

uint32_t _ConfigUartClock(uint32_t clkSrcSel)
{
	CLOCK_SetDiv(kCLOCK_UartDiv, 1 - 1);	// to keep simple, do not use divider
	if (clkSrcSel != 0) {
		CLOCK_SetMux(kCLOCK_UartMux, 1);	// mux1 = XTAL24M
	} else {
		clock_usb_pll_config_t pllCfg;
		pllCfg.loopDivider = 0;	// 0=XTAL*20=480MHz , 1=*22
		CLOCK_InitUsb1Pll(&pllCfg);
		CLOCK_SetMux(kCLOCK_UartMux, 0);	// mux0 = PLLUSB1
	}
	return _GetUartClock();
} 


void uart_init0(void) {
    for (int i = 0; i < MP_ARRAY_SIZE(MP_STATE_PORT(pyb_uart_obj_all)); i++) {
        MP_STATE_PORT(pyb_uart_obj_all)[i] = NULL;
    }
	_ConfigUartClock(UART_CLOCK_SRC_SEL);
}

// unregister all interrupt sources
void uart_deinit(void) {
    for (int i = 0; i < MP_ARRAY_SIZE(MP_STATE_PORT(pyb_uart_obj_all)); i++) {
        pyb_uart_obj_t *uart_obj = MP_STATE_PORT(pyb_uart_obj_all)[i];
        if (uart_obj != NULL) {
            pyb_uart_deinit(uart_obj);
        }
    }
}

STATIC bool uart_exists(int uart_id) {
    if (uart_id > MP_ARRAY_SIZE(MP_STATE_PORT(pyb_uart_obj_all))) {
        // safeguard against pyb_uart_obj_all array being configured too small
        return false;
    }
    switch (uart_id) {
        #if defined(MICROPY_HW_UART0_TX) && defined(MICROPY_HW_UART0_RX)
        case PYB_UART_0: return true;
        #endif

        #if defined(MICROPY_HW_UART1_TX) && defined(MICROPY_HW_UART1_RX)
        case PYB_UART_1: return true;
        #endif

        #if defined(MICROPY_HW_UART2_TX) && defined(MICROPY_HW_UART2_RX)
        case PYB_UART_2: return true;
        #endif

        #if defined(MICROPY_HW_UART3_TX) && defined(MICROPY_HW_UART3_RX)
        case PYB_UART_3: return true;
        #endif

        #if defined(MICROPY_HW_UART4_TX) && defined(MICROPY_HW_UART4_RX)
        case PYB_UART_4: return true;
        #endif

        #if defined(MICROPY_HW_UART5_TX) && defined(MICROPY_HW_UART5_RX)
        case PYB_UART_5: return true;
        #endif

        #if defined(MICROPY_HW_UART6_TX) && defined(MICROPY_HW_UART6_RX)
        case PYB_UART_6: return true;
        #endif

        #if defined(MICROPY_HW_UART7_TX) && defined(MICROPY_HW_UART7_RX)
        case PYB_UART_7: return true;
        #endif

        #if defined(MICROPY_HW_UART8_TX) && defined(MICROPY_HW_UART8_RX)
        case PYB_UART_8: return true;
        #endif
		
        #if defined(MICROPY_HW_UART9_TX) && defined(MICROPY_HW_UART9_RX)
        case PYB_UART_9: return true;
        #endif

        default: return false;
    }
}
#define UART_PIN_TXD	0
#define UART_PIN_RXD	1
#define UART_INIT_HLP(n) \
case PYB_UART_##n: \
	UARTx = LPUART##n; \
	irqn = LPUART##n##_IRQn; \
	clk_ip_name = kCLOCK_Lpuart##n; \
	pins[UART_PIN_TXD] = &MICROPY_HW_UART##n##_TX; \
	pins[UART_PIN_RXD] = &MICROPY_HW_UART##n##_RX; \
	break;

// assumes Init parameters have been set up correctly
STATIC bool uart_init2(pyb_uart_obj_t *uart_obj) {
    LPUART_Type *UARTx;
    IRQn_Type irqn;
	clock_ip_name_t clk_ip_name;
	
    const pin_obj_t *pins[2]; // pins[0]: TX ; pins[1]: RX
    switch (uart_obj->uart_id) {
        #if defined(MICROPY_HW_UART0_TX) && defined(MICROPY_HW_UART0_RX)
		UART_INIT_HLP(0);
        #endif
		
        #if defined(MICROPY_HW_UART1_TX) && defined(MICROPY_HW_UART1_RX)
		UART_INIT_HLP(1);
        #endif

        #if defined(MICROPY_HW_UART2_TX) && defined(MICROPY_HW_UART2_RX)
		UART_INIT_HLP(2);
        #endif
		
        #if defined(MICROPY_HW_UART3_TX) && defined(MICROPY_HW_UART3_RX)
		UART_INIT_HLP(3);
        #endif

        #if defined(MICROPY_HW_UART4_TX) && defined(MICROPY_HW_UART4_RX)
		UART_INIT_HLP(4);
        #endif
		
        #if defined(MICROPY_HW_UART5_TX) && defined(MICROPY_HW_UART5_RX)
		UART_INIT_HLP(5);
        #endif

        #if defined(MICROPY_HW_UART6_TX) && defined(MICROPY_HW_UART6_RX)
		UART_INIT_HLP(6);
        #endif
		
        #if defined(MICROPY_HW_UART7_TX) && defined(MICROPY_HW_UART7_RX)
		UART_INIT_HLP(7);
        #endif

        #if defined(MICROPY_HW_UART8_TX) && defined(MICROPY_HW_UART8_RX)
		UART_INIT_HLP(8);
        #endif
		
        #if defined(MICROPY_HW_UART9_TX) && defined(MICROPY_HW_UART9_RX)
		UART_INIT_HLP(9);
        #endif
        default:
            // UART does not exist or is not configured for this board
            return false;
    }
	mp_hal_pin_config_alt(pins[UART_PIN_TXD], GPIO_MODE_OUTPUT_PP, AF_FN_LPUART);
	mp_hal_pin_config_alt(pins[UART_PIN_RXD], GPIO_MODE_INPUT_PUP_WEAK, AF_FN_LPUART);
    uart_obj->irqn = irqn , uart_obj->pDev = UARTx;
	uart_obj->is_enabled = 1 , uart_obj->clk_ip_name = clk_ip_name , uart_obj->is_enabled = true;
    return true;
}

/* obsolete and unused
bool uart_init(pyb_uart_obj_t *uart_obj, uint32_t baudrate) {
    UART_HandleTypeDef *uh = &uart_obj->uart;
    memset(uh, 0, sizeof(*uh));
    uh->Init.BaudRate = baudrate;
    uh->Init.WordLength = UART_WORDLENGTH_8B;
    uh->Init.StopBits = UART_STOPBITS_1;
    uh->Init.Parity = UART_PARITY_NONE;
    uh->Init.Mode = UART_MODE_TX_RX;
    uh->Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uh->Init.OverSampling = UART_OVERSAMPLING_16;
    return uart_init2(uart_obj);
}
*/

mp_uint_t uart_rx_any(pyb_uart_obj_t *self) {
	
    int buffer_bytes = self->read_buf_head - self->read_buf_tail;
    if (buffer_bytes < 0) {
        return buffer_bytes + self->read_buf_len;
    } else if (buffer_bytes > 0) {
        return buffer_bytes;
    } else {
        return UART_RXFIFO_FILL_CNT(self->pDev);
    }
}

// Waits at most timeout milliseconds for at least 1 char to become ready for
// reading (from buf or for direct reading).
// Returns true if something available, false if not.
STATIC bool uart_rx_wait(pyb_uart_obj_t *self, uint32_t timeout) {
    uint32_t start = HAL_GetTick();
    for (;;) {
        if (self->read_buf_tail != self->read_buf_head || UART_RXFIFO_FILL_CNT(self->pDev)) {
            return true; // have at least 1 char ready for reading
        }
        if (HAL_GetTick() - start >= timeout) {
            return false; // timeout
        }
        MICROPY_EVENT_POLL_HOOK
    }
}

// assumes there is a character available
int uart_rx_char(pyb_uart_obj_t *self) {
    if (self->read_buf_tail != self->read_buf_head) {
        // buffering via IRQ
        int data;
        if (self->char_width == CHAR_WIDTH_9BIT) {
            data = ((uint16_t*)self->read_buf)[self->read_buf_tail];
        } else {
            data = self->read_buf[self->read_buf_tail];
        }
        self->read_buf_tail = (self->read_buf_tail + 1) % self->read_buf_len;
        if (UART_RXFIFO_FILL_CNT(self->pDev)) {
            // UART was stalled by flow ctrl: re-enable IRQ now we have room in buffer
            UART_RX_IRQ_EN(self->pDev);
        }
        return data;
    } else {
        // no buffering
        return LPUART_ReadByte(self->pDev);  
	}
}

// Waits at most timeout milliseconds for TX register to become empty.
// Returns true if can write, false if can't.
STATIC bool uart_tx_wait(pyb_uart_obj_t *self, uint32_t timeout) {
    uint32_t start = HAL_GetTick();
    for (;;) {
        if (UART_TXFIFO_IS_NOT_FULL(self->pDev)) {
            return true; // tx register is empty
        }
        if (HAL_GetTick() - start >= timeout) {
            return false; // timeout
        }
        MICROPY_EVENT_POLL_HOOK
    }
}

#define __HAL_UART_GET_FLAG(p, flag) (LPUART_GetStatusFlags(p) & flag)

// Waits at most timeout milliseconds for UART flag to be set.
// Returns true if flag is/was set, false on timeout.
STATIC bool uart_wait_flag_set(pyb_uart_obj_t *self, uint32_t flag, uint32_t timeout) {
    // Note: we don't use WFI to idle in this loop because UART tx doesn't generate
    // an interrupt and the flag can be set quickly if the baudrate is large.
    uint32_t start = HAL_GetTick();
    for (;;) {
        if (__HAL_UART_GET_FLAG(self->pDev, flag)) {
            return true;
        }
        if (timeout == 0 || HAL_GetTick() - start >= timeout) {
            return false; // timeout
        }
    }
}

static bool uart_wait_for_idle(pyb_uart_obj_t *self, uint32_t timeout)
{
	uint32_t start = HAL_GetTick();
	//self->pDev->FIFO &= 1<14;
	while (1) {
		if (UART_RXFIFO_FILL_CNT(self->pDev) == 0)	// bug warning: this only guarantee FIFO is empty, but shiftreg may stil working!
			return true;
        if (timeout == 0 || HAL_GetTick() - start >= timeout) {
            return false; // timeout
        }

	}
}

// src - a pointer to the data to send (16-bit aligned for 9-bit chars)
// num_chars - number of characters to send (9-bit chars count for 2 bytes from src)
// *errcode - returns 0 for success, MP_Exxx on error
// returns the number of characters sent (valid even if there was an error)
STATIC size_t uart_tx_data(pyb_uart_obj_t *self, const void *src_in, size_t num_chars, int *errcode) {
    if (num_chars == 0) {
        *errcode = 0;
        return 0;
    }

    uint32_t timeout;
    if (0) // (self->uart.Init.HwFlowCtl & UART_HWCONTROL_CTS) 
	{
        // CTS can hold off transmission for an arbitrarily long time. Apply
        // the overall timeout rather than the character timeout.
        timeout = self->timeout;
    } else {
        // The timeout specified here is for waiting for the TX data register to
        // become empty (ie between chars), as well as for the final char to be
        // completely transferred.  The default value for timeout_char is long
        // enough for 1 char, but we need to double it to wait for the last char
        // to be transferred to the data register, and then to be transmitted.
        timeout = 2 * self->timeout_char;
    }

    const uint8_t *src = (const uint8_t*)src_in;
    size_t num_tx = 0;

    while (num_tx < num_chars) {
		while (!(self->pDev->STAT & (1<<23))) {}
        uint32_t data;
        if (self->char_width == CHAR_WIDTH_9BIT) {
            data = *((uint16_t*)src) & 0x1ff;
            src += 2;
        } else {
            data = *src++;
        }
		self->pDev->DATA = data;
        ++num_tx;
    }
    // wait for the UART frame to complete
    if (!uart_wait_for_idle(self,timeout)) {
        *errcode = MP_ETIMEDOUT;
        return num_tx;
    }

    *errcode = 0;
    return num_tx;
}

STATIC void uart_tx_char(pyb_uart_obj_t *uart_obj, int c) {
    uint16_t ch = c;
    int errcode;
    uart_tx_data(uart_obj, &ch, 1, &errcode);
}

void uart_tx_strn(pyb_uart_obj_t *uart_obj, const char *str, uint len) {
    int errcode;
    uart_tx_data(uart_obj, str, len, &errcode);
}

void uart_tx_strn_cooked(pyb_uart_obj_t *uart_obj, const char *str, uint len) {
    for (const char *top = str + len; str < top; str++) {
        if (*str == '\n') {
            uart_tx_char(uart_obj, '\r');
        }
        uart_tx_char(uart_obj, *str);
    }
}

// this IRQ handler is set up to handle RXNE interrupts only
void uart_irq_handler(void *base, void* pCtx) {
    // get the uart object
    pyb_uart_obj_t *self = (pyb_uart_obj_t*)pCtx;
	LPUART_Type *pDev = (LPUART_Type*) base;
    if (self == NULL) {
        // UART object has not been set, so we can't do anything, not
        // even disable the IRQ.  This should never happen.
        return;
    }
	uint8_t rxCnt = (pDev->WATER >> 24) & 7;
	int data;
	// clear all possible error flags
	LPUART_ClearStatusFlags(pDev,
		kLPUART_RxOverrunFlag | kLPUART_NoiseErrorFlag | kLPUART_FramingErrorFlag | kLPUART_ParityErrorFlag);
	while (rxCnt--) {
		data = LPUART_ReadByte(pDev);
		#ifdef repl_uart_id
		if (self->uart_id == repl_uart_id && mp_interrupt_char != -1 && data == mp_interrupt_char) {
			pendsv_kbd_intr();
			// return;
		}
		#endif
		if (self->read_buf_len != 0) {
			uint16_t next_head = (self->read_buf_head + 1) % self->read_buf_len;
			if (next_head != self->read_buf_tail) {
				if (self->char_width == CHAR_WIDTH_9BIT) {
					((uint16_t*)self->read_buf)[self->read_buf_head] = data;
				} else {
					self->read_buf[self->read_buf_head] = data;
				}
				self->read_buf_head = next_head;
			} else { // No room: leave char in buf, disable interrupt
				UART_RX_IRQ_DIS(self->pDev);
			}
		}

	}
}

#define LPUART_IRQHANDLER_ENTRY(n) \
void LPUART##n##_IRQHandler(void) { \
	uart_irq_handler(LPUART##n, s_pUarts[n]); \
}

LPUART_IRQHANDLER_ENTRY(1)
LPUART_IRQHANDLER_ENTRY(2)
LPUART_IRQHANDLER_ENTRY(3)
LPUART_IRQHANDLER_ENTRY(4)
LPUART_IRQHANDLER_ENTRY(5)
LPUART_IRQHANDLER_ENTRY(6)
LPUART_IRQHANDLER_ENTRY(7)
LPUART_IRQHANDLER_ENTRY(8)

/******************************************************************************/
/* Micro Python bindings                                                      */

STATIC void pyb_uart_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    pyb_uart_obj_t *self = self_in;
    if (!self->is_enabled) {
        mp_printf(print, "UART(%u)", self->uart_id);
    } else {
        mp_int_t bits = (self->config.dataBitsCount == kLPUART_SevenDataBits ? 7 : 8);

        mp_printf(print, "UART(%u, baudrate=%u, bits=%u, parity=",
            self->uart_id, self->config.baudRate_Bps, bits);
        if (self->config.parityMode == kLPUART_ParityDisabled) {
            mp_print_str(print, "None");
        } else if (self->config.parityMode == kLPUART_ParityEven)  {
            mp_print_str(print, "Even");
        } else
			mp_print_str(print, "Odd");
		/*
		if (self->Init.HwFlowCtl) {
            mp_printf(print, ", flow=");
            if (self->Init.HwFlowCtl & UART_HWCONTROL_RTS) {
                mp_printf(print, "RTS%s", self->Init.HwFlowCtl & UART_HWCONTROL_CTS ? "|" : "");
            }
            if (self->Init.HwFlowCtl & UART_HWCONTROL_CTS) {
                mp_printf(print, "CTS");
            }
        }
        */
        mp_printf(print, ", stop=%u, timeout=%u, timeout_char=%u, read_buf_len=%u)",
            self->config.stopBitCount == kLPUART_OneStopBit ? 1 : 2,
            self->timeout, self->timeout_char,
            self->read_buf_len == 0 ? 0 : self->read_buf_len - 1); // -1 to adjust for usable length of buffer
    }
}

/// \method init(baudrate, bits=8, parity=None, stop=1, *, timeout=1000, timeout_char=0, flow=0, read_buf_len=64)
///
/// Initialise the UART bus with the given parameters:
///
///   - `baudrate` is the clock rate.
///   - `bits` is the number of bits per byte, 7, 8 or 9.
///   - `parity` is the parity, `None`, 0 (even) or 1 (odd).
///   - `stop` is the number of stop bits, 1 or 2.
///   - `timeout` is the timeout in milliseconds to wait for the first character.
///   - `timeout_char` is the timeout in milliseconds to wait between characters.
///   - `flow` is RTS | CTS where RTS == 256, CTS == 512
///   - `read_buf_len` is the character length of the read buffer (0 to disable).

typedef struct _uart_init_helper_param{
        mp_arg_val_t baudrate, bits, parity, stop, flow, timeout, timeout_char, read_buf_len;
} uart_init_helper_param_t;


STATIC mp_obj_t pyb_uart_init_helper(pyb_uart_obj_t *self, mp_uint_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_baudrate, MP_ARG_REQUIRED | MP_ARG_INT, {.u_int = 9600} },
        { MP_QSTR_bits, MP_ARG_INT, {.u_int = 8} },
        { MP_QSTR_parity, MP_ARG_OBJ, {.u_obj = mp_const_none} },
        { MP_QSTR_stop, MP_ARG_INT, {.u_int = 1} },
        { MP_QSTR_flow, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 0} },
        { MP_QSTR_timeout, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 1000} },
        { MP_QSTR_timeout_char, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 0} },
        { MP_QSTR_read_buf_len, MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = 64} },
    };

    // parse args
    uart_init_helper_param_t args;
    mp_arg_parse_all(n_args, pos_args, kw_args,
        MP_ARRAY_SIZE(allowed_args), allowed_args, (mp_arg_val_t*)&args);

    // set the UART configuration values
    lpuart_config_t *init = &self->config;

    // baudrate
    LPUART_GetDefaultConfig(init);
    init->baudRate_Bps = args.baudrate.u_int;
	  init->enableRx = init->enableTx = true;

    // parity
    mp_int_t bits = args.bits.u_int;
    if (args.parity.u_obj == mp_const_none) {
        init->parityMode = kLPUART_ParityDisabled;
    } else {
        mp_int_t parity = mp_obj_get_int(args.parity.u_obj);
        init->parityMode = (parity & 1) ? kLPUART_ParityOdd : kLPUART_ParityEven;
        // bits += 1; // STs convention has bits including parity
    }

    // number of bits
    if (bits == 7) {
        init->dataBitsCount = kLPUART_SevenDataBits;
    } else if (bits == 8) {
        init->dataBitsCount = kLPUART_EightDataBits;
    } else {
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "unsupported combination of bits and parity"));
    }

    // stop bits
    switch (args.stop.u_int) {
        case 1: init->stopBitCount = kLPUART_OneStopBit; break;
        default: init->stopBitCount = kLPUART_TwoStopBit; break;
    }

	// >>> not supported in current SDK
    // // flow control
    // init->HwFlowCtl = args.flow.u_int;

    // extra config (not yet configurable)
    // init->Mode = UART_MODE_TX_RX;
    // init->OverSampling = UART_OVERSAMPLING_16;
	// <<<
	
    // init UART (if it fails, it's because the port doesn't exist)
    if (!uart_init2(self)) {
        nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "UART(%d) does not exist", self->uart_id));
    }
	s_pUarts[self->uart_id] = self;
    // set timeout
    self->timeout = args.timeout.u_int;

    // set timeout_char
    // make sure it is at least as long as a whole character (13 bits to be safe)
    // minimum value is 2ms because sys-tick has a resolution of only 1ms
    self->timeout_char = args.timeout_char.u_int;
    uint32_t min_timeout_char = 13000 / init->baudRate_Bps + 2;
    if (self->timeout_char < min_timeout_char) {
        self->timeout_char = min_timeout_char;
    }

    // setup the read buffer
    
    if (init->dataBitsCount == kLPUART_SevenDataBits) {
        self->char_mask = 0x7F;
        self->char_width = 0;
    } else {
        if (init->dataBitsCount == kLPUART_EightDataBits) {
			self->char_mask = 0xFF;
			self->char_width = 0;
        }
    }

	m_del(byte, self->read_buf, self->read_buf_len << self->char_width);
    self->read_buf_head = 0;
    self->read_buf_tail = 0;	
    if (args.read_buf_len.u_int <= 0) {
        // no read buffer, blocking mode
        self->read_buf_len = 0;
        self->read_buf = NULL;
        NVIC_DisableIRQ(self->irqn);
		LPUART_DisableInterrupts(self->pDev, (uint32_t)-1L);
    } else {
		if (args.read_buf_len.u_int < 8)
			self->read_buf_len = 8;
		else
			self->read_buf_len = args.read_buf_len.u_int;
        self->read_buf = m_new(byte, self->read_buf_len << self->char_width);
		uint32_t clk = _GetUartClock();
		status_t ret = LPUART_Init(self->pDev, &self->config, clk);
		if (ret != kStatus_Success) {
			nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "set baudrate %d is not possible", args.baudrate.u_int));
		}
        HAL_NVIC_SetPriority(self->irqn, IRQ_PRI_UART, IRQ_SUBPRI_UART); 
		    UART_RX_IRQ_EN(self->pDev);
        NVIC_EnableIRQ(self->irqn);
    }

    return mp_const_none;
}

/// \classmethod \constructor(bus, ...)
///
/// Construct a UART object on the given bus.  `bus` can be 0-9
/// With no additional parameters, the UART object is created but not
/// initialised (it has the settings from the last initialisation of
/// the bus, if any).  If extra arguments are given, the bus is initialised.
/// See `init` for parameters of initialisation.
///
/// The physical pins of the UART busses are:
///
///   - `UART(4)` is on `XA`: `(TX, RX) = (X1, X2) = (PA0, PA1)`
///   - `UART(1)` is on `XB`: `(TX, RX) = (X9, X10) = (PB6, PB7)`
///   - `UART(6)` is on `YA`: `(TX, RX) = (Y1, Y2) = (PC6, PC7)`
///   - `UART(3)` is on `YB`: `(TX, RX) = (Y9, Y10) = (PB10, PB11)`
///   - `UART(2)` is on: `(TX, RX) = (X3, X4) = (PA2, PA3)`
STATIC mp_obj_t pyb_uart_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check arguments
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);

    // work out port
    int uart_id = 0;
    if (MP_OBJ_IS_STR(args[0])) {
        const char *port = mp_obj_str_get_str(args[0]);
		
        if (0)	// use this trick to use same "else if"
	    {

		#ifdef MICROPY_HW_UART_REPL_NAME
        } else if (strcmp(port, MICROPY_HW_UART_REPL_NAME) == 0) {
            uart_id = PYB_UART_0;
        #endif
        #ifdef MICROPY_HW_UART1_NAME
        } else if (strcmp(port, MICROPY_HW_UART1_NAME) == 0) {
            uart_id = PYB_UART_1;
        #endif		
        #ifdef MICROPY_HW_UART2_NAME
        } else if (strcmp(port, MICROPY_HW_UART2_NAME) == 0) {
            uart_id = PYB_UART_2;
        #endif
		#ifdef MICROPY_HW_UART3_NAME
		} else if (strcmp(port, MICROPY_HW_UART3_NAME) == 0) {
			uart_id = PYB_UART_3;
		#endif
        #ifdef MICROPY_HW_UART4_NAME
        } else if (strcmp(port, MICROPY_HW_UART4_NAME) == 0) {
            uart_id = PYB_UART_4;
        #endif
        #ifdef MICROPY_HW_UART5_NAME
        } else if (strcmp(port, MICROPY_HW_UART5_NAME) == 0) {
            uart_id = PYB_UART_5;
        #endif
        #ifdef MICROPY_HW_UART6_NAME
        } else if (strcmp(port, MICROPY_HW_UART6_NAME) == 0) {
            uart_id = PYB_UART_6;
        #endif
        #ifdef MICROPY_HW_UART7_NAME
        } else if (strcmp(port, MICROPY_HW_UART7_NAME) == 0) {
            uart_id = PYB_UART_7;
        #endif		
		#ifdef MICROPY_HW_UART8_NAME
		} else if (strcmp(port, MICROPY_HW_UART8_NAME) == 0) {
			uart_id = PYB_UART_8;
		#endif
		#ifdef MICROPY_HW_UART9_NAME
		} else if (strcmp(port, MICROPY_HW_UART9_NAME) == 0) {
			uart_id = PYB_UART_9;
		#endif
        } else {
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "UART(%s) does not exist", port));
        }
    } else {
        uart_id = mp_obj_get_int(args[0]);
        if (!uart_exists(uart_id)) {
            nlr_raise(mp_obj_new_exception_msg_varg(&mp_type_ValueError, "UART(%d) does not exist", uart_id));
        }
    }

    pyb_uart_obj_t *self;
    if (MP_STATE_PORT(pyb_uart_obj_all)[uart_id] == NULL) {
        // create new UART object
        self = m_new0(pyb_uart_obj_t, 1);
        self->base.type = &pyb_uart_type;
        self->uart_id = uart_id;
        MP_STATE_PORT(pyb_uart_obj_all)[uart_id] = self;
    } else {
        // reference existing UART object
        self = MP_STATE_PORT(pyb_uart_obj_all)[uart_id];
    }

    if (n_args > 1 || n_kw > 0) {
        // start the peripheral
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        pyb_uart_init_helper(self, n_args - 1, args + 1, &kw_args);
    }

    return self;
}

STATIC mp_obj_t pyb_uart_init(mp_uint_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    return pyb_uart_init_helper(args[0], n_args - 1, args + 1, kw_args);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(pyb_uart_init_obj, 1, pyb_uart_init);

/// \method deinit()
/// Turn off the UART bus.
STATIC mp_obj_t pyb_uart_deinit(mp_obj_t self_in) {
    pyb_uart_obj_t *self = self_in;
    self->is_enabled = false;
	LPUART_Deinit(self->pDev);
	NVIC_DisableIRQ(self->irqn);
	CLOCK_DisableClock(self->clk_ip_name);
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_uart_deinit_obj, pyb_uart_deinit);

/// \method any()
/// Return `True` if any characters waiting, else `False`.
STATIC mp_obj_t pyb_uart_any(mp_obj_t self_in) {
    pyb_uart_obj_t *self = self_in;
    return MP_OBJ_NEW_SMALL_INT(uart_rx_any(self));
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_uart_any_obj, pyb_uart_any);

/// \method writechar(char)
/// Write a single character on the bus.  `char` is an integer to write.
/// Return value: `None`.
STATIC mp_obj_t pyb_uart_writechar(mp_obj_t self_in, mp_obj_t char_in) {
    pyb_uart_obj_t *self = self_in;

    // get the character to write (might be 9 bits)
    uint16_t data = mp_obj_get_int(char_in);

    // write the character
    int errcode;
    if (uart_tx_wait(self, self->timeout)) {
        uart_tx_data(self, &data, 1, &errcode);
    } else {
        errcode = MP_ETIMEDOUT;
    }

    if (errcode != 0) {
        mp_raise_OSError(errcode);
    }

    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_2(pyb_uart_writechar_obj, pyb_uart_writechar);

/// \method readchar()
/// Receive a single character on the bus.
/// Return value: The character read, as an integer.  Returns -1 on timeout.
STATIC mp_obj_t pyb_uart_readchar(mp_obj_t self_in) {
    pyb_uart_obj_t *self = self_in;
    if (uart_rx_wait(self, self->timeout)) {
        return MP_OBJ_NEW_SMALL_INT(uart_rx_char(self));
    } else {
        // return -1 on timeout
        return MP_OBJ_NEW_SMALL_INT(-1);
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_uart_readchar_obj, pyb_uart_readchar);

// uart.sendbreak()
STATIC mp_obj_t pyb_uart_sendbreak(mp_obj_t self_in) {
    pyb_uart_obj_t *self = self_in;
	self = self;
    return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(pyb_uart_sendbreak_obj, pyb_uart_sendbreak);

STATIC const mp_rom_map_elem_t pyb_uart_locals_dict_table[] = {
    // instance methods

    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&pyb_uart_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&pyb_uart_deinit_obj) },
    { MP_ROM_QSTR(MP_QSTR_any), MP_ROM_PTR(&pyb_uart_any_obj) },

    /// \method read([nbytes])
    { MP_ROM_QSTR(MP_QSTR_read), MP_ROM_PTR(&mp_stream_read_obj) },
    /// \method readline()
    { MP_ROM_QSTR(MP_QSTR_readline), MP_ROM_PTR(&mp_stream_unbuffered_readline_obj)},
    /// \method readinto(buf[, nbytes])
    { MP_ROM_QSTR(MP_QSTR_readinto), MP_ROM_PTR(&mp_stream_readinto_obj) },
    /// \method write(buf)
    { MP_ROM_QSTR(MP_QSTR_write), MP_ROM_PTR(&mp_stream_write_obj) },

    { MP_ROM_QSTR(MP_QSTR_writechar), MP_ROM_PTR(&pyb_uart_writechar_obj) },
    { MP_ROM_QSTR(MP_QSTR_readchar), MP_ROM_PTR(&pyb_uart_readchar_obj) },
    { MP_ROM_QSTR(MP_QSTR_sendbreak), MP_ROM_PTR(&pyb_uart_sendbreak_obj) },

    // class constants
    // { MP_ROM_QSTR(MP_QSTR_RTS), MP_ROM_INT(UART_HWCONTROL_RTS) },
    // { MP_ROM_QSTR(MP_QSTR_CTS), MP_ROM_INT(UART_HWCONTROL_CTS) },
};

STATIC MP_DEFINE_CONST_DICT(pyb_uart_locals_dict, pyb_uart_locals_dict_table);

STATIC mp_uint_t pyb_uart_read(mp_obj_t self_in, void *buf_in, mp_uint_t size, int *errcode) {
    pyb_uart_obj_t *self = self_in;
    byte *buf = buf_in;

    // check that size is a multiple of character width
    if (size & self->char_width) {
        *errcode = MP_EIO;
        return MP_STREAM_ERROR;
    }

    // convert byte size to char size
    size >>= self->char_width;

    // make sure we want at least 1 char
    if (size == 0) {
        return 0;
    }

    // wait for first char to become available
    if (!uart_rx_wait(self, self->timeout)) {
        // return EAGAIN error to indicate non-blocking (then read() method returns None)
        *errcode = MP_EAGAIN;
        return MP_STREAM_ERROR;
    }

    // read the data
    byte *orig_buf = buf;
    for (;;) {
        int data = uart_rx_char(self);
        if (self->char_width == CHAR_WIDTH_9BIT) {
            *(uint16_t*)buf = data;
            buf += 2;
        } else {
            *buf++ = data;
        }
        if (--size == 0 || !uart_rx_wait(self, self->timeout_char)) {
            // return number of bytes read
            return buf - orig_buf;
        }
    }
}

STATIC mp_uint_t pyb_uart_write(mp_obj_t self_in, const void *buf_in, mp_uint_t size, int *errcode) {
    pyb_uart_obj_t *self = self_in;
    const byte *buf = buf_in;

    // check that size is a multiple of character width
    if (size & self->char_width) {
        *errcode = MP_EIO;
        return MP_STREAM_ERROR;
    }

    // wait to be able to write the first character. EAGAIN causes write to return None
    if (!uart_tx_wait(self, self->timeout)) {
        *errcode = MP_EAGAIN;
        return MP_STREAM_ERROR;
    }

    // write the data
    size_t num_tx = uart_tx_data(self, buf, size >> self->char_width, errcode);
    if (*errcode == 0 || *errcode == MP_ETIMEDOUT) {
        // return number of bytes written, even if there was a timeout
        return num_tx << self->char_width;
    } else {
        return MP_STREAM_ERROR;
    }
}

STATIC mp_uint_t pyb_uart_ioctl(mp_obj_t self_in, mp_uint_t request, mp_uint_t arg, int *errcode) {
    pyb_uart_obj_t *self = self_in;
    mp_uint_t ret;
    if (request == MP_STREAM_POLL) {
        mp_uint_t flags = arg;
        ret = 0;
        if ((flags & MP_STREAM_POLL_RD) && uart_rx_any(self)) {
            ret |= MP_STREAM_POLL_RD;
        }
        if ((flags & MP_STREAM_POLL_WR) && UART_TXFIFO_FILL_CNT(self->pDev) ) {
            ret |= MP_STREAM_POLL_WR;	// set whenever UART TXFIFO is not full
        }
    } else {
        *errcode = MP_EINVAL;
        ret = MP_STREAM_ERROR;
    }
    return ret;
}

STATIC const mp_stream_p_t uart_stream_p = {
    .read = pyb_uart_read,
    .write = pyb_uart_write,
    .ioctl = pyb_uart_ioctl,
    .is_text = false,
};

const mp_obj_type_t pyb_uart_type = {
    { &mp_type_type },
    .name = MP_QSTR_UART,
    .print = pyb_uart_print,
    .make_new = pyb_uart_make_new,
    .getiter = mp_identity_getiter,
    .iternext = mp_stream_unbuffered_iter,
    .protocol = &uart_stream_p,
    .locals_dict = (mp_obj_dict_t*)&pyb_uart_locals_dict,
};
