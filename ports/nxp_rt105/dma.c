/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "fsl_edma.h"
#include "hal_wrapper.h"
#include "dma.h"
#include "py/obj.h"
#include "irq.h"

volatile dma_idle_count_t dma_idle;

#define DMA_INVALID_CHANNEL 0xff    // Value stored in dma_last_channel which means invalid
#if 0
void dma_init(uint32_t dmaNdx, uint32_t chnNdx){
	assert(dmaNdx == 0);
	uint32_t bmOldChnEn;

	HAL_ENTER_CRITICAL();
		bmOldChnEn = dma_idle.bmChnEn[dmaNdx];
		dma_idle.bmChnEn[dmaNdx] = bmOldChnEn | 1 << chnNdx;
		if (0 == bmOldChnEn)
			DMA_Init(DMA0);
		HAL_NVIC_SetPriority(DMA0_IRQn, IRQ_PRI_DMA, IRQ_SUBPRI_DMA);
	HAL_LEAVE_CRITICAL();
	
	DMA_EnableChannel(DMA0, chnNdx);
}

void dma_deinit(uint32_t dmaNdx, uint32_t chnNdx) {
	assert(dmaNdx == 0);

	HAL_ENTER_CRITICAL();
		dma_idle.bmChnEn[dmaNdx] &= ~(1 << chnNdx);
		if (0 == dma_idle.bmChnEn[dmaNdx]) {
			DMA_Deinit(DMA0);
			CLOCK_DisableClock(kCLOCK_Dma);
			NVIC_DisableIRQ(DMA0_IRQn);
		}
	HAL_LEAVE_CRITICAL();
}

void dma_invalidate_channel(uint32_t dmaNdx, dma_handle_t *ph) {
	assert(dmaNdx == 0);
	if (ph != NULL) {
		DMA_AbortTransfer(ph);
	}
}

// Called from the SysTick handler
// We use LSB of tick to select which controller to process
void dma_idle_handler(uint32_t tick) {
    int controller = tick & 1;
    if (controller != 0) {
        return;
    }
	if (dma_idle.bmChnEn[controller] == 0) {
		if (++dma_idle.counter[controller] > 200) {
			dma_deinit(controller, 0);	// use a dummy channel index
		}
	}
}

#endif