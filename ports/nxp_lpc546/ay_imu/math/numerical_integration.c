#include <stdio.h>
#include "numerical_integration.h"

void rect_integration(double *in, double *out, double t)
{
    *out += *in * t;
}

void trapz_init(trapz_t *s)
{
    s->x = 0;
    s->sample_processed = 0;
}

/* Trapezoidal numerical integration */
void trapz(trapz_t *s, double *in, double *out, double t)
{
    *out += (s->x + (*in)) * t / 2;
    s->sample_processed++;
    s->x = (*in);
}

void rk4_init(rk4_t *s)
{
    s->buf[0] = 0;
    s->buf[1] = 0;
    s->buf[2] = 0;
    s->sample_processed = 0;
}

void rk4_run(rk4_t *s, double *in, double *out, double t)
{
    double k1, k2, k3, k4;
    
    k1 = s->buf[2];
    k2 = s->buf[1];
    k3 = s->buf[1];
    k4 = *in;
    
    *out +=  (k1 + 2*k2 + 2*k3 + k4) * t / 6;
    
    s->buf[2] = s->buf[1];
    s->buf[1] = s->buf[0];
    s->buf[0] = *in;
    
    s->sample_processed++;
}

static float fun(float x)
{
    return x * x;
}

void integration_test(void)
{
    double x;
    double ideal_result = 3.33333F;
    double step = 0.001;
    double res, val;

    printf("test: y = x^2  from 0 to 1 step:%f ideal_result:%f\r\n", step, ideal_result);
    
    res = 0;
    for(x=0; x<10; x+= step)
    {
        val = fun(x);
        rect_integration(&val, &res, step);
    }
    printf("Rectangular integration:%f\r\n", res);
    
    
    trapz_t s;
    trapz_init(&s);
    
    res = 0;
    for(x=0; x<10; x+= step)
    {
        val = fun(x);
        trapz(&s, &val, &res, step);
    }
    printf("Trapezoidal numerical integratio:%f processed:%d\r\n", res, s.sample_processed);
    
    rk4_t s_rk4;
    rk4_init(&s_rk4);
    
    res = 0;
    for(x=0; x<10; x+= step/2)
    {
        val = fun(x);
        rk4_run(&s_rk4, &val, &res, step/2);
    }
    printf("Runge-Kutta integration integratio:%f processed:%d\r\n", res, s.sample_processed);
    
}

