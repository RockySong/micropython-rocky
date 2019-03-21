#include <math.h>
#include "state_detect.h"
#include "app.h"

#ifndef CH_OK
#define CH_OK   (0)
#endif

#ifndef CH_ERR
#define CH_ERR  (1)
#endif

/* in G */
#define ACC_THR     (0.015)

/* gyo bias thr, in degree */
#define GYO_THR         (0.5)

static v3_t la;
static int lin_flag, rot_flag, quasistatic_flag;
static float cur_norm, inclination, lambda;

static void sd_disturb_process(v3_t a, v3_t m);

int thr_detect(v3_t a, v3_t b, float thr)
{
    if((fabs(a.x - b.x) < thr) && (fabs(a.y - b.y) < thr) && (fabs(a.z - b.z) < thr))
    {
        return CH_OK;
    }
    return CH_ERR;
}

static void sd_lin_detect(v3_t a)
{
    lin_flag = thr_detect(a, la, ACC_THR);
    la = a;
}

static void sd_rot_detect(v3_t g)
{
    v3_t zero;
    v_set(&zero, 0.0F);
    rot_flag = thr_detect(g, zero, GYO_THR);
}

static void sd_quasistatic_detect(v3_t a)
{
    if(fabs(v_norm(a) - 1.0F) < 0.02F)
    {
        quasistatic_flag = 0;
    }
    else
    {
        quasistatic_flag = 1; 
    }
}

int sd_detect(uint32_t opt)
{
    uint32_t r = 0;
    
    if(opt & SD_DETECT_LINEAR)
    {
        r |= lin_flag;
    }
    
    if(opt & SD_DETECT_ROTATION)
    {
        r |= rot_flag;
    }
    
    if(opt & SD_DETECT_QUASISTATIC)
    {
        r |= quasistatic_flag;
    }
    return r;
}

float sd_cal_inclination(v3_t a, v3_t m)
{
    float incli;
    /* get M world */
    q_t q;
    f1_get_q(&q);
    
    m = q_rot(q_conjugate(&q), m);
    
    /* Compensation of Magnetic Disturbances Improves  Inertial and Magnetic Sensing of Human Body Segment Orientation */
    incli = -atan2f(m.z, sqrtf(m.x * m.x + m.y * m.y));
    incli *= RadToDeg;
    
//    /* Accurate Orientation Estimation Using AHRS under Conditions of Magnetic Distortion */
//    v_normalize(&a);
//    v_normalize(&m);
//    
//    incli = -(PI/2 - acosf(v_dot(a, m)));
//    incli *= RadToDeg;
    return incli;
}


void sd_proc(v3_t a, v3_t g, v3_t m)
{
    sd_lin_detect(a);
    sd_rot_detect(g);
    sd_quasistatic_detect(a);
   // if(sd_detect(SD_DETECT_QUASISTATIC) == CH_OK)
    if(fabs(v_norm(m)) > 1.0)
    {
        inclination = sd_cal_inclination(a, m);
        sd_disturb_process(a, m);
    }
    
    
    
    if(sd_detect(SD_DETECT_QUASISTATIC) != CH_OK)
    {
        //lambda = 1.0F;
    }
}


float sd_disturb_result(void)
{
    return lambda;
}

/* beijing inclination: 59.3?a, declination, -6.49?a */
float sd_get_inclination(void)
{
    return inclination;
}

/* An Adaptive Orientation Estimation Method for Magnetic and Inertial Sensors in the Presence of Magnetic Disturbances */
static void sd_disturb_process(v3_t a, v3_t m)
{
//    cur_norm = v_norm(m);

//    float lambda1, lambda2;
//    lambda1 = fabs(cur_norm - imu.hsi_norm) / (40);
//    lambda2 = fabs(inclination - imu.hsi_inclination) / 6.0F;
//    if(lambda1 > 1)
//    {
//        lambda1 = 1.0F;
//    }
//        
//    if(lambda2 > 1)
//    {
//        lambda2 = 1.0F;
//    }
//        
//    lambda = (lambda1 + lambda2);
//    
//    if(lambda > 1)
//    {
//        lambda = 1.0F;
//    }
}



