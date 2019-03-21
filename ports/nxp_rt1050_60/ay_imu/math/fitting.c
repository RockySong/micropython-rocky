#include <math.h>
#include <stdio.h>
#include "fitting.h"

/* ÍÖÔ²ÄâºÏ ÐèÒª Col = 6 ¾ØÕó */
#define FITTING_DIM   (6)

float32_t DATMA_f32[FITTING_DIM*FITTING_DIM];
float32_t DATMA_INV_f32[FITTING_DIM*FITTING_DIM];
float32_t R4_f32[FITTING_DIM];
float32_t FinalV_f32[FITTING_DIM];

int fitting(const char *modle, arm_matrix_instance_f32 *sample, float *gain, float *bias)
{
    int i;
    uint32_t sample_total = sample->numRows;
    //printf("total sample:%d\r\n", sample_total);
    arm_status status;
    
    arm_matrix_instance_f32 DATMA;
    arm_matrix_instance_f32 DATMA_INV;
    arm_matrix_instance_f32 R4;
    arm_matrix_instance_f32 FinalV;

    arm_matrix_instance_f32 *D = arm_mat_create(sample_total, FITTING_DIM);
    arm_matrix_instance_f32 *DAT = arm_mat_create(FITTING_DIM, sample_total);
    
    arm_mat_init_f32(&DATMA, FITTING_DIM, FITTING_DIM, (float32_t *)DATMA_f32);
    arm_mat_init_f32(&DATMA_INV, FITTING_DIM, FITTING_DIM, (float32_t *)DATMA_INV_f32);
    arm_mat_init_f32(&R4, FITTING_DIM, 1, (float32_t *)R4_f32);
    arm_mat_init_f32(&FinalV, FITTING_DIM, 1, (float32_t *)FinalV_f32);

    float data_set[3];
    float ROW[FITTING_DIM];
    for(i=0; i<sample_total; i++)
    {
        arm_mat_get_row(data_set, sample, i);
        ROW[0] = data_set[0] * data_set[0];
        ROW[1] = data_set[1] * data_set[1];
        ROW[2] = data_set[2] * data_set[2];
        ROW[3] = data_set[0] * 2;
        ROW[4] = data_set[1] * 2;
        ROW[5] = data_set[2] * 2;
        arm_mat_set_row(ROW, D, i);
    }
    
    
    arm_mat_trans_f32(D, DAT);
    arm_mat_mult_f32(DAT, D, &DATMA);
    status = arm_mat_inverse_f32(&DATMA, &DATMA_INV);
    if(status != ARM_MATH_SUCCESS)
    {
        arm_mat_delete(D);
        arm_mat_delete(DAT);
        return status;
    }
    
    arm_mat_delete(D);
    
    arm_matrix_instance_f32 *ONES = arm_mat_create_ones(sample_total, 1);
    arm_mat_mult_f32(DAT, ONES, &R4);
    
    arm_mat_delete(ONES);
    arm_mat_delete(DAT);
    
    arm_mat_mult_f32(&DATMA_INV, &R4, &FinalV);
    
    //print_matrix(&FinalV);
    
    float v[9];

    /* ÍÖÇò */
    v[0] = FinalV.pData[0];
    v[1] = FinalV.pData[1];
    v[2] = FinalV.pData[2];
    v[3] = 0;
    v[4] = 0;
    v[5] = 0;
    v[6] = FinalV.pData[3];
    v[7] = FinalV.pData[4];
    v[8] = FinalV.pData[5];
    
    bias[0] = -v[6] / v[0];
    bias[1] = -v[7] / v[1];
    bias[2] = -v[8] / v[2];

    float G =  1 + v[6] * v[6] / v[0] + v[7] * v[7] / v[1] + v[8] * v[8] / v[2];
    gain[0] = sqrtf(G / v[0]);
    gain[1] = sqrtf(G / v[1]);
    gain[2] = sqrtf(G / v[2]);
    return 0;
}


float32_t A_f32[] =
{
    0.0713,    2.0561,   -2.9719,
   -0.3838,    2.0882,   -2.6589,
   -0.7347,    2.0669,   -1.8178,
   -0.9690,    2.0190,   -0.6218,
   -0.9067,    2.0369,    0.7551,
   -0.7776,    2.0461,    1.9223,
   -0.4267,    2.0982,    2.7973,
    0.0522,    2.0156,    3.0638,
    0.0097,    2.0856,   -2.9042,
   -0.1887,    1.3860,   -2.6788,
   -0.4057,    0.8151,   -1.8029,
   -0.5356,    0.4946,   -0.6387,
   -0.5929,    0.5184,    0.7347,
   -0.4215,    0.8257,    1.9400,
   -0.2187,    1.3336,    2.7097,
    0.0973,    2.0590,    3.0255,
    0.0649,    2.0226,   -2.9776,
    0.1766,    1.1925,   -2.6361,
    0.2194,    0.5338,   -1.7860,
    0.2602,    0.1242,   -0.6331,
    0.2995,    0.1281,    0.7456,
    0.1823,    0.5373,    1.9380,
    0.1099,    1.1805,    2.7036,
    0.0173,    2.0824,    3.0602,
    0.0391,    2.0983,   -2.9613,
    0.4741,    1.6965,   -2.6113,
    0.7847,    1.3559,   -1.8704,
    0.8844,    1.2124,   -0.6213,
    0.9183,    1.1648,    0.7100,
    0.7571,    1.4122,    1.9166,
    0.4326,    1.7115,    2.7799,
    0.0657,    2.0818,    3.0322,
    0.0628,    2.0261,   -2.9215,
    0.4201,    2.4359,   -2.6558,
    0.7476,    2.6807,   -1.8669,
    0.8799,    2.8885,   -0.6500,
};

void fitting_test(void)
{
    arm_matrix_instance_f32 sample;
    sample.numCols = 3;
    sample.numRows = ARRAY_SIZE(A_f32) / 3;
    sample.pData = A_f32;
    
    //printf("fitting Ellipsoid\r\n");
    float offset[3], gain[3];
    
    fitting("Ellipsoid", &sample, gain, offset);
}








