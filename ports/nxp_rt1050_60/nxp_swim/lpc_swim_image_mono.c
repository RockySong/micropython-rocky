/*
 * @brief SWIM image management (monochrome)
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
 * is used in conjunction with NXP Semiconductors microcontrollers.	 This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#include "lpc_types.h"
#include "lpc_swim_image.h"

/*****************************************************************************
 * Private types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Public types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Private functions
 ****************************************************************************/
static COLOR_T pixel_get(const COLOR_T *image, int32_t idx)
{
	int32_t i = idx / 8;
	int32_t j = 7 - (idx % 8);

	return (image[i] & (1<<j)) ? WHITE : BLACK;
}

/*****************************************************************************
 * Public functions
 ****************************************************************************/

/* Puts a raw image into a window */
void swim_put_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xr, yr;														// declare input position / output position

	y = win->ypvmin, yr = 0;													// set y (in/out) to image start
	while ((y <= win->ypvmax) && (yr < ysize)) {								// loop within y input / output range (render image)
		x = win->xpvmin, xr = 0;												// set x (in/out) to start of line
		while ((x <= win->xpvmax) && (xr < xsize)) {							// loop within x input / output range (render line)
			pxl = pixel_get(image, xr + yr * xsize);							// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			x++, xr++;															// bump pixel pointer
		}
		y++, yr++;																// bump in/out line counters

	}
}

/* Puts a raw image into a window inverted */
void swim_put_invert_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xr, yr;														// declare input position / output position

	y = win->ypvmin, yr = ysize-1;												// set y out = fb start	/ y in = last line
	while ((y <= win->ypvmax) && (yr >= 0)) {									// loop within y input	/ output range (render image)
		x = win->xpvmin, xr = xsize-1;											// set x out = fb start	/ y in = last image pixel
		while ((x <= win->xpvmax) && (xr >= 0)) {								// loop within x input	/ output range (render line)
			pxl = pixel_get(image, xr + yr * xsize);							// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			x++, xr--;															// bump pixel pointers
		}
		y++, yr--;																// bump in/out line counters
	}
}

/* Puts a raw image into a window rotated left */
void swim_put_left_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xr, yr;														// declare input position / output position

	x = win->xpvmin, yr = ysize-1;												// set x out = fb start	/ y in = last line
	while ((x <= win->xpvmax) && (yr >= 0)) {									// loop within x input	/ y output range (render image)
		y = win->ypvmin, xr = 0;												// set y out = fb start	/ x in = first image pixel
		while ((y <= win->ypvmax) && (xr < xsize)) {							// loop within y input	/ x output range (render line)
			pxl = pixel_get(image, ((xsize-xr-1) + (ysize-yr-1) * xsize));		// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			y++, xr++;															// bump pixel pointers
		}
		x++, yr--;																// bump in/out line counters
	}
}

/* Puts a raw image into a window rotated right */
void swim_put_right_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xr, yr;														// declare input position / output position

	x = win->xpvmin, yr = ysize-1;												// set x out = fb start	/ y in = last line
	while ((x <= win->xpvmax) && (yr >= 0)) {									// loop within x input	/ y output range (render image)
		y = win->ypvmin, xr = 0;												// set y out = fb start	/ x in = first image pixel
		while ((y <= win->ypvmax) && (xr < xsize)) {							// loop within y input	/ x output range (render line)
			pxl = pixel_get(image, (xr + yr * xsize));							// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			y++, xr++;															// bump pixel pointers
		}
		x++, yr--;																// bump in/out line counters
	}
}

/* Scales a raw image into a SWIM window:
 *
 * Scales an image that is larger than the window, down to the window size.
 * This will not work the other way.
 */
void swim_put_scale_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xsc, ysc;														// declare output / scale (input) position

	y = win->ypvmin;															// set y out = fb start
	while (y <= win->ypvmax) {													// loop through all the lines in the window
		x = win->xpvmin;														// set x output to the fb start
		ysc = ((ysize - 1) * (y - win->ypvmin)) / win->yvsize;					// scale to get the input line
		while (x <= win->xpvmax) {												// loop through all pixels in the line
			xsc = ((xsize - 1) * (x - win->xpvmin)) / win->xvsize;				// scale to get the pixel index
			pxl = pixel_get(image, (xsc + ysc * xsize));						// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			x++;																// bump the pixel index
		}
		y++;																	// bump the line index
	}
}

