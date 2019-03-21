/**
  ******************************************************************************
  * @file    numerical_integration.h
  * @author  YANDLD
  * @version V2.5
  * @date    2017.10.08
  * @brief   www.beyondcore.net   http://upcmcu.taobao.com 
  * @note    
  ******************************************************************************
  */
#ifndef _NUMERICAL_INTEGRATION_H_
#define _NUMERICAL_INTEGRATION_H_

#include <stdint.h>

typedef struct
{
    double x;
    int sample_processed;
}trapz_t;

typedef struct
{
    double buf[4];
    int sample_processed;
}rk4_t;

void rect_integration(double *in, double *out, double t);
void integration_test(void);
void trapz(trapz_t *s, double *in, double *out, double t);
void trapz_init(trapz_t *s);

#endif
