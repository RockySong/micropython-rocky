#ifndef _FLASH_PGM_H_
#define _FLASH_PGM_H_

#ifdef XIP_EXTERNAL_FLASH
#define OVERLAY_SWITCH()	int oldOvly = OverlaySwitch(OVLY_FLASHPGM)
#define OVERLAY_RESTORE()	OverlaySwitch(oldOvly)
#else
#define OVERLAY_SWITCH()
#define OVERLAY_RESTORE()
#endif

int HyperErase(int euNdx);
int HyperRead(uint32_t byteOfs, void *pvBuf, uint32_t byteCnt);
int HyperPageProgram(uint32_t pageNdx, uint32_t pgOfs, uint32_t byteCnt, const void *pvBuf);
int Hyper16bitProgram(uint32_t byteOfs, uint16_t u16Dat);
int HyperFlush(void);
int FlashPgmInit(void);

#endif

