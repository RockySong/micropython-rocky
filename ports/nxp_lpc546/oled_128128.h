#ifndef _OLED_128128_H_
#define _OLED_128128_H_

/*
 * @brief OLED (implementation file)
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2015
 * All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * LPC products.  This software is supplied "AS IS" without any warranties of
 * any kind, and NXP Semiconductors and its licensor disclaim any and
 * all warranties, express or implied, including all implied warranties of
 * merchantability, fitness for a particular purpose and non-infringement of
 * intellectual property rights.  NXP Semiconductors assumes no responsibility
 * or liability for the use of the software, conveys no license or rights under any
 * patent, copyright, mask work right, or any other intellectual property rights in
 * or to any products. NXP Semiconductors reserves the right to make changes
 * in the software without notification. NXP Semiconductors also makes no
 * representation or warranty that such application will be suitable for the
 * specified use without further testing or modification.
 *
 * @par
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, under NXP Semiconductors' and its
 * licensor's relevant copyrights in the software, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>


#define	BUFF_LEN	32

typedef struct {
	uint8_t		port;
	uint8_t		pin;
	uint32_t	modefunc;
	bool		init_state;
} SPI_GPIO_T;

#define PIN_DATA	pin_21
#define PIN_RST		pin_122
#define PIN_VPP		pin_11
#define OLED_SPI	PYB_SPI_9

void OLED_Fill(uint8_t c);

void OLED_cls(void);

void OLED_on(void);

void OLED_off(void);

void OLED_init(uint32_t dispClockRate);

void OLED_update_swim_fb(uint8_t* pfb);

#endif

