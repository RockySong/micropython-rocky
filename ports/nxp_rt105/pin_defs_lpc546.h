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

// This file contains pin definitions that are specific to the stmhal port.
// This file should only ever be #included by pin.h and not directly.

enum {
  PORT_0 = 0,
  PORT_1,
  PORT_2,
  PORT_3,
  PORT_4,
  PORT_5,
  PORT_6,
  PORT_7,
  PORT_8,
  PORT_9,
};

#define GPIO0   GPIO
#define GPIO1   GPIO
#define GPIO2   GPIO
#define GPIO3   GPIO
#define GPIO4   GPIO
#define GPIO5   GPIO

#define FC0		FLEXCOMM0
#define FC1		FLEXCOMM1
#define FC2		FLEXCOMM2
#define FC3		FLEXCOMM3
#define FC4		FLEXCOMM4
#define FC5		FLEXCOMM5
#define FC6		FLEXCOMM6
#define FC7		FLEXCOMM7
#define FC8		FLEXCOMM8
#define FC9		FLEXCOMM9

#define CT0		CTIMER0
#define CT1		CTIMER1
#define CT2		CTIMER2
#define CT3		CTIMER3
#define CT4		CTIMER4





enum {
  AF_FN_GPIO,
  AF_FN_TIM,
  AF_FN_I2S,
  AF_FN_SDMMC,
  AF_FN_FC,
  AF_FN_I2C = AF_FN_FC,
  AF_FN_USART = AF_FN_FC,
  AF_FN_UART = AF_FN_FC,
  AF_FN_SPI = AF_FN_FC,
  AF_FN_CT,
};

enum {
  AF_PIN_TYPE_GPIO_PIN0,
  AF_PIN_TYPE_GPIO_PIN1,
  AF_PIN_TYPE_GPIO_PIN2,
  AF_PIN_TYPE_GPIO_PIN3,
  AF_PIN_TYPE_GPIO_PIN4,
  AF_PIN_TYPE_GPIO_PIN5,
  AF_PIN_TYPE_GPIO_PIN6,
  AF_PIN_TYPE_GPIO_PIN7,
  AF_PIN_TYPE_GPIO_PIN8,
  AF_PIN_TYPE_GPIO_PIN9,
  AF_PIN_TYPE_GPIO_PIN10,
  AF_PIN_TYPE_GPIO_PIN11,
  AF_PIN_TYPE_GPIO_PIN12,
  AF_PIN_TYPE_GPIO_PIN13,
  AF_PIN_TYPE_GPIO_PIN14,
  AF_PIN_TYPE_GPIO_PIN15,
  AF_PIN_TYPE_GPIO_PIN16,
  AF_PIN_TYPE_GPIO_PIN17,
  AF_PIN_TYPE_GPIO_PIN18,
  AF_PIN_TYPE_GPIO_PIN19,
  AF_PIN_TYPE_GPIO_PIN20,
  AF_PIN_TYPE_GPIO_PIN21,
  AF_PIN_TYPE_GPIO_PIN22,
  AF_PIN_TYPE_GPIO_PIN23,
  AF_PIN_TYPE_GPIO_PIN24,
  AF_PIN_TYPE_GPIO_PIN25,
  AF_PIN_TYPE_GPIO_PIN26,
  AF_PIN_TYPE_GPIO_PIN27,
  AF_PIN_TYPE_GPIO_PIN28,
  AF_PIN_TYPE_GPIO_PIN29,
  AF_PIN_TYPE_GPIO_PIN30,
  AF_PIN_TYPE_GPIO_PIN31,

  AF_PIN_TYPE_I2C_SDA = 0,
  AF_PIN_TYPE_I2C_SCL,

  AF_PIN_TYPE_USART_TX = 0,
  AF_PIN_TYPE_USART_RX,
  AF_PIN_TYPE_USART_CTS,
  AF_PIN_TYPE_USART_RTS,
  AF_PIN_TYPE_USART_CK,

  AF_PIN_TYPE_SPI_MOSI = 0,
  AF_PIN_TYPE_SPI_MISO,
  AF_PIN_TYPE_SPI_SCK,
  AF_PIN_TYPE_SPI_NSS,

  AF_PIN_TYPE_I2S_CK = 0,
  AF_PIN_TYPE_I2S_MCK,
  AF_PIN_TYPE_I2S_SD,
  AF_PIN_TYPE_I2S_WS,
  AF_PIN_TYPE_I2S_EXTSD,

  AF_PIN_TYPE_CT_MAT0 = 0,
  AF_PIN_TYPE_CT_MAT1,
  AF_PIN_TYPE_CT_MAT2,
  AF_PIN_TYPE_CT_MAT3,
  AF_PIN_TYPE_CT_CAP0,
  AF_PIN_TYPE_CT_CAP1,
  AF_PIN_TYPE_CT_CAP2,
  AF_PIN_TYPE_CT_CAP3,

  AF_PIN_TYPE_FC_TXD_SCL_MISO = 0,
  AF_PIN_TYPE_FC_RXD_SDA_MOSI,
  AF_PIN_TYPE_FC_RXD_SDA_MOSI_DATA,
  AF_PIN_TYPE_FC_CTS_SDA_SSEL0,
  AF_PIN_TYPE_FC_RTS_SCL_SSEL1,
  AF_PIN_TYPE_FC_TXD_SCL_MISO_WS,
  AF_PIN_TYPE_FC_SSEL2,
  AF_PIN_TYPE_FC_SSEL3,
  AF_PIN_TYPE_FC_SCK,

