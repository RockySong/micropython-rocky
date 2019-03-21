#ifndef __FUSION_H__
#define __FUSION_H__

#include "../math/quaternion.h"
#include "../math/vector.h"
#include "../math/dcm.h"

void mahony_imu_update(q_t *q, v3_t g, v3_t a, float deltaT);
v3_t fusion_get_gravity(q_t* q);

float f1_get_magnetic_inclination(void);
float f1_get_magnetic_disturb(void);
void f1_set_acc_gain(float gain);
void f1_set_mag_gain(float gain);
void f1_set_mag_thr(float thr_bypass, float thr_return);
void f1_ahrs_update(q_t *q, v3_t g, v3_t a, v3_t m, float deltaT);
bool f1_init(q_t *q, v3_t a, v3_t m);
void f1_set_calibrated_magnetic_inclination(float inclination);
void f1_set_calibrated_magetic_norm(float norm);
void f1_get_q(q_t *q);

q_t qacc(v3_t va);
q_t qmag(v3_t vm);

#endif