/* Scales a raw image into a SWIM window -- inverted:
 *
 * Scales an image that is larger than the window, down to the window size.
 * This will not work the other way.
 */
void swim_put_scale_invert_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xsc, ysc;														// declare output / scale (input) position

	y = win->ypvmin;															// set y out = fb start
	while (y <= win->ypvmax) {													// loop through all the lines in the window
		x = win->xpvmin;														// set x output to the fb start
		ysc = ((ysize - 1) * (y - win->ypvmin)) / win->yvsize;					// scale to get the input line
		while (x <= win->xpvmax) {												// loop through all pixels in the line
			xsc = ((xsize - 1) * (x - win->xpvmin)) / win->xvsize;				// scale to get the pixel index
			pxl = pixel_get(image, ((xsize-1-xsc) + (ysize-1-ysc) * xsize));	// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			x++;																// bump the pixel index
		}																		
		y++;																	// bump the line index
	}
}

/* Scales a raw image into a SWIM window -- rotated left:
 *
 * Scales an image that is larger than the window, down to the window size.
 * This will not work the other way.
 */
void swim_put_scale_left_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xsc, ysc;														// declare output / scale (input) position

	y = win->ypvmin;															// set y out = fb start
	while (y <= win->ypvmax) {													// loop through all the lines in the window
		x = win->xpvmin;														// set x output to the fb start
		ysc = ((xsize - 1) * (win->ypvmax - y)) / win->yvsize;					// scale to get the input line
		while (x <= win->xpvmax) {												// loop through all pixels in the line
			xsc = ((ysize - 1) * (x - win->xpvmin)) / win->xvsize;				// scale to get the pixel index
			pxl = pixel_get(image, (ysc + xsc * xsize));						// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			x++;																// bump the pixel index
		}																		
		y++;																	// bump the line index
	}
}

/* Scales a raw image into a SWIM window -- rotated right:
 *
 * Scales an image that is larger than the window, down to the window size.
 * This will not work the other way.
 */
void swim_put_scale_right_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize)
{
	COLOR_T pxl;																// pixel used to write data to the frame buffer
	int32_t x, y, xsc, ysc;														// declare output / scale (input) position

	y = win->ypvmin;															// set y out = fb start
	while (y <= win->ypvmax) {													// loop through all the lines in the window
		x = win->xpvmin;														// set x output to the fb start
		ysc = ((xsize - 1) * (y - win->ypvmin)) / win->yvsize;					// scale to get the input line
		while (x <= win->xpvmax) {												// loop through all pixels in the line
			xsc = ((ysize - 1) * (win->xpvmax - x)) / win->xvsize;				// scale to get the pixel index
			pxl = pixel_get(image, (ysc + xsc * xsize));						// get the pixel
			swim_put_pixel_physical(win, x, y, pxl );							// write pixel to frame buffer
			x++;																// bump the pixel index
		}																		
		y++;																	// bump the line index
	}
}

/* SWIM image draw composite function */
void swim_put_win_image(SWIM_WINDOW_T *win, const COLOR_T *image, int32_t xsize, int32_t ysize, int32_t scale, SWIM_ROTATION_T rtype)
{
	switch (rtype) {
	case INVERT:
		if (scale != 0) {
			swim_put_scale_invert_image(win, image, xsize, ysize);
		} else {
			swim_put_invert_image(win, image, xsize, ysize);
		}
		break;

	case LEFT:
		if (scale != 0) {
			swim_put_scale_left_image(win, image, xsize, ysize);
		} else {
			swim_put_left_image(win, image, xsize, ysize);
		}
		break;

	case RIGHT:
		if (scale != 0) {
			swim_put_scale_right_image(win, image, xsize, ysize);
		} else {
			swim_put_right_image(win, image, xsize, ysize);
		}
		break;

	case NOROTATION:
	default:
		if (scale != 0) {
			swim_put_scale_image(win, image, xsize, ysize);
		} else {
			swim_put_image(win, image, xsize, ysize);
		}
		break;
	}
}
