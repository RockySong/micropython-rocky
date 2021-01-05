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
#include <stdint.h>
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





enum {
  AF_FN_GPIO, 
  AF_FN_LPUART,
  AF_FN_LPI2C,
  AF_FN_LPSPI,
  AF_FN_SAI,
  AF_FN_I2S = AF_FN_SAI,
  AF_FN_GPT,
  AF_FN_TMR,
  AF_FN_PWM,
  AF_FN_SDMMC,
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

	AF_PIN_TYPE_TMR_TIMER0 = 0,
	AF_PIN_TYPE_TMR_TIMER1,
	AF_PIN_TYPE_TMR_TIMER2,
	AF_PIN_TYPE_TMR_TIMER3,

  	AF_PIN_TYPE_GPT_CLK,
  	AF_PIN_TYPE_GPT_CAPTURE1,
  	AF_PIN_TYPE_GPT_CAPTURE2,
  	AF_PIN_TYPE_GPT_COMPARE1,
  	AF_PIN_TYPE_GPT_COMPARE2,
  	AF_PIN_TYPE_GPT_COMPARE3,

  AF_PIN_TYPE_LPI2C_SDA = 0,
  AF_PIN_TYPE_LPI2C_SCL,

  AF_PIN_TYPE_LPUART_TX = 0,
  AF_PIN_TYPE_LPUART_RX,
  AF_PIN_TYPE_LPUART_CTS_B,
  AF_PIN_TYPE_LPUART_RTS_B,
  AF_PIN_TYPE_LPUART_CK,

  AF_PIN_TYPE_LPSPI_SDI = 0,
  AF_PIN_TYPE_LPSPI_SDO,
  AF_PIN_TYPE_LPSPI_SCK,
  AF_PIN_TYPE_LPSPI_PCS0,

  AF_PIN_TYPE_PWM_PWMA0 = 0,
  AF_PIN_TYPE_PWM_PWMB0,
  AF_PIN_TYPE_PWM_PWMX0,
  AF_PIN_TYPE_PWM_PWMA1,
  AF_PIN_TYPE_PWM_PWMB1,
  AF_PIN_TYPE_PWM_PWMX1,
  AF_PIN_TYPE_PWM_PWMA2,
  AF_PIN_TYPE_PWM_PWMB2,
  AF_PIN_TYPE_PWM_PWMX2,
  AF_PIN_TYPE_PWM_PWMA3,
  AF_PIN_TYPE_PWM_PWMB3,
  AF_PIN_TYPE_PWM_PWMX3,


  AF_PIN_TYPE_SAI_MCLK = 0,
  AF_PIN_TYPE_SAI_TX_BCLK,
  AF_PIN_TYPE_SAI_TX_SYNC,
  AF_PIN_TYPE_SAI_TX_DATA,
  AF_PIN_TYPE_SAI_TX_DATA0 = AF_PIN_TYPE_SAI_TX_DATA,
  AF_PIN_TYPE_SAI_TX_DATA1,
  AF_PIN_TYPE_SAI_TX_DATA2,  
  AF_PIN_TYPE_SAI_TX_DATA3,
  AF_PIN_TYPE_SAI_RX_BCLK,
  AF_PIN_TYPE_SAI_RX_SYNC,
  AF_PIN_TYPE_SAI_RX_DATA,
  AF_PIN_TYPE_SAI_RX_DATA0 = AF_PIN_TYPE_SAI_RX_DATA,
};

enum {
  PIN_ADC1  = (1 << 1),
  PIN_ADC2  = (1 << 2),
  PIN_ADC3  = (1 << 3),
};


typedef union _McuPinCfgReg_t
{
	struct {
        uint32_t b00_1_NA:1;
        uint32_t b01_1_PDRV_isNotStrong:1;
        uint32_t b02_2_PULL:2; /* forbid, pUp, pDn, NoPull */
        uint32_t b04_1_OD_isOD:1;	
        uint32_t b05_27_NA:27;
	}t1;
	struct {
        uint32_t b00_1_SRE_isFastSlew:1;
        uint32_t b01_1_DSE_isStrong:1;
        uint32_t b02_1_PUE_isPull:1;
        uint32_t b03_1_PUS_isPUp:1;
        uint32_t b04_1_OD_isOD:1;	
        uint32_t b05_27_NA:27;
	}t2;
	uint32_t v32;
}McuPinCfgReg_t;

