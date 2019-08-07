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
 // storage.c only process on-chip or off-chip flash, do NOT process SD card
 // for SD card related, see "sdcard.c"
#define _STORAGE_C_	// shows that we are in "storage.c" file
#include <stdint.h>
#include <string.h>

#include "py/obj.h"
#include "py/runtime.h"
#include "lib/oofatfs/ff.h"
#include "extmod/vfs_fat.h"
#include "hal_wrapper.h"
#include "systick.h"
#include "flegftl.h"
#include "flash_pgm.h"
#include "led.h"
#include "storage.h"

#if defined(MICROPY_HW_SPIFLASH_SIZE_BITS)
#define USE_INTERNAL (0)
#else
#define USE_INTERNAL (1)
#endif

#if 1 // USE_INTERNAL
	uint64_t s_c8FlhCache[FLEG_PAGE_SIZE / 8];	
	FlegDevice_t s_dev;
	#if 1 // defined(LPC54608) 
		#define CACHE_MEM_START_ADDR (s_c8FlhCache) // CCM data RAM, 64k
		#define FLASH_SECTOR_SIZE_MAX SECTOR_USE_SIZE
		#define FLASH_MEM_SEG1_START_ADDR FLASH_DISK_BASE_ADDR
		#define FLASH_MEM_SEG1_NUM_BLOCKS (FLASH_DISK_SIZE / FLASH_BLOCK_SIZE)
	#else
		#error "no storage support for this MCU"
	#endif

	#if !defined(FLASH_MEM_SEG2_START_ADDR)
		#define FLASH_MEM_SEG2_START_ADDR (0) // no second segment
		#define FLASH_MEM_SEG2_NUM_BLOCKS (0) // no second segment
	#endif

	#define FLASH_PART1_START_BLOCK 123
	#define FLASH_PART1_NUM_BLOCKS FLEG_LPU_CNT

	#define FLASH_FLAG_DIRTY        (1)
	#define FLASH_FLAG_FORCE_WRITE  (2)
	#define FLASH_FLAG_ERASED       (4)
	static bool flash_is_initialised = false;
	static __IO uint8_t flash_flags = 0;
	static uint32_t flash_cache_lba_id;
	static uint32_t flash_tick_counter_last_write;

	static void flash_cache_flush(void) {
		if (flash_flags & FLASH_FLAG_DIRTY) {
			flash_flags |= FLASH_FLAG_FORCE_WRITE;
			while (flash_flags & FLASH_FLAG_DIRTY) {
			   TRIGGER_FLASH_IRQ();
			}
		}

	}

#else

	#include "drivers/memory/spiflash.h"
	#include "genhdr/pins.h"

	#define FLASH_PART1_START_BLOCK (0x100)
	#define FLASH_PART1_NUM_BLOCKS (MICROPY_HW_SPIFLASH_SIZE_BITS / 8 / FLASH_BLOCK_SIZE)

	static bool flash_is_initialised = false;

	STATIC const mp_spiflash_t spiflash = {
	    .cs = &MICROPY_HW_SPIFLASH_CS,
	    .spi = {
	        .base = {&mp_machine_soft_spi_type},
	        .delay_half = MICROPY_PY_MACHINE_SPI_MIN_DELAY,
	        .polarity = 0,
	        .phase = 0,
	        .sck = &MICROPY_HW_SPIFLASH_SCK,
	        .mosi = &MICROPY_HW_SPIFLASH_MOSI,
	        .miso = &MICROPY_HW_SPIFLASH_MISO,
	    },
	};

#endif

void storage_init(void) {
    if (!flash_is_initialised) {
        #if USE_INTERNAL
	        flash_flags = 0;
	        flash_cache_lba_id = 0;
	        flash_tick_counter_last_write = 0;			
			FlashPgmInit();
			#ifndef XIP_EXTERNAL_FLASH
				FLEG_Init(&s_dev, 0, HyperErase, HyperPageProgram, Hyper16bitProgram, HyperRead, HyperFlush);
			#endif
        #else
        mp_spiflash_init((mp_spiflash_t*)&spiflash);
        #endif
        flash_is_initialised = true;
    }
	NVIC_EnableIRQ(Reserved168_IRQn);  // reserved IRQ is borrowed to trigger flash cache flush
    #if USE_INTERNAL
	#if 0
    // Enable the flash IRQ, which is used to also call our storage IRQ handler
    // It needs to go at a higher priority than all those components that rely on
    // the flash storage (eg higher than USB MSC).
    HAL_NVIC_SetPriority(FLASH_IRQn, IRQ_PRI_FLASH, IRQ_SUBPRI_FLASH);
    HAL_NVIC_EnableIRQ(FLASH_IRQn);
	#endif
    #endif
}

uint32_t storage_get_block_size(void) {
    return FLEG_PAGE_SIZE;
}

uint32_t storage_get_block_count(void) {
	return FLEG_LPU_CNT;
}

