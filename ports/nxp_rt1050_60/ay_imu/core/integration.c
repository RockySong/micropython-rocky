#include <math.h>
#include "integration.h"


/* https://math.stackexchange.com/questions/1693067/differences-between-quaternion-integration-methods */

static void _normalize(q_t *q)
{
    if(fabs(q_norm(q) - 1.0F) > 0.001F)
    {
        q_normalize(q);
    }
}

/* 1 older eular, 1×ÖÑù */
void quat_integration_eular_1st(q_t *q, v3_t vg, float t)
{
    q_t qr;
    
    vg = v_scaler(vg, t);
    float mag = v_norm(vg);
    
    /* methed1 */
    qr.w = cos(mag/2);
    qr.x = vg.x*sin(mag/2)/mag;
    qr.y = vg.y*sin(mag/2)/mag;
    qr.z = vg.z*sin(mag/2)/mag;
    
    *q = q_mul(q, &qr);
    
    _normalize(q);
}

/* 2 older eular, 2×ÖÑù */
void quat_integration_eular_2st(q_t *q, v3_t vg, float t)
{
    q_t qr;
    static v3_t vg_l1, vg_l2, theta1, theta2, vt;
    float mag;
    
    theta1 = v_scaler(v_add(vg_l2, vg_l1), (t/4));
    theta2 = v_scaler(v_add(vg_l1, vg), (t/4));
    
    vt = v_scaler(v_cross(theta1, theta2), 2.0F/3.0F);
    theta1 = v_add(v_add(theta1 , theta2), vt);
    mag = v_norm(theta1);

    qr.w = cos(mag/2);
    qr.x = theta1.x*sin(mag/2)/mag;
    qr.y = theta1.y*sin(mag/2)/mag;
    qr.z = theta1.z*sin(mag/2)/mag;
    
    *q = q_mul(q, &qr);
    
    _normalize(q);
    
    vg_l1 = vg;
    vg_l2 = vg_l1;
}


/* ±Ï¿¨·¨ 1st world -> local */
void quat_integration_bk(q_t *q, v3_t vg, float t)
{
    q_t qr, q_temp;
    
    qr.w = 0;
    qr.x = vg.x*t/2;
    qr.y = vg.y*t/2;
    qr.z = vg.z*t/2;
    
    q_temp = q_mul(q, &qr);
    *q = q_add(q, &q_temp);
    
    /* both need to normalize */
    _normalize(q);
}











