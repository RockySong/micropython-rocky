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
//#include "flash_pgm.h"
#include "led.h"
#include "storage.h"
#include "overlay_manager.h"
//#define SDRAM_DISK_TEST
#ifdef SDRAM_DISK_TEST
char fake_fs[1024*1024];
#endif
static bool flash_is_initialised = false;
void storage_init(void) {
    uint32_t old = OverlaySwitch(OVLY_FLASH);
    if (!flash_is_initialised) {
        flexspi_nor_init();
        flash_is_initialised = true;
    }
    OverlaySwitch(old);
}

uint32_t storage_get_block_size(void) {
    return FLASH_BLOCK_SIZE;
}

uint32_t storage_get_block_count(void) {
	return FLASH_NUM_BLOCKS;
}

uint32_t storage_get_block_offset(void)
{
	return FLASH_PART1_START_BLOCK;
}

void storage_flush(void) {
    //flash_cache_flush();
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

bool storage_read_block(uint8_t *dest, uint32_t block) {
    //printf("RD %u\n", block);
    if (block == 0) {
        // fake the MBR so we can decide on our own partition table

        for (int i = 0; i < 446; i++) {
            dest[i] = 0;
        }
		// must > 0, for 0 is a fake one, return directly. and fatfs.patr=1, means part1, because we have 4 part below, means has 4 part for file-os mounting
        // then will go to the next loop, when second step in
		build_partition(dest + 446, 0, 0x01 /* FAT12 */, FLASH_PART1_START_BLOCK, FLASH_PART1_NUM_BLOCKS);
        build_partition(dest + 462, 0, 0, 0, 0);
        build_partition(dest + 478, 0, 0, 0, 0);
        build_partition(dest + 494, 0, 0, 0, 0);

        dest[510] = 0x55;
        dest[511] = 0xaa;

        return true;

    } else {
		uint32_t primask = __get_PRIMASK();
		__set_PRIMASK(1);
		// non-MBR block, get data from SPI flash
		//block += FLASH_PART1_START_BLOCK;
		if (block < FLASH_PART1_START_BLOCK || block >= FLASH_PART1_START_BLOCK + FLASH_PART1_NUM_BLOCKS) {
			// bad block number
			__set_PRIMASK(primask);
			return false;
		}
		// we must disable USB irqs to prevent MSC contention with SPI flash
		// align to 4096 sector
		uint32_t addr = block * FLASH_BLOCK_SIZE;
		uint32_t offset = addr & 0xfff;
		addr = (addr >> 12) << 12;
		#ifdef SDRAM_DISK_TEST
		uint32_t destAdrss = (uint32_t)(&fake_fs[0]) + addr + offset;
		if(destAdrss > (uint32_t)(&fake_fs[0])){
			memcpy(dest, (char*)destAdrss, FLASH_BLOCK_SIZE);
		}else{
		#endif
			uint32_t destAdrss = FLASH_MEM_BASE + FLASH_ADDR_OFFSET + addr + offset;
			// flexspi_nor_reset();
			memcpy(dest, (char*)destAdrss, FLASH_BLOCK_SIZE);
			__DSB();		
		#ifdef SDRAM_DISK_TEST
		}
		#endif
		__set_PRIMASK(primask);
		return true;
    }
}

// must has a clean flash && make the fatfs first, in case some error
// buffer for a mem-pool and disable the cache
static char buf[SECTOR_SIZE] = {0};
bool storage_write_block(const uint8_t *src, uint32_t block) __attribute__((section(".ram_code"))) ;
bool storage_write_block(const uint8_t *src, uint32_t block) {
    //printf("WR %u\n", block);
    if (block == 0) {
        // can't write MBR, but pretend we did
        return true;

    } else {
		uint32_t primask = __get_PRIMASK();
		__set_PRIMASK(1);
		// non-MBR block, write to SPI flash
		//block += FLASH_PART1_START_BLOCK;
		if (block < FLASH_PART1_START_BLOCK || block >= FLASH_PART1_START_BLOCK + FLASH_PART1_NUM_BLOCKS) {
			// bad block number
			__set_PRIMASK(primask);
			return false;
		}
		// align to 4096 sector
		uint32_t addr = block * FLASH_BLOCK_SIZE;
		uint32_t offset = addr & 0xfff;
		addr = (addr >> 12) << 12;
		// for sdram test, a fake sdram disk
        uint32_t old = OverlaySwitch(OVLY_FLASH);
        // disable execute
        MPU->RBAR = ARM_MPU_RBAR(7, 0x60000000U);
        MPU->RASR = ARM_MPU_RASR(1, ARM_MPU_AP_FULL, 0, 0, 1, 1, 0, ARM_MPU_REGION_SIZE_512MB);         
		#ifdef SDRAM_DISK_TEST
		uint32_t destAdrss = (uint32_t)(&fake_fs[0])+ addr;
		if(destAdrss > (uint32_t)(&fake_fs[0])){
			memcpy((char*)destAdrss + offset, src, FLASH_BLOCK_SIZE);
		}
		else{
		#endif
			flexspi_nor_reset();
			uint32_t destAdrss = FLASH_MEM_BASE + FLASH_ADDR_OFFSET + addr;
			memcpy(buf, (char*)destAdrss, SECTOR_SIZE);
			__DSB();
			// a deadly error,,,, erase a wrong area, cause the flash only be init once
			// when write someone, then disapear, the falsh not erase before program
			uint32_t erase_addr = ((addr + FLASH_ADDR_OFFSET) >> 12) << 12;
			flexspi_nor_flash_erase_sector(FLEXSPI, erase_addr);
			// copy new block into buffer
			memcpy(buf + offset, src, FLASH_BLOCK_SIZE);
			__DSB();
				// write sector in pages of 256 bytes
			int result = -1;
			for (int i = 0; i < SECTOR_SIZE; i += PAGE_SIZE) {
				result = flexspi_nor_flash_page_program(FLEXSPI, addr + FLASH_ADDR_OFFSET + i, (uint32_t*)(buf+i));	
				if (result != 0) {
					result = false;
                    break;
				}
			}
		#ifdef SDRAM_DISK_TEST
		}
		#endif        
        // enable execute
        MPU->RBAR = ARM_MPU_RBAR(7, 0x60000000U);
        MPU->RASR = ARM_MPU_RASR(0, ARM_MPU_AP_FULL, 0, 0, 1, 1, 0, ARM_MPU_REGION_SIZE_512MB);                 
        OverlaySwitch(old);
		__set_PRIMASK(primask);
		return true;
    }
}

// must disable cache under the DMA, in this case, maybe flexspi without the DMA, but USB does, 
// when CPU transfer the buffer(from USB(DMA) or SDRAM will first into cache, cause the incompatible)
// will often occurs, when we make a file from console with vfs, but can not disappear in u-disk
mp_uint_t storage_read_blocks(uint8_t *dest, uint32_t block_num, uint32_t num_blocks) {
	SCB_CleanInvalidateDCache();
	SCB_DisableDCache();
    for (size_t i = 0; i < num_blocks; i++) {
        if (!storage_read_block(dest + i * FLASH_BLOCK_SIZE, block_num + i)) {
			SCB_EnableDCache();
            return 1; // error
        }
    }
	SCB_EnableDCache();
    return 0; // success
}

mp_uint_t storage_write_blocks(const uint8_t *src, uint32_t block_num, uint32_t num_blocks) {
	SCB_CleanInvalidateDCache();
	SCB_DisableDCache();
    for (size_t i = 0; i < num_blocks; i++) {
        if (!storage_write_block(src + i * FLASH_BLOCK_SIZE, block_num + i)) {
			SCB_EnableDCache();
            return 1; // error
        }
    }
	SCB_EnableDCache();
    return 0; // success
}

void storage_irq_handler(void) {
}


/******************************************************************************/
// MicroPython bindings
//
// Expose the flash as an object with the block protocol.

// there is a singleton Flash object
const mp_obj_base_t pyb_flash_obj = {&pyb_flash_type};

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
        case MP_BLOCKDEV_IOCTL_INIT: storage_init(); return MP_OBJ_NEW_SMALL_INT(0);
        case MP_BLOCKDEV_IOCTL_DEINIT: storage_flush(); return MP_OBJ_NEW_SMALL_INT(0); // TODO properly
        case MP_BLOCKDEV_IOCTL_SYNC: storage_flush(); return MP_OBJ_NEW_SMALL_INT(0);
        case MP_BLOCKDEV_IOCTL_BLOCK_COUNT: return MP_OBJ_NEW_SMALL_INT(storage_get_block_count());
        case MP_BLOCKDEV_IOCTL_BLOCK_SIZE: return MP_OBJ_NEW_SMALL_INT(storage_get_block_size());
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
    vfs->blockdev.flags |= MP_BLOCKDEV_FLAG_NATIVE | MP_BLOCKDEV_FLAG_HAVE_IOCTL;
    vfs->fatfs.drv = vfs;
    vfs->fatfs.part = 1; // flash filesystem lives on first partition
    vfs->blockdev.readblocks[0] = (mp_obj_t)&pyb_flash_readblocks_obj;
    vfs->blockdev.readblocks[1] = (mp_obj_t)&pyb_flash_obj;
    vfs->blockdev.readblocks[2] = (mp_obj_t)storage_read_blocks; // native version
    vfs->blockdev.writeblocks[0] = (mp_obj_t)&pyb_flash_writeblocks_obj;
    vfs->blockdev.writeblocks[1] = (mp_obj_t)&pyb_flash_obj;
    vfs->blockdev.writeblocks[2] = (mp_obj_t)storage_write_blocks; // native version
    vfs->blockdev.u.ioctl[0] = (mp_obj_t)&pyb_flash_ioctl_obj;
    vfs->blockdev.u.ioctl[1] = (mp_obj_t)&pyb_flash_obj;
}


