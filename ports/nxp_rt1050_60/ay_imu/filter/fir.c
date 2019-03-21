/**
  ******************************************************************************
  * @file    fir.c
  * @author  YANDLD
  * @version V2.5
  * @date    2017.10.08
  * @brief   www.beyondcore.net   http://upcmcu.taobao.com 
  * @note    
  ******************************************************************************
  */
#include <math.h>
#include "fir.h"

/* coeffs can be get from matlab fir1 function, or use fdatool*/
int fir_init(fir_t *s, int tap_size, float *coeffs)
{
    int i;
    s->tap_size = tap_size;
    s->coeffs = coeffs;
    
    if(s->tap_size > FIR_MAX_BUF_SIZE)
    {
        return 1;
    }
    
    /* init delay buffer */
    for(i=0; i<s->tap_size; i++)
    {
        s->buf[i] = 0.0F;
    }
    return 0;
}


int fir_run(fir_t *s, float *in, float *out)
{
    int i;
    /* shifing the buffer */
    for(i=s->tap_size-1; i>0; i--)
    {
        s->buf[i] = s->buf[i-1];
    }
    s->buf[0] = (*in);
        
    /* sum all buffer value with coeffs */
    *out = 0;
    for(i=0; i<s->tap_size; i++)
    {
        *out += s->buf[i] * s->coeffs[i];
    }
    return 0;
}


 