  AF_PIN_TYPE_SDMMC_CK = 0,
  AF_PIN_TYPE_SDMMC_CMD,
  AF_PIN_TYPE_SDMMC_D0,
  AF_PIN_TYPE_SDMMC_D1,
  AF_PIN_TYPE_SDMMC_D2,
  AF_PIN_TYPE_SDMMC_D3,
};

enum {
  PIN_ADC1  = (1 << 0),
  PIN_ADC2  = (1 << 1),
  PIN_ADC3  = (1 << 2),
};

#define  GPIO_MODE_INPUT                        (0<<28)  /*!< Input Floating Mode                   */
#define  GPIO_MODE_OUTPUT_PP                    (1<<28)  /*!< Output Push Pull Mode                 */

#define  GPIO_MODE_AF_PP                        GPIO_MODE_OUTPUT_PP  
#define  GPIO_MODE_AF_OD                        GPIO_MODE_AF_OD   /*!< Alternate Function Open Drain Mode    */
    
#define  GPIO_MODE_IT_RISING                    ((uint32_t)0x10110000U)   /*!< External Interrupt Mode with Rising edge trigger detection          */
#define  GPIO_MODE_IT_FALLING                   ((uint32_t)0x10210000U)   /*!< External Interrupt Mode with Falling edge trigger detection         */
#define  GPIO_MODE_IT_RISING_FALLING            ((uint32_t)0x10310000U)   /*!< External Interrupt Mode with Rising/Falling edge trigger detection  */
 
#define  GPIO_MODE_EVT_RISING                   ((uint32_t)0x10120000U)   /*!< External Event Mode with Rising edge trigger detection               */
#define  GPIO_MODE_EVT_FALLING                  ((uint32_t)0x10220000U)   /*!< External Event Mode with Falling edge trigger detection              */
#define  GPIO_MODE_EVT_RISING_FALLING           ((uint32_t)0x10320000U)   /*!< External Event Mode with Rising/Falling edge trigger detection       */

// >> IOCON settings

#define  GPIO_NOPULL        (0<<4)  /*!< No Pull-up or Pull-down activation  */
#define  GPIO_PULLUP        (2<<4)   /*!< Pull-up activation                  */
#define  GPIO_PULLDOWN      (1<<4)   /*!< Pull-down activation                */
#define  GPIO_REPEATER		(3<<4)

#define  GPIO_INVERTER		(1<<7)

#define  GPIO_MODE_DIGITAL   (1<<8)	// internal use
#define  GPIO_MODE_ANALOG	(1<<18) // internal use

#define  GPIO_FILTEROFF		(1<<9)

#define GPIO_TRUE_OD_1MHz		0x3c<<6
#define GPIO_TRUE_OD_400KHz		0x0C<<6
#define GPIO_TRUE_OD_GPIO20mA	0x15<<6
#define GPIO_TRUE_OD_GPIO4mA	0x05<<6

#define  GPIO_SPEED_FREQ_LOW         (0<<10)  /*!< IO works at 2 MHz, please refer to the product datasheet */
#define  GPIO_SPEED_FREQ_MEDIUM      (0<<10)  /*!< range 12,5 MHz to 50 MHz, please refer to the product datasheet */
#define  GPIO_SPEED_FREQ_HIGH        (1<<10)  /*!< range 25 MHz to 100 MHz, please refer to the product datasheet  */
#define  GPIO_SPEED_FREQ_VERY_HIGH   (1<<10)  /*!< range 50 MHz to 200 MHz, please refer to the product datasheet  */
#define  GPIO_MODE_OUTPUT_OD                    (1<<11)   /*!< Output Open Drain Mode                */

#define PIN_ALT_NC		(0xFF)

// <<<

#define IS_GPIO_PIN_ACTION(ACTION) 1 // (((ACTION) == GPIO_PIN_RESET) || ((ACTION) == GPIO_PIN_SET))
#define IS_GPIO_PIN(PIN)           1 // (((PIN) & GPIO_PIN_MASK ) != (uint32_t)0x00U)
#define IS_GPIO_MODE(MODE) (((MODE) == GPIO_MODE_INPUT)              ||\
                            ((MODE) == GPIO_MODE_OUTPUT_PP)          ||\
                            ((MODE) == GPIO_MODE_OUTPUT_OD)          ||\
                            ((MODE) == GPIO_MODE_IT_RISING)          ||\
                            ((MODE) == GPIO_MODE_IT_FALLING)         ||\
                            ((MODE) == GPIO_MODE_IT_RISING_FALLING)  ||\
                            ((MODE) == GPIO_MODE_DIGITAL))
#define IS_GPIO_SPEED(SPEED) (((SPEED) == GPIO_SPEED_FREQ_LOW)  || ((SPEED) == GPIO_SPEED_FREQ_MEDIUM) || \
                              ((SPEED) == GPIO_SPEED_FREQ_HIGH) || ((SPEED) == GPIO_SPEED_FREQ_VERY_HIGH))
#define IS_GPIO_PULL(PULL) (((PULL) == GPIO_NOPULL) || ((PULL) == GPIO_PULLUP) || \
                            ((PULL) == GPIO_PULLDOWN) || ((PULL) == GPIO_REPEATER))



