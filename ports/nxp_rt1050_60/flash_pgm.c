#include "flash_hyper.h"
#include "flegftl.h"
#include "flash_pgm.h"
#include "overlay_manager.h"

int HyperErase(int euNdx) {
	OVERLAY_SWITCH();
	flexspi_nor_flash_erase_sector(FLEXSPI, FLEG_FLASH_OFFSET + euNdx * 256 * 1024);
	OVERLAY_RESTORE();
	return 0;
}


int HyperRead(uint32_t byteOfs, void *pvBuf, uint32_t byteCnt) {
	uint8_t *p = (uint8_t*)(0x60000000 + FLEG_FLASH_OFFSET + byteOfs);
	memcpy(pvBuf, p, byteCnt);
	return 0;
}

typedef union {
	uint8_t buf[512];
	uint32_t buf32[512 / 4];
}_PartialPgmBuf_t;

int _HyperPagePartialProgram(uint32_t pageNdx, uint32_t pgOfs, uint32_t byteCnt, const void *pvBuf) {
	OVERLAY_SWITCH();
	_PartialPgmBuf_t buf;
	HyperRead(pageNdx * 512 , buf.buf32, sizeof(buf));
	memcpy(buf.buf + pgOfs, pvBuf, byteCnt);
	flexspi_nor_flash_page_program(FLEXSPI, pageNdx * 512 + FLEG_FLASH_OFFSET, buf.buf32);
	OVERLAY_RESTORE();
	return 0;
}


int HyperPageProgram(uint32_t pageNdx, uint32_t pgOfs, uint32_t byteCnt, const void *pvBuf){
	OVERLAY_SWITCH();
	if (pgOfs != 0 || byteCnt != 512) {
		_HyperPagePartialProgram(pageNdx, pgOfs, byteCnt, pvBuf);
	} else {
		flexspi_nor_flash_page_program(FLEXSPI, pageNdx * 512 + FLEG_FLASH_OFFSET, pvBuf);
	}
	OVERLAY_RESTORE();
	return 0;
}

int Hyper16bitProgram(uint32_t byteOfs, uint16_t u16Dat)
{
	uint32_t pageNdx = byteOfs >> 9, pageOfs = byteOfs & (512 - 1);
	HyperPageProgram(pageNdx, pageOfs, 2, &u16Dat);
	return 0;
}

int HyperFlush(void) {
	return 0;
}

__attribute__((weak)) int flexspi_nor_init(void) {return 0;}

int FlashPgmInit(void) {
	OVERLAY_SWITCH();
	flexspi_nor_init();
	OVERLAY_RESTORE();
	return 0;
}

