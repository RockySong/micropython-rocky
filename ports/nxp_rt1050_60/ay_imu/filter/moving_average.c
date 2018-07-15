/**
  ******************************************************************************
  * @file    moving_average.h
  * @author  YANDLD
  * @version V2.5
  * @date    2015.3.26
  * @brief   www.beyondcore.net   http://upcmcu.taobao.com 
  * @note    
  ******************************************************************************
  */

#include "moving_average.h"

int moving_average_init(fir_t *s, uint8_t width)
{
    int i;
    
    static float coeffs[FIR_MAX_BUF_SIZE];
    for(i=0; i<width; i++)
    {
        coeffs[i] = 1 / ((float)width);
    }
    return fir_init(s, width, coeffs);
}

int moving_average_run(fir_t *s, float *in, float* out)
{
    return fir_run(s, in, out);
}
