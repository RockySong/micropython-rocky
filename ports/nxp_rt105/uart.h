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
// UART config

#define MICROPY_HW_UART_REPL_NAME   "repl"
#define MICROPY_HW_UART0_RX     (pin_024)
#define MICROPY_HW_UART0_TX     (pin_025)

#define MICROPY_HW_UART2_NAME   "uart2"
#define MICROPY_HW_UART2_RX     (pin_026)
#define MICROPY_HW_UART2_TX     (pin_027)

#define MICROPY_HW_UART3_NAME   "uart3"
#define MICROPY_HW_UART3_RX    (pin_218)
#define MICROPY_HW_UART3_TX    (pin_219)

#define MICROPY_HW_UART4_NAME   "uart4"
#define MICROPY_HW_UART4_RX    (pin_326)
#define MICROPY_HW_UART4_TX    (pin_327)

#define MICROPY_HW_UART6_NAME   "uart6"
#define MICROPY_HW_UART6_RX    (pin_42)
#define MICROPY_HW_UART6_TX    (pin_43)

#define MICROPY_HW_UART8_NAME   "uart8"
#define MICROPY_HW_UART8_RX    (pin_117)
#define MICROPY_HW_UART8_TX    (pin_118)

#define MICROPY_HW_UART9_NAME   "uart9"
#define MICROPY_HW_UART9_RX    (pin_321)
#define MICROPY_HW_UART9_TX    (pin_322)

typedef enum {
	PYB_UART_0 = 0,
    PYB_UART_1 = 1,
    PYB_UART_2 = 2,
    PYB_UART_3 = 3,
    PYB_UART_4 = 4,
    PYB_UART_5 = 5,
    PYB_UART_6 = 6,
    PYB_UART_7 = 7,
    PYB_UART_8 = 8,
    PYB_UART_9 = 9,
    PYB_UART_NONE = 31, 
} pyb_uart_t;

typedef struct _pyb_uart_obj_t pyb_uart_obj_t;
extern const mp_obj_type_t pyb_uart_type;

void uart_init0(void);
void uart_deinit(void);
void uart_irq_handler(void *base, void* pCtx);

mp_uint_t uart_rx_any(pyb_uart_obj_t *uart_obj);
int uart_rx_char(pyb_uart_obj_t *uart_obj);
void uart_tx_strn(pyb_uart_obj_t *uart_obj, const char *str, uint len);
void uart_tx_strn_cooked(pyb_uart_obj_t *uart_obj, const char *str, uint len);
