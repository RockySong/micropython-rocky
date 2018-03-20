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
#include <assert.h>
#include "fsl_common.h"
#include "fsl_flexspi.h"
#include "fsl_debug_console.h"

#include "pin_mux.h"
#include "board.h"
#include "clock_config.h"

#include "flash.h"
#include "mpconfigport.h"
#include "mpconfig.h"
#include "py/misc.h"

#define FLASH_BANK_1     ((uint32_t)1U) /*!< Bank 1   */
#define FLASH_BANK_SIZE (60*1024*1024)
typedef struct {
    uint32_t base_address;
    uint32_t sector_size;
    uint32_t sector_count;
} flash_layout_t;

void flash_erase(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32) {
	uint32_t sec0;
	uint32_t secCnt;
	uint32_t realAddr;
    // check there is something to write
    if (num_word32 == 0) {
        return;
    }
	sec0 = (flash_dest) / SECTOR_USE_SIZE;
	realAddr = FLASH_DISK_BASE_ADDR + sec0 * SECTOR_SIZE;
	secCnt = (num_word32 * 4 + SECTOR_USE_SIZE - 1) / SECTOR_USE_SIZE;

	while (secCnt--) {
		flexspi_nor_flash_erase_sector(FLEXSPI, realAddr);
		realAddr += SECTOR_SIZE;
	}	
}

void flash_write(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32) {
	uint32_t sec0, realAddr, pageCnt;
	// must start from a page base
	assert((flash_dest & (FLASH_PAGE_SIZE - 1)) == 0);
	// must read multiples of pages
	assert(((num_word32 * 4) & (FLASH_PAGE_SIZE - 1)) == 0);
    // check there is something to write
    if (num_word32 == 0) {
        return;
    }
	
	sec0 = flash_dest / SECTOR_USE_SIZE;
	pageCnt = (num_word32 * 4 + FLASH_PAGE_SIZE - 1) / FLASH_PAGE_SIZE;
	realAddr = FLASH_DISK_BASE_ADDR + sec0 * SECTOR_SIZE + (flash_dest & (SECTOR_USE_SIZE - 1));
	while(pageCnt--) {
		flexspi_nor_flash_page_program(FLEXSPI, realAddr, src);
		realAddr += FLASH_PAGE_SIZE;
		src += FLASH_PAGE_SIZE / sizeof(uint32_t);
	}
}


void flash_erase_and_write(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32) {
    // check there is something to write
	flash_erase(flash_dest, src, num_word32);
	flash_write(flash_dest, src, num_word32);
}

