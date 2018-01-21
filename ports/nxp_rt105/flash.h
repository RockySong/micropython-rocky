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

#ifndef _FLASH_H_
#define _FLASH_H_

#define FLASH_BASE_ADDR			0x60000000
#define FLASH_KB_SIZE (64*1024)  // size in KB !

#define FLASH_DISK_BASE_ADDR	0x60400000
#define FLASH_PAGE_SIZE 		512
#define FLASH_DISK_SECTOR_CNT	32
#define SECTOR_SIZE 			(256*1024) // real sector size
// if sector size is too big, to save memory buffer, we only use part of a sector
// from the start of a real sector, this means remaining of the sector is wasted
#define SECTOR_USE_SIZE 		(32*1024) 
#define FLASH_DISK_SIZE			(SECTOR_USE_SIZE * FLASH_DISK_SECTOR_CNT)

int flexspi_nor_init(void);
int flexspi_nor_flash_erase_sector(FLEXSPI_Type *base, uint32_t address);
int flexspi_nor_flash_page_program(FLEXSPI_Type *base, uint32_t address, const uint32_t *src);





uint32_t flash_get_sector_info(uint32_t addr, uint32_t *start_addr, uint32_t *size);
void flash_erase(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32);
void flash_write(uint32_t flash_dest, const uint32_t *src, uint32_t num_word32);
#endif

