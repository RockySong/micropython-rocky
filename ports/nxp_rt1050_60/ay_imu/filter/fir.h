/**
  ******************************************************************************
  * @file    fir.h
  * @author  YANDLD
  * @version V2.5
  * @date    2017.10.08
  * @brief   www.beyondcore.net   http://upcmcu.taobao.com 
  * @note    
  ******************************************************************************
  */
#ifndef _FIR_H_
#define _FIR_H_

#include <stdint.h>


#define FIR_MAX_BUF_SIZE    (40)

typedef struct
{
    int     tap_size;                   /* tap size is the number of coeffs and should be (order of filter + 1). which shoud be 3,5,7,9.... */
    float   *coeffs;                    /* pCoeffs points to the array of filter coefficients, same as matlab func: fir1, reversed order of arm_fir_init_f32 */
    float   buf[FIR_MAX_BUF_SIZE];      /* filter state */
}fir_t;

int fir_init(fir_t *s, int tap_size, float *coeffs);
int fir_run(fir_t *s, float *in, float *out);

#endif
