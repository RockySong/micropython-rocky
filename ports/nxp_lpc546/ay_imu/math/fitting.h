#ifndef __FITTING_H__
#define __FITTING_H__


#include <stdint.h>
#include <stdbool.h>
#include "math_helper.h"

int fitting(const char *modle, arm_matrix_instance_f32 *sample, float *gain, float *offset);
void fitting_test(void);


#endif