uint32_t storage_get_block_offset(void)
{
	return 0;
}

void storage_flush(void) {
    #if USE_INTERNAL
    flash_cache_flush();
	#else
	#error "TBI"
    #endif
}

static void build_partition(uint8_t *buf, int boot, int type, uint32_t start_block, uint32_t num_blocks) {
    buf[0] = boot;

    if (num_blocks == 0) {
        buf[1] = 0;
        buf[2] = 0;
        buf[3] = 0;
    } else {
        buf[1] = 0xff;
        buf[2] = 0xff;
        buf[3] = 0xff;
    }

    buf[4] = type;

    if (num_blocks == 0) {
        buf[5] = 0;
        buf[6] = 0;
        buf[7] = 0;
    } else {
        buf[5] = 0xff;
        buf[6] = 0xff;
        buf[7] = 0xff;
    }

    buf[8] = start_block;
    buf[9] = start_block >> 8;
    buf[10] = start_block >> 16;
    buf[11] = start_block >> 24;

    buf[12] = num_blocks;
    buf[13] = num_blocks >> 8;
    buf[14] = num_blocks >> 16;
    buf[15] = num_blocks >> 24;
}

#if USE_INTERNAL

#endif

bool storage_read_block(uint8_t *dest, uint32_t block) {
    //printf("RD %u\n", block);
    if (block == 0) {
        // fake the MBR so we can decide on our own partition table

        for (int i = 0; i < 446; i++) {
            dest[i] = 0;
        }

        build_partition(dest + 446, 0, 0x01 /* FAT12 */, FLASH_PART1_START_BLOCK, FLASH_PART1_NUM_BLOCKS);
        build_partition(dest + 462, 0, 0, 0, 0);
        build_partition(dest + 478, 0, 0, 0, 0);
        build_partition(dest + 494, 0, 0, 0, 0);

        dest[510] = 0x55;
        dest[511] = 0xaa;

        return true;

    } else {
        #if USE_INTERNAL
		int ret = FLEG_PageRead(&s_dev, block, dest);
      	return ret >= 0 ? true:false;
        #else

	        // non-MBR block, get data from SPI flash

	        if (block < FLASH_PART1_START_BLOCK || block >= FLASH_PART1_START_BLOCK + FLASH_PART1_NUM_BLOCKS) {
	            // bad block number
	            return false;
	        }

	        // we must disable USB irqs to prevent MSC contention with SPI flash
	        uint32_t basepri = raise_irq_pri(IRQ_PRI_OTG_FS);

	        mp_spiflash_read((mp_spiflash_t*)&spiflash,
	            (block - FLASH_PART1_START_BLOCK) * FLASH_BLOCK_SIZE, FLASH_BLOCK_SIZE, dest);

	        restore_irq_pri(basepri);

	        return true;

        #endif
    }
}

bool storage_write_block(const uint8_t *src, uint32_t block) {
    //printf("WR %u\n", block);
    if (block == 0) {
        // can't write MBR, but pretend we did
        return true;

    } else {
        #if USE_INTERNAL
		int ret = FLEG_PageWrite(&s_dev, block, src);
		return ret >= 0 ? true : false;
        #else
	        // non-MBR block, write to SPI flash

	        if (block < FLASH_PART1_START_BLOCK || block >= FLASH_PART1_START_BLOCK + FLASH_PART1_NUM_BLOCKS) {
	            // bad block number
	            return false;
	        }

	        // we must disable USB irqs to prevent MSC contention with SPI flash
	        uint32_t basepri = raise_irq_pri(IRQ_PRI_OTG_FS);

	        int ret = mp_spiflash_write((mp_spiflash_t*)&spiflash,
	            (block - FLASH_PART1_START_BLOCK) * FLASH_BLOCK_SIZE, FLASH_BLOCK_SIZE, src);

	        restore_irq_pri(basepri);

	        return ret == 0;
        #endif
    }
}

mp_uint_t storage_read_blocks(uint8_t *dest, uint32_t block_num, uint32_t num_blocks) {
    for (size_t i = 0; i < num_blocks; i++) {
        if (!storage_read_block(dest + i * FLASH_BLOCK_SIZE, block_num + i)) {
            return 1; // error
        }
    }
    return 0; // success
}

mp_uint_t storage_write_blocks(const uint8_t *src, uint32_t block_num, uint32_t num_blocks) {
    for (size_t i = 0; i < num_blocks; i++) {
        if (!storage_write_block(src + i * FLASH_BLOCK_SIZE, block_num + i)) {
            return 1; // error
        }
    }
    return 0; // success
}

void storage_irq_handler(void) {
    #if USE_INTERNAL

    if (!(flash_flags & FLASH_FLAG_DIRTY)) {
        return;
    }

    // If not a forced write, wait at least 5 seconds after last write to flush
    // On file close and flash unmount we get a forced write, so we can afford to wait a while
    if ((flash_flags & FLASH_FLAG_FORCE_WRITE) || sys_tick_has_passed(flash_tick_counter_last_write, 5000)) {
		FLEG_PageWrite(&s_dev, flash_cache_lba_id, s_c8FlhCache);
        flash_flags = 0;
        // indicate a clean cache with LED off
        led_state(PYB_LED_RED, 0);
    }

    #endif
}


