#include <stdio.h>
#include <rtthread.h>
#include "math_helper.h"


void print_matrix(arm_matrix_instance_f32 *m)
{
    int r,c;
    printf("%dx%d matrix:\r\n", m->numRows, m->numCols);
    for(r=0; r< m->numRows; r++)
    {
        for(c=0; c<m->numCols; c++)
        {
            printf("%8.3f ", m->pData[r*m->numCols + c]);
        }
        printf(";\r\n");
    }
}


void arm_mat_fill(arm_matrix_instance_f32 *M, float data)
{
    int i;
    for(i=0; i<M->numCols * M->numRows; i++)
    {
        M->pData[i] = 1.0F;
    }
}

void arm_mat_get_col(float *V, arm_matrix_instance_f32 *M, int col)
{
    int i;
    for(i=0; i<M->numRows; i++)
    {
        V[i] = M->pData[col + i * M->numCols];
    }
}

void arm_mat_get_row(float *V, arm_matrix_instance_f32 *M, int row)
{
    int i;
    for(i=0; i<M->numCols; i++)
    {
        V[i] = M->pData[i + row * M->numCols];
    }
}

void arm_mat_add_row(float *V, arm_matrix_instance_f32 *M)
{
    int i;
    for(i=0; i<M->numCols; i++)
    {
        M->pData[M->numRows*M->numCols + i] = V[i];
    }
    
    M->numRows++;
}

void arm_mat_set_row(float *V, arm_matrix_instance_f32 *M, int row)
{
    int i;
    for(i=0; i<M->numCols; i++)
    {
        M->pData[row * M->numCols + i] = V[i];
    }
}

arm_matrix_instance_f32 *arm_mat_create(uint16_t row, uint16_t col)
{
    arm_matrix_instance_f32 *instance = rt_malloc(sizeof(arm_matrix_instance_f32));
    instance->numCols = col;
    instance->numRows = row;
    instance->pData = rt_malloc(row * col * sizeof(float));
    if(instance->pData == RT_NULL)
    {
        printf("malloc data failed\r\n");
        while(1);
    }
    return instance;
}

arm_matrix_instance_f32 *arm_mat_create_ones(uint16_t row, uint16_t col)
{
    arm_matrix_instance_f32 *instance = arm_mat_create(row, col);
    arm_mat_fill(instance, 1.0F);
    return instance;
}

void arm_mat_delete(arm_matrix_instance_f32 *m)
{
    rt_free(m->pData);
    rt_free(m);
}

float *arm_create(uint16_t size)
{
    float *instance = rt_malloc(size* sizeof(float));
    if(instance == RT_NULL)
    {
        printf("malloc data failed\r\n");
        while(1);
    }
    return instance;
}

void arm_delete(float *instance)
{
    rt_free(instance);
}

