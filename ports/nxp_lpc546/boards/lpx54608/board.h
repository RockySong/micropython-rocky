/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include "clock_config.h"
#include "fsl_common.h"
#include "fsl_gpio.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @brief The board name */
#define BOARD_NAME "LPCXPRESSO54608"

#define BOARD_EXTCLKINRATE (0)

/*! @brief The UART to use for debug messages. */
/* TODO: rename UART to USART */
#define BOARD_DEBUG_UART_TYPE DEBUG_CONSOLE_DEVICE_TYPE_FLEXCOMM
#define BOARD_DEBUG_UART_BASEADDR (uint32_t) USART0
#define BOARD_DEBUG_UART_CLK_FREQ CLOCK_GetFreq(kCLOCK_Flexcomm0)
#define BOARD_DEBUG_UART_CLK_ATTACH kFRO12M_to_FLEXCOMM0
#define BOARD_DEBUG_UART_RST kFC0_RST_SHIFT_RSTn
#define BOARD_DEBUG_UART_CLKSRC kCLOCK_Flexcomm0
#define BOARD_UART_IRQ_HANDLER FLEXCOMM0_IRQHandler
#define BOARD_UART_IRQ FLEXCOMM0_IRQn
/* TODO: obsolete */
#define BOARD_DEBUG_SPI_CLK_FREQ 12000000

#ifndef BOARD_DEBUG_UART_BAUDRATE
#define BOARD_DEBUG_UART_BAUDRATE 115200
#endif /* BOARD_DEBUG_UART_BAUDRATE */

#define BOARD_LED1_GPIO GPIO
#define BOARD_LED1_GPIO_PORT 3U
#define BOARD_LED1_GPIO_PIN 14U
#define BOARD_LED2_GPIO GPIO
#define BOARD_LED2_GPIO_PORT 3U
#define BOARD_LED2_GPIO_PIN 3U
#define BOARD_LED3_GPIO GPIO
#define BOARD_LED3_GPIO_PORT 2U
#define BOARD_LED3_GPIO_PIN 2U

#define BOARD_SW1_GPIO GPIO
#define BOARD_SW1_GPIO_PORT 0U
#define BOARD_SW1_GPIO_PIN 4U
#define BOARD_SW1_NAME "SW1"
#define BOARD_SW3_IRQ PIN_INT0_IRQn
#define BOARD_SW3_IRQ_HANDLER PIN_INT0_IRQHandler

#define BOARD_SW2_GPIO GPIO
#define BOARD_SW2_GPIO_PORT 0U
#define BOARD_SW2_GPIO_PIN 6U
#define BOARD_SW2_NAME "SW2"
#define BOARD_SW2_IRQ PIN_INT0_IRQn
#define BOARD_SW2_IRQ_HANDLER PIN_INT0_IRQHandler

#define BOARD_SW3_GPIO GPIO
#define BOARD_SW3_GPIO_PORT 0U
#define BOARD_SW3_GPIO_PIN 5U
#define BOARD_SW3_NAME "SW3"
#define BOARD_SW3_IRQ PIN_INT0_IRQn
#define BOARD_SW3_IRQ_HANDLER PIN_INT0_IRQHandler
#define BOARD_SW3_GPIO_PININT_INDEX 0

#define BOARD_SW4_GPIO GPIO
#define BOARD_SW4_GPIO_PORT 0U
#define BOARD_SW4_GPIO_PIN 4U
#define BOARD_SW4_NAME "SW4"
#define BOARD_SW4_IRQ PIN_INT0_IRQn
#define BOARD_SW4_IRQ_HANDLER PIN_INT0_IRQHandler
#define BOARD_SW4_GPIO_PININT_INDEX 0

#define BOARD_SW5_GPIO GPIO
#define BOARD_SW5_GPIO_PORT 1U
#define BOARD_SW5_GPIO_PIN 1U
#define BOARD_SW5_NAME "SW5"
#define BOARD_SW5_IRQ PIN_INT1_IRQn
#define BOARD_SW5_IRQ_HANDLER PIN_INT1_IRQHandler
#define BOARD_SW5_GPIO_PININT_INDEX 0