/******************************************************************************/
// MicroPython bindings
//
// Expose the flash as an object with the block protocol.

// there is a singleton Flash object
STATIC const mp_obj_base_t pyb_flash_obj = {&pyb_flash_type};

STATIC mp_obj_t pyb_flash_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    // check arguments
    mp_arg_check_num(n_args, n_kw, 0, 0, false);

    // return singleton object
    return (mp_obj_t)&pyb_flash_obj;
}

STATIC mp_obj_t pyb_flash_readblocks(mp_obj_t self, mp_obj_t block_num, mp_obj_t buf) {
    mp_buffer_info_t bufinfo;
    mp_get_buffer_raise(buf, &bufinfo, MP_BUFFER_WRITE);
    mp_uint_t ret = storage_read_blocks(bufinfo.buf, mp_obj_get_int(block_num), bufinfo.len / FLASH_BLOCK_SIZE);
    return MP_OBJ_NEW_SMALL_INT(ret);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_flash_readblocks_obj, pyb_flash_readblocks);

STATIC mp_obj_t pyb_flash_writeblocks(mp_obj_t self, mp_obj_t block_num, mp_obj_t buf) {
    mp_buffer_info_t bufinfo;
    mp_get_buffer_raise(buf, &bufinfo, MP_BUFFER_READ);
    mp_uint_t ret = storage_write_blocks(bufinfo.buf, mp_obj_get_int(block_num), bufinfo.len / FLASH_BLOCK_SIZE);
    return MP_OBJ_NEW_SMALL_INT(ret);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_flash_writeblocks_obj, pyb_flash_writeblocks);

STATIC mp_obj_t pyb_flash_ioctl(mp_obj_t self, mp_obj_t cmd_in, mp_obj_t arg_in) {
    mp_int_t cmd = mp_obj_get_int(cmd_in);
    switch (cmd) {
        case BP_IOCTL_INIT: storage_init(); return MP_OBJ_NEW_SMALL_INT(0);
        case BP_IOCTL_DEINIT: storage_flush(); return MP_OBJ_NEW_SMALL_INT(0); // TODO properly
        case BP_IOCTL_SYNC: storage_flush(); return MP_OBJ_NEW_SMALL_INT(0);
        case BP_IOCTL_SEC_COUNT: return MP_OBJ_NEW_SMALL_INT(storage_get_block_count());
        case BP_IOCTL_SEC_SIZE: return MP_OBJ_NEW_SMALL_INT(storage_get_block_size());
        default: return mp_const_none;
    }
}
STATIC MP_DEFINE_CONST_FUN_OBJ_3(pyb_flash_ioctl_obj, pyb_flash_ioctl);

STATIC const mp_rom_map_elem_t pyb_flash_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_readblocks), MP_ROM_PTR(&pyb_flash_readblocks_obj) },
    { MP_ROM_QSTR(MP_QSTR_writeblocks), MP_ROM_PTR(&pyb_flash_writeblocks_obj) },
    { MP_ROM_QSTR(MP_QSTR_ioctl), MP_ROM_PTR(&pyb_flash_ioctl_obj) },
};

STATIC MP_DEFINE_CONST_DICT(pyb_flash_locals_dict, pyb_flash_locals_dict_table);

const mp_obj_type_t pyb_flash_type = {
    { &mp_type_type },
    .name = MP_QSTR_Flash,
    .make_new = pyb_flash_make_new,
    .locals_dict = (mp_obj_dict_t*)&pyb_flash_locals_dict,
};

void pyb_flash_init_vfs(fs_user_mount_t *vfs) {
    vfs->base.type = &mp_fat_vfs_type;
    vfs->flags |= FSUSER_NATIVE | FSUSER_HAVE_IOCTL;
    vfs->fatfs.drv = vfs;
    vfs->fatfs.part = 1; // flash filesystem lives on first partition
    vfs->readblocks[0] = (mp_obj_t)&pyb_flash_readblocks_obj;
    vfs->readblocks[1] = (mp_obj_t)&pyb_flash_obj;
    vfs->readblocks[2] = (mp_obj_t)storage_read_blocks; // native version
    vfs->writeblocks[0] = (mp_obj_t)&pyb_flash_writeblocks_obj;
    vfs->writeblocks[1] = (mp_obj_t)&pyb_flash_obj;
    vfs->writeblocks[2] = (mp_obj_t)storage_write_blocks; // native version
    vfs->u.ioctl[0] = (mp_obj_t)&pyb_flash_ioctl_obj;
    vfs->u.ioctl[1] = (mp_obj_t)&pyb_flash_obj;
}
