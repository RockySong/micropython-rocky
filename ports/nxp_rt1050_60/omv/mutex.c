/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Mutex.
 *
 */
#include "hal_wrapper.h"
#include "mutex.h"

// This is a standard implementation of mutexs on ARM processors following the ARM guide.
// http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dai0321a/BIHEJCHB.html

void mutex_init(mutex_t *mutex)
{
    __DMB();
    mutex->tid = 0;
    mutex->lock = 0;
}

void mutex_lock(mutex_t *mutex, uint32_t tid)
{
    volatile int locked = 0;
    // Wait for mutex to be unlocked
    do {
        // Attempt exclusive read
        while (__LDREXW(&mutex->lock) != 0);

        // Attempt to lock mutex
        locked = __STREXW(1, &mutex->lock);

        // Set TID if mutex is locked
        if (locked == 0) {
            mutex->tid = tid;
        }
    } while (locked != 0);

    __DMB();
}

volatile uint32_t s_ideLockFailTick;	// Improve preview FPS in OpenMV IDE
volatile uint8_t s_ideLockFailFlag;
volatile uint32_t s_waitTick = 5;
int mutex_try_lock(mutex_t *mutex, uint32_t tid)
{
    volatile int locked = 1;
	uint32_t t1 = HAL_GetTick();
    // If mutex is already locked by the current thread then
    // release the Kraken err.. the mutex, else attempt to lock it.
    
    if (mutex->tid == tid) {
        mutex_unlock(mutex, tid);
    } else {
    	// reserve some time slot to let IDE to have more change to grab jpeg buffer
    	if (s_ideLockFailFlag) {
			if (t1 - s_ideLockFailTick < s_waitTick)
				goto cleanup;
    	}
	    if (__LDREXW(&mutex->lock) == 0) {
	        // Attempt to lock the mutex
	        locked = __STREXW(1, &mutex->lock);
	        __DMB();

	        // Set TID if mutex is locked
	        if (locked == 0) {
	            mutex->tid = tid;
				if (tid == MUTEX_TID_IDE) {
					s_ideLockFailFlag = 0;
				}
	        } else {
				if (tid == MUTEX_TID_IDE) {
					s_ideLockFailFlag = 1;
					s_ideLockFailTick = HAL_GetTick();
				}
	        }
	    }
	}
cleanup:
    return (locked == 0);
}

void mutex_unlock(mutex_t *mutex, uint32_t tid)
{
    if (mutex->tid == tid) {
        __DMB();
        mutex->tid = 0;
        mutex->lock = 0;
    }
}
