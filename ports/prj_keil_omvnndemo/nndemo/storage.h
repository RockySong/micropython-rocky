#pragma once
#include <stdint.h>
#include "sample.h"
#define EXAMPLE_FLEXSPI FLEXSPI
#define FLASH_SIZE 0x2000 /* 64Mb/KByte */
#define EXAMPLE_FLEXSPI_AMBA_BASE FlexSPI_AMBA_BASE
#define FLASH_PAGE_SIZE 256
#define EXAMPLE_SECTOR 0
#define SECTOR_SIZE 0x1000 /* 4K */
#define EXAMPLE_FLEXSPI_CLOCK kCLOCK_FlexSpi

typedef struct _Face_t
{
	int32_t tagWord;	// corresponding to flash tag, 0xFFFFFFF means not used
	int8_t vec[FACE_VEC_SIZE];
	uint8_t img[FACE_IMAGE_SIZE];
}Face_t;

typedef struct _FaceDataBase
{
	uint32_t faceCnt;
	Face_t faces[MAX_FACES];
}FaceDB_t;


typedef struct _SavedFace_t
{
	int32_t inuse;
	int8_t vec[FACE_VEC_SIZE];
	int8_t pad[FLASH_PAGE_SIZE - FACE_VEC_SIZE - 4];
	uint8_t img[4096 * 4 - FLASH_PAGE_SIZE];
}SavedFace_t;
extern const SavedFace_t * const cg_pcSavedDB;
int StorageInit(void);
int DelFace(int ndx);
int SaveFace(int ndx, const int8_t *pVec, const uint8_t *pFace);
