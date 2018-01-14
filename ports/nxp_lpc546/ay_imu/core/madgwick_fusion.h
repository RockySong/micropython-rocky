#ifndef __MADGWICK_FUSION_H__
#define __MADGWICK_FUSION_H__

#include "vector.h"

void madgwick_ahrs_update(q_t *q, v3_t g, v3_t a, v3_t m, float deltaT);

#endif
