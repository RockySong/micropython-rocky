/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
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
#ifndef _STORAGE_H_
#define _STORAGE_H_
#include "flash.h"

/* must set the block_size == 1, and sector_size = 4096? why?*/
#define PAGE_SIZE (256)
#define SECTOR_SIZE 0x1000 /* 4K */
#define MAX_FLASH_SIZE (0x800000)
// 4096 if FF_MAX_SS != FF_MIN_SS; else 512; especially for spi flash
#define FLASH_BLOCK_SIZE (512) 
// maybe the MP use more space than the usual fatfs
#define TOTAL_FLASH_SIZE (FLASH_BLOCK_SIZE * 2048)
#define SECTOR_OFFSET (MAX_FLASH_SIZE - TOTAL_FLASH_SIZE)    /* 16K */
// must bigget than 128s, ff.c 5577, so TOTAL_FLASH_SIZE > 0x100000
#define FLASH_NUM_BLOCKS (TOTAL_FLASH_SIZE / FLASH_BLOCK_SIZE)
#define FLASH_PART1_NUM_BLOCKS FLASH_NUM_BLOCKS
#define FLASH_MEM_BASE FlexSPI_AMBA_BASE
// offset, from the 16k -> end
#define FLASH_PART1_START_BLOCK 0x100
#define FLASH_ADDR_OFFSET SECTOR_OFFSET
#define MICROPY_HW_SPIFLASH_SIZE_BITS (TOTAL_FLASH_SIZE * 8)

#define STORAGE_SYSTICK_MASK    (0x1ff) // 512 ticks
#define STORAGE_IDLE_TICK(tick) (((tick) & STORAGE_SYSTICK_MASK) == 2)
#if defined(MICROPY_HW_SPIFLASH_SIZE_BITS)
#define USE_INTERNAL (0)
#else
#define USE_INTERNAL (1)
#endif

// mpy automatically flush flash cache in a timely manner, to avoid doing it in high priority SysTick IRQ handler,
// it manually fires another low priority IRQ just like Pend SV's style, we borrow the reserved 46 IRQ in LPC546xx
#define TRIGGER_FLASH_IRQ()	NVIC->STIR = Reserved168_IRQn	// borrow this reserved IRQ number to simulate flash IRQ

typedef enum cur_media_enum
{
	cur_media_iflash,
	cur_media_spi,
	cur_media_mspi,	// multi line spi
	cur_media_sdcard,
}cur_media_enum;

#ifdef _STORAGE_C_
uint8_t s_curMedia;
#else
extern const uint8_t s_curMedia;	// current media type
#endif

void storage_init(void);
uint32_t storage_get_block_size(void);
uint32_t storage_get_block_count(void);
uint32_t storage_get_block_offset(void);

void storage_irq_handler(void);
void storage_flush(void);
bool storage_read_block(uint8_t *dest, uint32_t block);
bool storage_write_block(const uint8_t *src, uint32_t block);

// these return 0 on success, non-zero on error
uint32_t storage_read_blocks(uint8_t *dest, uint32_t block_num, uint32_t num_blocks);
uint32_t storage_write_blocks(const uint8_t *src, uint32_t block_num, uint32_t num_blocks);

extern const struct _mp_obj_type_t pyb_flash_type;
extern const struct _mp_obj_base_t pyb_flash_obj;

struct _fs_user_mount_t;
void pyb_flash_init_vfs(struct _fs_user_mount_t *vfs);
#endif