typedef union _McuPinMuxReg_t
{
	struct {
	uint32_t b00_3_muxMode:3;
	uint32_t b03_1_res:1;
	uint32_t b04_1_inForceOn:1;
	uint32_t b05_27_res:27;
	};
	uint32_t v32;
}McuPinMuxReg_t;

#define GP11XX_HIZ               0
#define GP11XX_ANALOG            1 
#define GP11XX_INPUT             2 
#define GP11XX_INPUT_PUP         3
#define GP11XX_INPUT_PUP_WEAK    4
#define GP11XX_INPUT_PDN         5

#define GP11XX_OUT_PP         8
#define GP11XX_OUT_PP_STRONG  9
#define GP11XX_OUT_PP_FAST    10 
#define GP11XX_OUT_PP_STRONGFAST  11
#define GP11XX_OUT_OD         12
#define GP11XX_OUT_OD_PUP     13

/* Type 1 IOMUX PAD_CTL regs 
 [1]   drive strength: nrm/HIGH
 [3:2] Pull select: Fobid/pUp/pDn/No Pull
 [4]   OD: d/E
*/
#define GP11XXT1_HIZ               (3<<2)
#define GP11XXT1_ANALOG            (3<<2)
#define GP11XXT1_INPUT             (3<<2)
#define GP11XXT1_INPUT_PUP         (1<<2)
#define GP11XXT1_INPUT_PUP_WEAK    (1<<2)
#define GP11XXT1_INPUT_PDN         (2<<2)

#define GP11XXT1_OUT_PP             (3<<2 | 1<<1)
#define GP11XXT1_OUT_PP_STRONG      (3<<2)
#define GP11XXT1_OUT_PP_FAST        GP11XXT1_OUT_PP
#define GP11XXT1_OUT_PP_STRONGFAST  GP11XXT1_OUT_PP_STRONG
#define GP11XXT1_OUT_OD             (3<<2 | 1<<4)
#define GP11XXT1_OUT_OD_PUP         (1<<2 | 1<<4)


/* type 2 IOMUX PAD_CTL regs
 AD_XX, DSIP_B2_XX
[0]: slew: slow/FAST
[1]: drive strength: nrm/HIGH
[2]: Pull/keep En : HiZ/En
[3]: Pull select: pdn / PUP
[4]: OD: d/E 
*/

#define GP11XXT2_HIZ               0
#define GP11XXT2_ANALOG            1 
#define GP11XXT2_INPUT             GP11XXT2_HIZ
#define GP11XXT2_INPUT_PUP         ((2<<1) | (3<<1))
#define GP11XXT2_INPUT_PUP_WEAK    GP11XXT2_INPUT_PUP
#define GP11XXT2_INPUT_PDN         (2<<1)

#define GP11XXT2_OUT_PP             0
#define GP11XXT2_OUT_PP_STRONG      (GP11XXT2_OUT_PP | 1<<1)
#define GP11XXT2_OUT_PP_FAST        (GP11XXT2_OUT_PP | 1<<0)
#define GP11XXT2_OUT_PP_STRONGFAST  (GP11XXT2_OUT_PP_STRONG | GP11XXT2_OUT_PP_FAST)
#define GP11XXT2_OUT_OD         12  (GP11XXT2_OUT_PP | 1<<4)
#define GP11XXT2_OUT_OD_PUP     13  (GP11XXT2_OUT_OD | 1<<2 | 1<<3)

/*
PAD_CTL_PAD_GPIO_AD_00 :      0x400E8350
PAD_CTL_PAD_GPIO_AD_35 :      0x400E83DC
PAD_CTL_PAD_GPIO_DISP_B2_00 : 0x400E8458
PAD_CTL_PAD_GPIO_DISP_B2_00 : 0x400E8494
*/
#define PAD_CTL_REG_GRP(A)    (((A)>=0x400E8350 && (A)<0x400083E0 || \
    (A)>=0x400E8458 && (A)<0x400E8498) ? 1 : 0)

// >>> below we define GPIO modes that used for other drivers and user
// for analog mode, must disable keeper (keep previous input state) and output buffer. It seems a practical usage is:
// mux the pin as GPIO and GPIO set to input, and PAD control selects Hiz (bit 12 PKE=0, bit 11,13,14,15 are not cared)
#define  GP11XX_ANALOG	 	IOPAD_IN_HIZ 

