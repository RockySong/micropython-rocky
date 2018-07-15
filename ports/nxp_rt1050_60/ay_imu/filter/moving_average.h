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
#ifndef _MOVING_AVERAGE_H_
#define _MOVING_AVERAGE_H_

#include "fir.h"

int moving_average_init(fir_t *s, uint8_t width);
int moving_average_run(fir_t *s, float *in, float* out);

#endif
