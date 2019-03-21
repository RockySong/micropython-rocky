#include <math.h>
#include <stdio.h>
#include <assert.h>
#include "integration.h"
#include "fusion.h"
#include "state_detect.h"


#define PI              3.1415926f


/* q is that rotation the change world -> body */
static float mahony_Kp = 2.0F;

void mahony_set_gain(float gain)
{
    mahony_Kp = gain;
}

void mahony_imu_update(q_t *q, v3_t g, v3_t a, float deltaT)
{
	volatile q_t qr;

    v3_t a2, e;
    v3_t graviy;
    
    graviy.x = 0;
    graviy.y = 0;
    graviy.z = -1;

	// Compute feedback only if accelerometer measurement valid (avoids NaN in accelerometer normalisation)
	if(fabs(v_norm(a)) > 0.001F)
    {
        // Normalise accelerometer measurement
        v_normalize(&a);   

        // Estimated direction of gravity and vector perpendicular to magnetic flux
        a2 =  q_rot(*q, graviy);
	
        // Error is sum of cross product between estimated and measured direction of gravity
        e = v_cross(a2, a);
        
		// Apply proportional feedback
        v_scaler(e, mahony_Kp);
        g = v_add(g, e);
	}

	// Integrate rate of change of quaternion
    quat_integration_eular_1st(q, g, deltaT);
}





/* Keeping a Good Attitude: A Quaternion-Based Orientation Filter for IMUs and MARGs */

float f1_kp_acc = 1.0F;
float f1_kp_mag = 1.0F;
static q_t q_idt = {1.0F, 0.0F, 0.0F, 0.0F};
static q_t IMUQ = {1.0F, 0.0F, 0.0F, 0.0F};

    
void f1_set_acc_gain(float gain)
{
    f1_kp_acc = gain;
}

void f1_set_mag_gain(float gain)
{
    f1_kp_mag = gain;
}



bool f1_init(q_t *q, v3_t a, v3_t m)
{
    bool ret_a = false;
    bool ret_m = false;
    
    q_t qa, qm;
    float norm_a, norm_m;
 
    norm_a = v_norm(a);
    norm_m = v_norm(m);
    
    if(norm_a > 0.5F)
    {
        if(a.z >= 0)
        {
            qa.w = sqrtf((a.z + 1) / 2);
            qa.x = -(a.y / sqrtf(2*(a.z + 1)));
            qa.y = a.x / sqrtf(2*(a.z + 1));
            qa.z = 0;
        }
        else
        {
            qa.w = -(a.y / sqrtf(2*(1 - a.z)));
            qa.x = sqrtf((1 - a.z) / 2);
            qa.y = 0;
            qa.z = a.x / sqrtf(2*(1 - a.z));
        }
        ret_a = true;
    }
    
    if(norm_m < 600.0F && norm_m > 200.0F)
    {
        float GAMMA = m.x * m.x + m.y * m.y;
        if(m.x >= 0)
        {
            qm.w = sqrtf(GAMMA + m.x*sqrtf(GAMMA)) / sqrtf(2*GAMMA);
            qm.x = 0;
            qm.y = 0;
            qm.z = m.y / (sqrtf(2*(GAMMA + m.x*sqrtf(GAMMA))));
        }
        else
        {
            qm.w = m.y / (sqrtf(2*(GAMMA - m.x*sqrtf(GAMMA))));
            qm.x = 0;
            qm.y = 0;
            qm.z = sqrtf(GAMMA - m.x*sqrtf(GAMMA)) / sqrtf(2*GAMMA);
        }
        ret_m = true;
    }
    
    *q = q_mul(&qa, &qm);
    *q = q_conjugate(q);

    return (ret_a && ret_m);
    
}

void f1_get_q(q_t *q)
{
    *q = IMUQ;
}

