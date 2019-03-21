#ifndef __MATH_HELPER_H__
#define __MATH_HELPER_H__

#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "arm_math.h"


#ifndef ARRAY_SIZE
#define ARRAY_SIZE(x)	(sizeof(x) / sizeof((x)[0]))
#endif

void print_matrix(arm_matrix_instance_f32 *m);
void arm_mat_fill(arm_matrix_instance_f32 *M, float data);

void arm_mat_get_col(float *V, arm_matrix_instance_f32 *M, int col);
void arm_mat_get_row(float *V, arm_matrix_instance_f32 *M, int row);
void arm_mat_add_row(float *V, arm_matrix_instance_f32 *M);
void arm_mat_set_row(float *V, arm_matrix_instance_f32 *M, int row);

arm_matrix_instance_f32 *arm_mat_create(uint16_t row, uint16_t col);
arm_matrix_instance_f32 *arm_mat_create_ones(uint16_t row, uint16_t col);
void arm_mat_delete(arm_matrix_instance_f32 *m);

float *arm_create(uint16_t size);
void arm_delete(float *instance);

#endif


