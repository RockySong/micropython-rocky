#pragma once
#ifndef _FLEGFTL_H_
#define _FLEGFTL_H_
#ifdef __CC_ARM
#pragma anon_unions
#endif
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>

#include "flegftl_cfg.h"
// >>> validate macro values
#define FLEG_PAGE_SIZE			512
#define FLEG_PAGE_PER_EU		(FLEG_EU_SIZE/FLEG_PAGE_SIZE)		// natural page per ersse unit
#define FLEG_PAGE_CNT			(FLEG_EU_SIZE * FLEG_EU_CNT / FLEG_PAGE_SIZE)
#define FLEG_PEU_CNT			FLEG_EU_CNT
#define FLEG_LEU_CNT			(FLEG_PEU_CNT-1)
#define FLEG_LPU_CNT			(FLEG_LPU_PER_EU * FLEG_LEU_CNT)
#if 512 != FLEG_PAGE_SIZE
#error "unsupported page size"
#endif


#if FLEG_EU_CNT > 32768
#error "too many EUs, must <= 32768"
#endif

#if FLEG_EU_SIZE != (256*1024) && FLEG_EU_SIZE != (128*1024) && FLEG_EU_SIZE != (64*1024) && \
FLEG_EU_SIZE != (32*1024) && FLEG_EU_SIZE != (16*1024) && FLEG_EU_SIZE != (8*1024) && FLEG_EU_SIZE != (4*1024)
#error "EU size must be 256/128/64/32 kB"
#endif

#if FLEG_EU_SIZE == 256*1024
#define FLEG_EU_META_PAGE_CNT	3
#define _FLEG_MAPLOG_OFS	512
#define FLEG_PPU_PER_EU		509 // (512 - FLEG_EU_META_PAGE_CNT)
#define FLEG_MAX_LPU_PER_EU	508
typedef uint16_t pundx_t;
#elif FLEG_EU_SIZE == 128*1024
#define FLEG_EU_META_PAGE_CNT	1
#define _FLEG_MAPLOG_OFS		64
#define FLEG_PPU_PER_EU			255 // (256 - FLEG_EU_META_PAGE_CNT)
#define FLEG_MAX_LPU_PER_EU		254
typedef uint8_t pundx_t;
#elif FLEG_EU_SIZE == 64*1024
#define FLEG_EU_META_PAGE_CNT	1
#define _FLEG_MAPLOG_OFS		64
#define FLEG_PPU_PER_EU			127 // (256 - FLEG_EU_META_PAGE_CNT)
#define FLEG_MAX_LPU_PER_EU		126
typedef uint8_t pundx_t;
#elif FLEG_EU_SIZE == 32*1024
#define FLEG_EU_META_PAGE_CNT	1
#define _FLEG_MAPLOG_OFS		64
#define FLEG_PPU_PER_EU			63 // (256 - FLEG_EU_META_PAGE_CNT)
#define FLEG_MAX_LPU_PER_EU		62
typedef uint8_t pundx_t;
#elif FLEG_EU_SIZE == 16*1024
#define FLEG_EU_META_PAGE_CNT	1
#define _FLEG_MAPLOG_OFS		64
#define FLEG_PPU_PER_EU			31 // (256 - FLEG_EU_META_PAGE_CNT)
#define FLEG_MAX_LPU_PER_EU		30
typedef uint8_t pundx_t;
#elif FLEG_EU_SIZE == 8*1024
#define FLEG_EU_META_PAGE_CNT	1
#define _FLEG_MAPLOG_OFS		64
#define FLEG_PPU_PER_EU			15 // (256 - FLEG_EU_META_PAGE_CNT)
#define FLEG_MAX_LPU_PER_EU		14
typedef uint8_t pundx_t;
#endif

#define FLEG_EU_META_SIZE (FLEG_EU_META_PAGE_CNT * 512)

typedef struct _Fleg_EuMetaHdr_t
{
	uint16_t leuNdx;
	uint16_t seqNum;
	uint16_t peuSrc;
	uint16_t peuDst;
	uint32_t ersCnt;
	uint16_t roEuKB;
	uint16_t roLpuPerEU;
}FlegMeta_t;

#define FLEG_PPU_L1BM_ELE_CNT	(FLEG_PPU_PER_EU + 31) / 32
typedef struct _Fleg_LPUmap_t {
	uint16_t peuNdx;

	uint16_t inuseLPUcnt;	// for peuSrc
	uint16_t vrgnPPUcnt;	// for peuDst
	uint32_t bmsGrbgLPU[FLEG_PPU_L1BM_ELE_CNT];	// for peuSrc
	uint32_t bmsVrgnPPU[FLEG_PPU_L1BM_ELE_CNT];	// for peuDst


	pundx_t lpuMap[(FLEG_LPU_PER_EU + 3) & ~3];
}Fleg_LPUmap_t;

typedef struct _Fleg_EuMapLog_t
{
	uint16_t mapLog[FLEG_MAX_LPU_PER_EU][2];
}Fleg_EuMapLog_t;

#if FLEG_L1BM_ITEM_CNT < ((FLEG_EU_CNT + 31) / 32)
#error "insufficient FLEG_L1BM_ITEM_CNT"
#endif
#if FLEG_L2BM_ITEM_CNT < ((FLEG_L1BM_ITEM_CNT + 31) / 32)
#error "insufficient FLEG_L2BM_ITEM_CNT"
#endif
#if FLEG_L3BM_ITEM_CNT < ((FLEG_L2BM_ITEM_CNT + 31) / 32)
#error "insufficient FLEG_L3BM_ITEM_CNT"
#endif