#define  GP11XX_INPUT			(0<<27 | IOPAD_OUT_STRENGTH_0X | IOPAD_OUT_SPEED_50M | IOPAD_IN_KEEPER)
#define	 GP11XX_INPUT_PUP		(0<<27 | IOPAD_OUT_STRENGTH_0X | IOPAD_OUT_SPEED_50M | IOPAD_IN_PUP_22K)
#define	 GP11XX_INPUT_PUP_WEAK	(0<<27 | IOPAD_OUT_STRENGTH_0X | IOPAD_OUT_SPEED_50M | IOPAD_IN_PUP_47K)
#define	 GP11XX_INPUT_PDN		(0<<27 | IOPAD_OUT_STRENGTH_0X | IOPAD_OUT_SPEED_50M | IOPAD_IN_PDN_100K)

#define  GP11XX_OUT_PP        (GPIO_PAD_OUTPUT_MASK | IOPAD_OUT_STRENGTH_6X | IOPAD_OUT_SPEED_100M | IOPAD_IN_KEEPER)
#define  GP11XX_OUT_PP_WEAK   (GPIO_PAD_OUTPUT_MASK | IOPAD_OUT_STRENGTH_1X | IOPAD_OUT_SPEED_100M | IOPAD_IN_KEEPER)


#define  GP11XX_OUT_OD_HIZ 	(GPIO_PAD_OUTPUT_MASK | IOPAD_OUT_OD)
#define  GP11XX_OUT_OD		(GPIO_PAD_OUTPUT_MASK | IOPAD_OUT_OD | IOPAD_IN_KEEPER)
#define  GP11XX_OUT_OD_PUP    (GPIO_PAD_OUTPUT_MASK | IOPAD_OUT_OD | IOPAD_IN_PUP_22K)
#define  GP11XX_OUT_OD_KEEP			GP11XX_OUT_OD


#define  GP11XX_AF_PP                        GP11XX_OUT_PP  

    
#define  GP11XX_IT_RISING                    ((uint32_t)0x10110000U)   /*!< External Interrupt Mode with Rising edge trigger detection          */
#define  GP11XX_IT_FALLING                   ((uint32_t)0x10210000U)   /*!< External Interrupt Mode with Falling edge trigger detection         */
#define  GP11XX_IT_RISING_FALLING            ((uint32_t)0x10310000U)   /*!< External Interrupt Mode with Rising/Falling edge trigger detection  */
 
#define  GP11XX_EVT_RISING                   ((uint32_t)0x10120000U)   /*!< External Event Mode with Rising edge trigger detection               */
#define  GP11XX_EVT_FALLING                  ((uint32_t)0x10220000U)   /*!< External Event Mode with Falling edge trigger detection              */
#define  GP11XX_EVT_RISING_FALLING           ((uint32_t)0x10320000U)   /*!< External Event Mode with Rising/Falling edge trigger detection       */

// >> IOCON settings
#define  GPIO_INVERTER		(1<<7)


#define PIN_ALT_NC		(0xFF)

// <<<

#define IS_GPIO_PIN_ACTION(ACTION) 1 // (((ACTION) == GPIO_PIN_RESET) || ((ACTION) == GPIO_PIN_SET))
#if 0
#define IS_GPIO_PIN(PIN)           1 // (((PIN) & GPIO_PIN_MASK ) != (uint32_t)0x00U)
#define IS_GPIO_MODE(MODE) (((MODE) == GP11XX_INPUT)              ||\
((MODE) == GP11XX_INPUT_PUP)          || \
((MODE) == GP11XX_INPUT_PUP_WEAK)     || \
((MODE) == GP11XX_INPUT_PDN)  		 || \
((MODE) == GP11XX_ANALOG)             || \
((MODE) == GP11XX_OUT_PP)          || \
((MODE) == GP11XX_OUT_PP_WEAK)     || \
((MODE) == GP11XX_OUT_OD_HIZ)      || \
((MODE) == GP11XX_OUT_OD_KEEP)     || \
((MODE) == GP11XX_OUT_OD_PUP)     )

#define IS_GPIO_SPEED(SPEED) (((SPEED) == IOPAD_OUT_SPEED_50M)  || ((SPEED) == IOPAD_OUT_SPEED_100M) || \
  ((SPEED) == IOPAD_OUT_SPEED_200M) || )
#define IS_GPIO_PULL(PULL) (((PULL) == IOPAD_IN_PDN_100K) || ((PULL) == IOPAD_IN_PUP_47K) || \
((PULL) == IOPAD_IN_PUP_100K) || ((PULL) == IOPAD_IN_PUP_22K) || ((PULL) == IOPAD_IN_KEEPER) 

#endif