#define BOARD_SDIF_BASEADDR SDIF
#define BOARD_SDIF_CLKSRC kCLOCK_SDio
#define BOARD_SDIF_CLK_FREQ CLOCK_GetFreq(kCLOCK_SDio)
#define BOARD_SDIF_CLK_ATTACH kMCLK_to_SDIO_CLK
#define BOARD_SDIF_IRQ SDIO_IRQn

/* Board led color mapping */
#define LOGIC_LED_ON 0U
#define LOGIC_LED_OFF 1U

#define LED1_INIT(output)                                                    \
    GPIO_PinInit(BOARD_LED1_GPIO, BOARD_LED1_GPIO_PORT, BOARD_LED1_GPIO_PIN, \
                 &(gpio_pin_config_t){kGPIO_DigitalOutput, (output)}) /*!< Enable target LED1 */
#define LED1_ON() \
    GPIO_ClearPinsOutput(BOARD_LED1_GPIO, BOARD_LED1_GPIO_PORT, 1U << BOARD_LED1_GPIO_PIN) /*!< Turn on target LED1 */
#define LED1_OFF() \
    GPIO_SetPinsOutput(BOARD_LED1_GPIO, BOARD_LED1_GPIO_PORT, 1U << BOARD_LED1_GPIO_PIN) /*!< Turn off target LED1 */
#define LED1_TOGGLE()                                            \
    GPIO_TogglePinsOutput(BOARD_LED1_GPIO, BOARD_LED1_GPIO_PORT, \
                          1U << BOARD_LED1_GPIO_PIN) /*!< Toggle on target LED1 */
#define LED2_INIT(output)                                                    \
    GPIO_PinInit(BOARD_LED2_GPIO, BOARD_LED2_GPIO_PORT, BOARD_LED2_GPIO_PIN, \
                 &(gpio_pin_config_t){kGPIO_DigitalOutput, (output)}) /*!< Enable target LED2 */
#define LED2_ON() \
    GPIO_ClearPinsOutput(BOARD_LED2_GPIO, BOARD_LED2_GPIO_PORT, 1U << BOARD_LED2_GPIO_PIN) /*!< Turn on target LED2 */
#define LED2_OFF() \
    GPIO_SetPinsOutput(BOARD_LED2_GPIO, BOARD_LED2_GPIO_PORT, 1U << BOARD_LED2_GPIO_PIN) /*!< Turn off target LED2 */
#define LED2_TOGGLE()                                            \
    GPIO_TogglePinsOutput(BOARD_LED2_GPIO, BOARD_LED2_GPIO_PORT, \
                          1U << BOARD_LED2_GPIO_PIN) /*!< Toggle on target LED2 */

#define LED3_INIT(output)                                                    \
    GPIO_PinInit(BOARD_LED3_GPIO, BOARD_LED3_GPIO_PORT, BOARD_LED3_GPIO_PIN, \
                 &(gpio_pin_config_t){kGPIO_DigitalOutput, (output)}) /*!< Enable target LED3 */
#define LED3_ON() \
    GPIO_ClearPinsOutput(BOARD_LED3_GPIO, BOARD_LED3_GPIO_PORT, 1U << BOARD_LED3_GPIO_PIN) /*!< Turn on target LED3 */
#define LED3_OFF() \
    GPIO_SetPinsOutput(BOARD_LED3_GPIO, BOARD_LED3_GPIO_PORT, 1U << BOARD_LED3_GPIO_PIN) /*!< Turn off target LED3 */
#define LED3_TOGGLE()                                            \
    GPIO_TogglePinsOutput(BOARD_LED3_GPIO, BOARD_LED3_GPIO_PORT, \
                          1U << BOARD_LED3_GPIO_PIN) /*!< Toggle on target LED3 */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/*******************************************************************************
 * API
 ******************************************************************************/

status_t BOARD_InitDebugConsole(void);
void BOARD_InitSDRAM(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* _BOARD_H_ */
