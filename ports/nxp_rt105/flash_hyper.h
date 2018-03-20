#ifndef _FLASH_HYPER_H_
#define _FLASH_HYPER_H_

int HyperErase(int euNdx);
int HyperRead(uint32_t byteOfs, void *pvBuf, uint32_t byteCnt);
int HyperPageProgram(uint32_t pageNdx, uint32_t pgOfs, uint32_t byteCnt, const void *pvBuf);
int Hyper16bitProgram(uint32_t byteOfs, uint16_t u16Dat);
int HyperFlush(void);
int flexspi_nor_init(void);

#endif

