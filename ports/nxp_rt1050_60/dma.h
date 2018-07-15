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

#ifndef __MICROPY_INCLUDED_STMHAL_DMA_H__
#define __MICROPY_INCLUDED_STMHAL_DMA_H__

#include "fsl_edma.h"

typedef union {
    uint32_t bmChnEn[2];
    uint8_t     counter[2];
} dma_idle_count_t;

void dma_init(uint32_t dmaNdx, uint32_t chnNdx);
// disable one channel, if all channels are disabled, Deinit DMA itself
void dma_deinit(uint32_t dmaNdx, uint32_t chnNdx);
// abort one channel
void dma_invalidate_channel(uint32_t dmaNdx, void *ph);
// called from systick to process DMA idle timer
void dma_idle_handler(uint32_t tick);

#endif //__MICROPY_INCLUDED_STMHAL_DMA_H__