#if FLEG_LPU_PER_EU > FLEG_MAX_LPU_PER_EU
#error "incorrect FLEG_LPU_PER_EU"
#endif
// <<<

#define FLEG_ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

#define FLEGASSERT(p) if (!(p)) while(1)


typedef int(*pfnFlegErase_t)(int euNdx);
typedef int(*pfnFleg16bitProgram_t)(uint32_t byteOfs, uint16_t u16Dat);
typedef int(*pfnFlegPageProgram_t)
	(uint32_t pageNdx, uint32_t pgOfs, uint32_t byteCnt, const void *pvBuf);
typedef int(*pfnFlegRead_t)(uint32_t byteOfs, void *pvBuf, uint32_t byteCnt);
typedef int(*pfnFlegFlush_t)(void);

typedef struct _FlegDeviceOps_t
{
	pfnFlegErase_t pfnErs;
	pfnFlegPageProgram_t pfnPagePgm;
	pfnFleg16bitProgram_t pfn16bitPgm;
	pfnFlegRead_t pfnRead;	// if device is memory mapped, leave this to 0
	pfnFlegFlush_t pfnFlush;
}FlegDeviceOpts_t;
// >>> the full L3 bitmap structure, in practice usually we use smaller ones

typedef struct _FlegL3Bm_t
{
	uint32_t l3[FLEG_L3BM_ITEM_CNT];
	uint32_t l2[FLEG_L2BM_ITEM_CNT];
	uint32_t l1[FLEG_L1BM_ITEM_CNT];
}FlegL3Bm_t;

typedef enum _FlegGrpType_e
{
	grptype_free,
	grptype_trash,
	grptype_eff,
}FlegGrpType_e;

typedef struct FlegDeviceMetrics_t {
	uint32_t euSize;
	uint16_t euCnt;
	uint16_t pageSize;
	uint16_t lpuPerEU;
	uint16_t ppuPerEU;
}FlegDeviceMetrics_t;


typedef struct _FlegStat_t
{
	uint32_t pageWrCnt;
	uint32_t peuErsCnt;
	uint32_t wbCnt;	// wear balancing count
	uint32_t gcCnt;	// garbage claim cnt
	uint32_t lazyMoveCnt;
	uint32_t lazyMoveFlushCnt;
}FlegStat_t;

typedef struct _FlegDevice_t
{
	// >>> device metrics fields, must be aligned with FlegDeviceMetrics_t
	uint32_t euSize;
	uint16_t euCnt;
	uint16_t pageSize;
	uint16_t ppuPerEU;
	uint16_t lpuPerEU;
	uint32_t lpuCnt;
	// <<<
	FlegStat_t stat;
	uint32_t dbgIsToFlush;
	uint32_t peuMinErsInuse;
	uint32_t wbTolerance;
	uint32_t isToWB;
	int balanceDelta;
	uint16_t bkupPEU;	// backup EU index for moving a EU into when group can't be transfered
	uint16_t lazyPEU;
	FlegDeviceOpts_t ops;
	FlegL3Bm_t bmVrgn;	// virgin EUs  :whose bits are virgin ---- kept in erased state.
	FlegL3Bm_t bmGrbg;	// garbage EUs :whose bits are not virgin and group has mapped to others.
	uint16_t leuMap[FLEG_LEU_CNT];	// group to group frame map
	uint32_t peuErsCnts[FLEG_PEU_CNT];
	union {
		uint8_t pageBuf[FLEG_PAGE_SIZE];
		uint64_t pageBuf64[FLEG_PAGE_SIZE / 8];	// make it align to 64 bit
		FlegMeta_t euMeta;
	};
	Fleg_LPUmap_t lpuMap;
}FlegDevice_t;

int FLEG_DeviceScan(FlegDevice_t *pDev);

// pMetrics could be NULL : Use default metrics configured by FLEG_XXX macros in fleg
int FLEG_Init(FlegDevice_t *pDev, FlegDeviceMetrics_t *pMetrics,
	pfnFlegErase_t pfnErs, pfnFlegPageProgram_t pfnPgPgm,
	pfnFleg16bitProgram_t pfn16bitPgm, pfnFlegRead_t pfnRead, pfnFlegFlush_t pfnFlush);



int FLEG_PageRead(FlegDevice_t *pDev, uint32_t lpu, void *pvBuf);
int FLEG_PageWrite(FlegDevice_t *pDev, uint32_t lpu, const void *pcvBuf);



#define FLEG_GET_FIELD_OFS(fld, _t) (uint32_t)(&((_t*)0)->fld)
#define FLEG_L3BmSetBit FLEG_L3BmFree
int FLEG_L3BmFree(FlegL3Bm_t *pBm, uint32_t bitNdx);
uint32_t FLEG_L3BmIsFree(FlegL3Bm_t *pBm, uint32_t bitNdx);
int FLEG_L3BmAlloc(FlegL3Bm_t *pBm);
int FLEG_L3BmTake(FlegL3Bm_t *pBm, uint32_t bitNdx);
int FLEG_L1BmAryTake(uint32_t *pBm, uint32_t bitNdx);
int FLEG_L1BmAryFree(uint32_t *pBm, uint32_t bitNdx);
int FLEG_L1BmAryAlloc(uint32_t *pBm, uint32_t aryCnt);

#ifdef __cplusplus
}
#endif

#endif
