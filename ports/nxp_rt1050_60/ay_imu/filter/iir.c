/**
  ******************************************************************************
  * @file    silding_mean_filter.h
  * @author  YANDLD
  * @version V2.5
  * @date    2015.3.26
  * @brief   www.beyondcore.net   http://upcmcu.taobao.com 
  * @note    
  ******************************************************************************
  */

#include <math.h>

#include "iir.h"


void iir_init(iir_t *s, float *b, int b_size, float *a, int a_size)
{
    int i;
    s->b = b;
    s->a = a;
    s->b_size = b_size;
    s->a_size = a_size;
    for(i=0; i<s->b_size; i++)
    {
        s->xbuf[i] = 0.0F;
    }
    
    for(i=0; i<s->a_size; i++)
    {
        s->ybuf[i] = 0.0F;
    }
}

void iir_run(iir_t *s, float *in, float *out)
{
    /* shifing the buffer */
    for(s->i=s->b_size-1; s->i>0; s->i--)
    {
        s->xbuf[s->i] = s->xbuf[s->i-1];
    }
    s->xbuf[0] = (*in);
    
    /* sum all buffer value with coeffs */
    s->ybuf[0] = 0;
    
    /* adding all x items */
    for(s->i=0; s->i<s->b_size; s->i++)
    {
        s->ybuf[0] += s->xbuf[s->i] * s->b[s->i];
    }
    
    /* subtract(feedback) all y items */
    for(s->i=1; s->i<s->a_size; s->i++)
    {
        s->ybuf[0] -= s->ybuf[s->i] * s->a[s->i];
    }
    
    /* ybuf update, shift the ybuf */
    for(s->i=s->a_size-1; s->i>0; s->i--)
    {
        s->ybuf[s->i] = s->ybuf[s->i-1];
    }
    
    *out = s->ybuf[0];
}

