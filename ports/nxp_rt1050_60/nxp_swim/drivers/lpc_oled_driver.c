/*
 * @brief Simple Windowing Interface Manager (SWIM)
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2012
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

#include <string.h>
#include "lpc_swim.h"
#include "oled_128128.h"

/**
 * @brief	Clears a window frame_buffer.
 *
 * @param	win		: Pointer to window data structure
 * @param	color	: Value to write to pixel
 * @return	Nothing
 * @note	This function must be implemented outside the
 *			swim library (in application).
 */
void swim_clear_fb(SWIM_WINDOW_T *win, COLOR_T color)
{
	int32_t x, y;
	int32_t	x_max = win->xpsize/8;												/* one bit/pixel, each uint8_t = 8-bits */
	int32_t	y_max = win->ypsize;												/* number of lines */
	COLOR_T	c_val;
	
	c_val = (color == BLACK) ?	0x00 : 0xff;									/* only support black and white */
	
	for (y=0; y<y_max; y++) {													/* loop through all lines */
		for (x=0; x<x_max; x++) {												/* loop through all bits in the line */
			*(win->fb + x + (y * win->xpsize)) = c_val;							/* set 8-bits at once */
		}
	}
}

/**
 * @brief	Updates OLED. Updates complete frame.
 *
 * @param	win		: Pointer to window data structure
 * @return	Nothing
 * @note	This function must be implemented out side the
 *			swim library (in application).
 */
void swim_update_display(SWIM_WINDOW_T *win)
{
	OLED_update_swim_fb(win->fb);
}


/**
 * @brief	Puts a pixel at the physical X, Y coordinate.
 *
 * @param	win		: Pointer to window data structure
 * @param	x1		: Physical X coordinate of pixel
 * @param	y1		: Physical Y coordinate of pixel
 * @param	color	: Value to write to pixel
 * @return	Nothing
 * @note	This function must be implemented outside the
 *			swim library (in application).
 */
void swim_put_pixel_physical(SWIM_WINDOW_T *win, int32_t x1, int32_t y1, COLOR_T color)
{
	uint32_t ofs = (x1 >> 3) + y1 * (win->xpsize >> 3);
	if (color == WHITE) {
		win->fb[ofs] |= 1<<(7-(x1 & 7));
	} else {
		win->fb[ofs] &= ~(1<<(7-(x1 & 7)));
	}
}

/**
 * @brief	Read value of pixel at the physical X, Y coordinate.
 *
 * Note that this function must be implemented by the application!
 * If not defined, there will be a link error.
 *
 * @param	win		: Pointer to window data structure
 * @param	x1		: Physical X coordinate of pixel
 * @param	y1		: Physical Y coordinate of pixel
 * @param	color	: Value to write to pixel
 * @return	Nothing
 * @note	This function must be implemented outside the
 *			swim library (in application).
 */
COLOR_T swim_get_pixel_physical(SWIM_WINDOW_T *win, int32_t x1, int32_t y1)
{
	uint32_t ofs = (x1 >> 3) + y1 * (win->xpsize >> 3);
	uint8_t pix = win->fb[ofs];
	return pix & 1<<(7 - (x1 & 7)) ? WHITE : BLACK;
}


