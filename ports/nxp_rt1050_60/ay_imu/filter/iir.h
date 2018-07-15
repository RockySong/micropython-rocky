/**
  ******************************************************************************
  * @file    filter.h
  * @author  YANDLD
  * @version V2.5
  * @date    2015.3.26
  * @brief   www.beyondcore.net   http://upcmcu.taobao.com 
  * @note    
  ******************************************************************************
  */
#ifndef _IIR_H_
#define _IIR_H_


#include <stdint.h>

#define IIR_MAX_BUF_SIZE    (8)

typedef struct
{
    float *b;          /* xbuf coeffict */
    float *a;          /* ybuf coeffict */
    int b_size;
    int a_size;
    float ybuf[IIR_MAX_BUF_SIZE];
    float xbuf[IIR_MAX_BUF_SIZE];
    int i;
}iir_t;

void iir_init(iir_t *s, float *b, int b_size, float *a, int a_size);
void iir_run(iir_t *s, float *in, float *out);

#endif