void f1_ahrs_update(q_t *qqq, v3_t g, v3_t a, v3_t m, float deltaT)
{
    float norm_a, norm_m, em;
    float acc_gain;
    norm_a = v_norm(a);
    norm_m = v_norm(m);
    
    /* gyroscope intergation */
    quat_integration_bk(&IMUQ, g, deltaT);
    //quat_integration_eular_1st(&IMUQ, g, deltaT);
    //quat_integration_eular_2st(&IMUQ, g, deltaT);
//    if(sd_detect(SD_DETECT_QUASISTATIC) == 1)
//    {
//        return;
//    }
	if(fabs(v_norm(a) - 1.0) > 0.1)
	{
		return;
	}
    
    /* get G world */
    a = q_rot(q_conjugate(&IMUQ), a);
    v_normalize(&a);
    
    q_t delta_a;
    delta_a.w = sqrtf((a.z + 1) / 2);
    delta_a.x = - a.y / sqrtf(2*(a.z + 1));
    delta_a.y =   a.x / sqrtf(2*(a.z + 1));
    delta_a.z = 0;

    /* calculate gravity correction gain */
    em = fabs(norm_a - 1.0F);
    if(em < 0.1F)
    {
        acc_gain = 1.0F;
    }
    else if(em > 0.2F)
    {
        acc_gain = 0.0F;
    }
    else
    {
        acc_gain = -10*em + 2.0F;
    }
    
    acc_gain  = f1_kp_acc * acc_gain;
    
    delta_a = q_slerp(&q_idt, &delta_a, acc_gain);
    
    /* implment gravity correction */
    IMUQ = q_sub(&delta_a, &IMUQ);
    
    /* magnatic correction */
    if(norm_m == 0.0F)
    {
        return;
    }
    
    /* get M world */
    m = q_rot(q_conjugate(&IMUQ), m);

    q_t delta_m;
    float GAMMA = m.x * m.x + m.y * m.y;
    
    delta_m.w = sqrtf(GAMMA + m.x*sqrtf(GAMMA)) / sqrtf(2*GAMMA);
    delta_m.x = 0;
    delta_m.y = 0;
    delta_m.z = m.y / (sqrtf(2*(GAMMA + m.x*sqrtf(GAMMA))));
    
    /* cal Macc */
//    delta_m = q_slerp(&q_idt, &delta_m, (1 - sd_disturb_result())*f1_kp_mag);

//    IMUQ = q_sub(&delta_m, &IMUQ);
}

v3_t fusion_get_gravity(q_t* q)
{
    v3_t graviy;
    
    graviy.x = 0;
    graviy.y = 0;
    graviy.z = 1;
    
    graviy = q_rot(*q, graviy);
    return graviy;
}

/*  
    change gravity to quat, yaw is always 180, va must be norm
    Quaternion from Accelerometer Readings
*/

q_t qacc(v3_t va)
{
    q_t q;
    if(va.z >= 0)
    {
        q.w = sqrtf((va.z + 1) / 2);
        q.x = -(va.y / sqrtf(2*(va.z + 1)));
        q.y = va.x / sqrtf(2*(va.z + 1));
        q.z = 0;
    }
    else
    {
        q.w = -(va.y / sqrtf(2*(1 - va.z)));
        q.x = sqrtf((1 - va.z) / 2);
        q.y = 0;
        q.z = va.x / sqrtf(2*(1 - va.z));
    }

    return q;
}

q_t qmag(v3_t vm)
{
    q_t q;
    float GAMMA = vm.x * vm.x + vm.y * vm.y;
    if(vm.x >= 0)
    {
        q.w = sqrtf(GAMMA + vm.x*sqrtf(GAMMA)) / sqrtf(2*GAMMA);
        q.x = 0;
        q.y = 0;
        q.z = vm.y / (sqrtf(2*(GAMMA + vm.x*sqrtf(GAMMA))));
    }
    else
    {
        q.w = vm.y / (sqrtf(2*(GAMMA - vm.x*sqrtf(GAMMA))));
        q.x = 0;
        q.y = 0;
        q.z = sqrtf(GAMMA - vm.x*sqrtf(GAMMA)) / sqrtf(2*GAMMA);
    }
    return q;
}

