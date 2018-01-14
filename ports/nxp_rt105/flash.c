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
#include "fsl_flashiap.h"
#include "flash.h"
#include "mpconfigport.h"
#include "mpconfig.h"
#include "py/misc.h"

#define FLASH_BANK_1     ((uint32_t)1U) /*!< Bank 1   */
#define FLASH_PAGE_SIZE  256
#define FLASH_PHY_SEC_SIZE 32768   // The physical sector size of flash, not the 512 byte logical sector
#define FLASH_BASE 0
#define FLASH_BANK_SIZE (512*1024)
typedef struct {
    uint32_t base_address;
    uint32_t sector_size;
    uint32_t sector_count;
} flash_layout_t;

#if defined(LPC54608_SERIES)

static const flash_layout_t flash_layout[] = {
    { (uint32_t)0, (uint32_t)512, 1024},
};

#else
#error Unsupported processor
#endif

#if defined(MCU_SERIES_L4)

// get the bank of a given flash address
static uint32_t get_bank(uint32_t addr) {
    return FLASH_BANK_1;
}

// get the page of a given flash address
static uint32_t get_page(uint32_t addr) {
    if (addr < (FLASH_BASE + FLASH_BANK_SIZE)) {
        // bank 1
        return (addr - FLASH_BASE) / FLASH_PAGE_SIZE;
    } else {
        // bank 2
        return (addr - (FLASH_BASE + FLASH_BANK_SIZE)) / FLASH_PAGE_SIZE;
    }
}

#endif

uint32_t flash_get_sector_info(uint32_t addr, uint32_t *start_addr, uint32_t *size) {
    if (addr >= flash_layout[0].base_address) {
        uint32_t sector_index = 0;
        for (int i = 0; i < MP_ARRAY_SIZE(flash_layout); ++i) {
            for (int j = 0; j < flash_layout[i].sector_count; ++j) {
                uint32_t sector_start_next = flash_layout[i].base_address
                    + (j + 1) * flash_layout[i].sector_size;
                if (addr < sector_start_next) {
                    if (start_addr != NULL) {
                        *start_addr = flash_layout[i].base_address
                            + j * flash_layout[i].sector_size;
                    }
                    if (size != NULL) {
                        *size = flash_layout[i].sector_size;
                    }
                    return sector_index;
                }
                ++sector_index;
            }
        }
    }
    return 0;
}

void flash_erase(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32) {
	uint32_t sec0, page0, pageCnt, secCnt;
	uint32_t primask;
    // check there is something to write
    if (num_word32 == 0) {
        return;
    }

	primask = __get_PRIMASK();
	__set_PRIMASK(1);

	sec0 = flash_dest / FLASH_PHY_SEC_SIZE;
	page0 = flash_dest / FLASH_PAGE_SIZE;
	secCnt = (num_word32 * 4 + FLASH_PHY_SEC_SIZE - 1) / FLASH_PHY_SEC_SIZE;
	pageCnt = (num_word32 * 4+ FLASH_PAGE_SIZE - 1) / FLASH_PAGE_SIZE;
	FLASHIAP_PrepareSectorForWrite(sec0, sec0 + secCnt - 1);
	if (secCnt > 1) {
		uint32_t t1 = (secCnt - 1) * (FLASH_PHY_SEC_SIZE / FLASH_PAGE_SIZE);
		FLASHIAP_EraseSector(sec0, sec0 + secCnt - 2, SystemCoreClock);
		page0 += t1;
		pageCnt -= t1;
	}
	if (pageCnt > 0) {
		FLASHIAP_ErasePage(page0, page0 + pageCnt - 1, SystemCoreClock);
	}
	__set_PRIMASK(primask);
	
}

void flash_write(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32) {
	uint32_t sec0, secCnt;
	uint32_t c1Size, i;
	uint32_t primask;
	uint32_t tab[3] = {1024, 512, 256}; // allowed size of one write operation
	assert((flash_dest & (FLASH_PAGE_SIZE - 1)) == 0);
	assert(((num_word32 * 4) & (FLASH_PAGE_SIZE - 1)) == 0);
    // check there is something to write
    if (num_word32 == 0) {
        return;
    }
	
	primask = __get_PRIMASK();
	__set_PRIMASK(1);

	sec0 = flash_dest / FLASH_PHY_SEC_SIZE;
	secCnt = (num_word32 * 4 + FLASH_PHY_SEC_SIZE - 1) / FLASH_PHY_SEC_SIZE;
	c1Size = num_word32 * 4;
	FLASHIAP_PrepareSectorForWrite(sec0, sec0 + secCnt - 1);
	for (i=0; i<3; i++) {
		uint32_t c1Unit = tab[i];
		while (c1Size >= c1Unit) {
			FLASHIAP_CopyRamToFlash(flash_dest, (uint32_t*) src, c1Unit, SystemCoreClock);
			flash_dest += c1Unit , src += c1Unit / 4 , c1Size -= c1Unit;
		}
	}
	__set_PRIMASK(primask);

}


void flash_erase_and_write(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32) {
    // check there is something to write
	flash_erase(flash_dest, src, num_word32);
	flash_write(flash_dest, src, num_word32);
}

