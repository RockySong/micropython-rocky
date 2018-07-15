#include "flegftl.h"
#include <string.h>
//#include <malloc.h>


#define _L3BM_HDR() \
if (bitNdx >= 32 * 32 * 32) \
return -1L; \
l2BitNdx = bitNdx >> 5; \
l3BitNdx = bitNdx >> 10
#define BIT_ENDIAN_CONV(b) (((b) & ~31) + (~((b)) & 31))

#ifdef _WIN32
uint32_t __CTZ(uint32_t rs) {
	uint32_t i;
	for (i = 0; i < 32; i++ , rs >>= 1) {
		if (rs  & 1)
			break;
	}
	return i;
}
#else
#include "fsl_common.h"
#define __CTZ(n) __CLZ(__RBIT(n))
#endif
int FLEG_L3BmTake(FlegL3Bm_t *pBm, uint32_t bitNdx)
{
	uint32_t l2BitNdx, l3BitNdx;
	if (bitNdx >= FLEG_L1BM_ITEM_CNT * 32)
		return -1L;
	l2BitNdx = bitNdx >> 5 , l3BitNdx = bitNdx >> 10;
	pBm->l1[l2BitNdx] &= ~(1UL << (bitNdx & 31));
	if (!(pBm->l1[l2BitNdx] &= ~(1UL << (bitNdx & 31)))) {
		if (!(pBm->l2[l3BitNdx] &= ~(1UL << (l2BitNdx & 31)))) {
			pBm->l3[l3BitNdx >> 5] &= ~(1UL << (l3BitNdx & 31));
		}
	}
	return 0;
}

int _L3BmGetFreeNdx(FlegL3Bm_t *pBm)
{
	uint32_t bitNdc[3];
	uint32_t i;
	for (i = 0; i < FLEG_L3BM_ITEM_CNT; i++) {
		if (pBm->l3[i] != 0)
			break;
	}
	if (i == FLEG_L3BM_ITEM_CNT)
		return -1;
	bitNdc[2] = __CTZ(pBm->l3[i]) + i * 32;
	bitNdc[1] = __CTZ(pBm->l2[bitNdc[2]]) + bitNdc[2] * 32;
	bitNdc[0] = __CTZ(pBm->l1[bitNdc[1]]) + bitNdc[1] * 32;
	return bitNdc[0];
}

int FLEG_L3BmAlloc(FlegL3Bm_t *pBm) {
	uint32_t bitNdx = _L3BmGetFreeNdx(pBm);
	FLEG_L3BmTake(pBm, bitNdx);
	return bitNdx;
}

uint32_t FLEG_L3BmIsFree(FlegL3Bm_t *pBm, uint32_t bitNdx) {
	uint32_t d32 = pBm->l1[bitNdx >> 5];
	if (d32 & (1UL << (bitNdx & 31)))
		return 1;	// free, return 1
	return 0;
}

int FLEG_L3BmFree(FlegL3Bm_t *pBm, uint32_t bitNdx) {
	uint32_t l2BitNdx, l3BitNdx;
	// adjust to bit big-endian: 31<->0
	// bitNdx = BIT_ENDIAN_CONV(bitNdxLE);
	if (bitNdx >= 32 * 32 * 32)
		return -1L;
	l2BitNdx = bitNdx >> 5, l3BitNdx = bitNdx >> 10;
	pBm->l3[l3BitNdx >> 5] |= 1UL << l3BitNdx;
	pBm->l2[l3BitNdx] |= 1UL << (l2BitNdx & 31);
	pBm->l1[l2BitNdx] |= 1UL << (bitNdx & 31);
	return 0;
}

uint32_t FLEG_L1BmAryIsFree(uint32_t *pBm, uint32_t bitNdx) {
	uint32_t ret = pBm[bitNdx >> 5] & (1UL << (bitNdx & 31)) ;
	if (ret) ret = 1;
	return ret;
}

int FLEG_L1BmAryFree(uint32_t *pBm, uint32_t bitNdx) {
	if (FLEG_L1BmAryIsFree(pBm, bitNdx))
		return 0;
	pBm[bitNdx >> 5] |= 1UL << (bitNdx & 31);
	return 1;
}

int FLEG_L1BmAryTake(uint32_t *pBm, uint32_t bitNdx) {
	if (0 == FLEG_L1BmAryIsFree(pBm, bitNdx))
		return 0;
	pBm[bitNdx >> 5] &= ~(1UL << (bitNdx & 31));
	return 1;
}

int FLEG_L1BmAryAlloc(uint32_t *pBm, uint32_t aryCnt) {
	uint32_t i;
	uint32_t bitNdx;
	for (i = 0; i < aryCnt; i++) {
		if (pBm[i] == 0)
			continue;		
		bitNdx = __CTZ(pBm[i]) + i * 32;
		FLEG_L1BmAryTake(pBm, bitNdx);
		return bitNdx;
	}
	return -1L;
}

typedef union _logBatch_t
{
	uint8_t buf[32];
	uint64_t buf64[4];
	uint16_t bigLog[16];	// log units for 256kB+ EU size, 16 bit per PU index
	uint8_t log[32];	// log units for 128KB and 64KB EU size, 8 bit per PU index
}logBatch_t;

int _FindPPUNdx(FlegDevice_t *pDev, uint32_t lpuNdx, uint32_t peu) {
	uint32_t byteOfs;
	uint32_t batchNdx, batchCnt, logPerBatch, i;
	int ppuNdx = -1L;
	logBatch_t batch;
	byteOfs = pDev->euSize * peu + _FLEG_MAPLOG_OFS;
	batchCnt = pDev->euSize >> (9 + 5);
	if (batchCnt == 0)
		batchCnt = 1;
	if (pDev->euSize == 256 * 1024) {
		logPerBatch = 16, batchCnt <<= 1;
		for (batchNdx = 0; batchNdx < batchCnt; batchNdx++, byteOfs += sizeof(batch)) {
			pDev->ops.pfnRead(byteOfs, &batch, sizeof(batch));	// read one batch of log
			for (i = 0; i < logPerBatch; i++) {
				if (batch.bigLog[i] >= FLEG_LPU_PER_EU)
					goto Cleanup;
				if (batch.bigLog[i] == lpuNdx) {
					ppuNdx = batchNdx * logPerBatch + i;
				}
			}
		}
	}
	else {
		logPerBatch = 32;
		batchCnt = pDev->euSize / 1024 * 2 / logPerBatch;
		for (batchNdx = 0; batchNdx < batchCnt; batchNdx++, byteOfs += sizeof(batch)) {
			pDev->ops.pfnRead(byteOfs, &batch, sizeof(batch));	// read one batch of log
			for (i = 0; i < logPerBatch; i++) {
				if (batch.log[i] >= FLEG_LPU_PER_EU)
					goto Cleanup;
				if (batch.log[i] == lpuNdx) {
					ppuNdx = batchNdx * logPerBatch + i;
				}
			}
		}
	}
Cleanup:
	return ppuNdx;
}

int FLEG_PageRead(FlegDevice_t *pDev, uint32_t lpu, void *pvBuf) {
	uint32_t leu = lpu / pDev->lpuPerEU;
	uint32_t lpuNdx = lpu % pDev->lpuPerEU;
	uint32_t peu = pDev->leuMap[leu];
	uint32_t ppu = pDev->ppuPerEU;
	uint16_t peuDst;
	int ret = -1L;
	if (peu == pDev->lazyPEU) {
		// check if the lpu has moved
		
		uint32_t byteOfs = peu * pDev->euSize + FLEG_GET_FIELD_OFS(peuDst, FlegMeta_t);
		pDev->ops.pfnRead(byteOfs, &peuDst, 2);
		ppu = _FindPPUNdx(pDev, lpuNdx, peuDst);
		peu = peuDst;
	}
	if (ppu >= pDev->ppuPerEU) {
		ppu = _FindPPUNdx(pDev, lpuNdx, peu);
	}
	if (ppu >= pDev->ppuPerEU) {
		memset(pvBuf, 0xFFFFFFFF, pDev->pageSize);
		ret = 1;
		goto Cleanup;
	}
	uint32_t byteOfs = peu * pDev->euSize + FLEG_EU_META_SIZE + ppu * pDev->pageSize;
	pDev->ops.pfnRead(byteOfs, pvBuf, pDev->pageSize);
	ret = 0;
Cleanup:
	return ret;
}

typedef struct __FlegPageWrCtx_t {
	FlegDevice_t *pDev;
	uint32_t lpuNum;
	const void *pcvBuf;
	union {
		Fleg_LPUmap_t lazySrc;	// parsed log info and generated map data for srcPEU
		Fleg_LPUmap_t srcMap;	// parsed log info and generated map data for srcPEU
	};
	
	Fleg_LPUmap_t lazyDst;
	FlegMeta_t srcMeta;
	FlegMeta_t dstMeta;
}FlegPageWrCtx_t;

void _ReadMeta(FlegDevice_t *pDev, int peu, FlegMeta_t *pMeta) {
	uint32_t byteOfs = peu * pDev->euSize;
	pDev->ops.pfnRead(byteOfs, pMeta, sizeof(FlegMeta_t));
}

int _ParseEUlog(FlegDevice_t *pDev, uint32_t peu, Fleg_LPUmap_t *pMap) {
	uint32_t byteOfs;
	uint32_t batchNdx, batchCnt, logPerBatch, i;
	uint32_t lpuNdx, ppuNdx = 0;
	logBatch_t batch;
	byteOfs = pDev->euSize * peu + _FLEG_MAPLOG_OFS;
	memset(pMap->bmsVrgnPPU, -1L, sizeof(pMap->bmsVrgnPPU));
	memset(pMap->bmsGrbgLPU, 0, sizeof(pMap->bmsGrbgLPU));
	memset(pMap->lpuMap, -1L, sizeof(pMap->lpuMap));
	pMap->inuseLPUcnt = 0, pMap->vrgnPPUcnt = pDev->ppuPerEU;
	batchCnt = (pDev->euSize) >> (9 + 5);
	if (batchCnt == 0)
		batchCnt = 1;
	if (pDev->euSize == 256 * 1024) {
		logPerBatch = 16, batchCnt <<= 1;
		for (batchNdx = 0; batchNdx < batchCnt; batchNdx++, byteOfs += sizeof(batch)) {
			pDev->ops.pfnRead(byteOfs, &batch, sizeof(batch));	// read one batch of log
			for (i = 0; i < logPerBatch; i++, ppuNdx++) {
				lpuNdx = batch.bigLog[i];
				if (0xFFFF == lpuNdx)
					goto Cleanup;
				FLEG_L1BmAryTake(pMap->bmsVrgnPPU, ppuNdx);
				pMap->vrgnPPUcnt--;
				if (pMap->lpuMap[lpuNdx] >= pDev->ppuPerEU) {
					pMap->inuseLPUcnt++;
				}
				// update LPU->PPU map using latest log
				pMap->lpuMap[lpuNdx] = ppuNdx;
			}
		}
	}
	else {
		logPerBatch = 32;
		for (batchNdx = 0; batchNdx < batchCnt; batchNdx++, byteOfs += sizeof(batch)) {
			pDev->ops.pfnRead(byteOfs, &batch, sizeof(batch));	// read one batch of log
			for (i = 0; i < logPerBatch; i++, ppuNdx++) {
				lpuNdx = batch.log[i];
				if (lpuNdx >= pDev->lpuPerEU)
					goto Cleanup;
				FLEG_L1BmAryTake(pMap->bmsVrgnPPU, ppuNdx);
				pMap->vrgnPPUcnt--;
				if (pMap->lpuMap[lpuNdx] >= pDev->ppuPerEU) {
					pMap->inuseLPUcnt++;
				}
				// update LPU->PPU map using latest log
				pMap->lpuMap[lpuNdx] = ppuNdx;
			}
		}
	}
Cleanup:
	return 0;
}

int FLEG_AppendLog(FlegDevice_t *pDev, uint32_t peu, uint32_t lpuNdx, uint32_t ppuNdx, Fleg_LPUmap_t *pMap) {
	uint32_t byteOfs;
	byteOfs = pDev->euSize * peu + _FLEG_MAPLOG_OFS;
	if (pDev->euSize == 256 * 1024) {
		byteOfs += 2 * ppuNdx;
	}
	else {
		byteOfs += ppuNdx;
	}
	pDev->ops.pfnPagePgm(byteOfs / pDev->pageSize, byteOfs % pDev->pageSize, 
		pDev->euSize >= 256 * 1024 ? 2 : 1, &lpuNdx);
	pMap->lpuMap[lpuNdx] = ppuNdx;
	return 0;
}

int _DoWritePage(FlegDevice_t *pDev, uint32_t peu, uint32_t lpuNdx, uint32_t ppuNdx, const void *pcvBuf) {
	uint32_t byteOfs = peu * pDev->euSize + FLEG_EU_META_SIZE + ppuNdx * pDev->pageSize;
	uint32_t pageNum = byteOfs / pDev->pageSize;
	return pDev->ops.pfnPagePgm(pageNum, 0, pDev->pageSize, pcvBuf);
}

uint32_t _MarkGarbagePEU(FlegDevice_t *pDev, uint32_t peu) {
	uint32_t seqNum;
	FLEG_L3BmFree(&pDev->bmGrbg, peu);
	pDev->ops.pfnRead(peu * pDev->euSize + FLEG_GET_FIELD_OFS(seqNum, FlegMeta_t),
		&seqNum, 4);
	return seqNum;
}

int _TakeFewestErsdGrbgPEU(FlegDevice_t *pDev) {
	uint32_t peuIter;
	uint32_t minErs = (uint32_t)0x7FFFFFFF, peuMinErs = 0;
	uint32_t minErsInuse = 0x7FFFFFFF, peuMinErsInuse = 0;
	for (peuIter = 0; peuIter < pDev->euCnt; peuIter++) {
		if (!FLEG_L3BmIsFree(&pDev->bmGrbg, peuIter)) {
			if (pDev->peuErsCnts[peuIter] - minErsInuse >= 0x80000000)
				peuMinErsInuse = peuIter, minErsInuse = pDev->peuErsCnts[peuIter];
			continue;
		}
		if (pDev->peuErsCnts[peuIter] - minErs >= 0x80000000)
			peuMinErs = peuIter, minErs = pDev->peuErsCnts[peuIter];
	}
	FLEG_L3BmTake(&pDev->bmGrbg, peuMinErs);
	pDev->peuMinErsInuse = peuMinErsInuse;
	pDev->balanceDelta = (int)(minErs - minErsInuse);
	pDev->stat.gcCnt++;
	return peuMinErs;
}

// if leu is available, then after garbage claim, automatically allocate to this LEU
int __ClaimOrTakePEU(
	FlegDevice_t *pDev, uint32_t leu, int peu, uint32_t seqNum) 
{
	FlegMeta_t meta;
	uint32_t isErase = 1;
	if (peu < 0) {
		// first try to allocate one virgin, if failed, then claim one garbage and use it
		peu = FLEG_L3BmAlloc(&pDev->bmVrgn);
		if (peu < 0) {
			peu = _TakeFewestErsdGrbgPEU(pDev);
			if (peu < 0)
				return -1L;

		}
		else {
			isErase = 0;	// no need to erase virgin PEU ---- already virgin
		}
	}
	_ReadMeta(pDev, peu, &meta);
	meta.peuDst = meta.peuSrc = meta.leuNdx = meta.seqNum = 0xFFFF;
	if (leu < pDev->euCnt) {
		meta.leuNdx = (uint16_t)leu;
		meta.seqNum = seqNum + 1;
		pDev->leuMap[leu] = peu;
	}

	meta.roEuKB = pDev->euSize / 1024, meta.roLpuPerEU = pDev->lpuPerEU;
	if (isErase) {
		pDev->peuErsCnts[peu] = ++meta.ersCnt;
		pDev->ops.pfnErs(peu);
		pDev->stat.peuErsCnt++;
	}

	FLEG_L3BmTake(&pDev->bmGrbg, peu);

	pDev->ops.pfnPagePgm(peu * pDev->euSize / pDev->pageSize, 0, sizeof(meta), &meta);

	return peu;
}

int _ClaimGarbagePEU(FlegDevice_t *pDev, int peu) {
	return __ClaimOrTakePEU(pDev, (uint32_t)-1L, peu, 0);
}

int _ClaimGarbagePEUthenTake(FlegDevice_t *pDev, uint32_t leu, uint32_t seqNum) {
	
	return __ClaimOrTakePEU(pDev, leu, (uint32_t)-1L, seqNum);
}

int _TakeVirginPEU(FlegDevice_t *pDev, int leu, int seqNum) {
	return __ClaimOrTakePEU(pDev, leu, (uint32_t)-1L, seqNum);
}

// if peuDst is a valid PEU num, then treat it as the actual Dst
// else, read meta from peuSrc, and use src meta's peuDst field
void _InitLazyMoveContext(FlegPageWrCtx_t *pCtx, uint32_t peuDst) {
	FlegDevice_t *pDev = pCtx->pDev;
	pCtx->lazySrc.peuNdx = pDev->lazyPEU;
	_ReadMeta(pDev, pDev->lazyPEU, &pCtx->srcMeta);
	if (peuDst < pDev->euCnt)
		pCtx->srcMeta.peuDst = peuDst;
	pCtx->lazyDst.peuNdx = pCtx->srcMeta.peuDst;

	_ReadMeta(pDev, pCtx->lazyDst.peuNdx, &pCtx->dstMeta);
	_ParseEUlog(pDev, pCtx->lazySrc.peuNdx, &pCtx->lazySrc);
	_ParseEUlog(pDev, pCtx->lazyDst.peuNdx, &pCtx->lazyDst);
	{
		// check if page has moved to dstPEU, and update srcPEU's garbage bitmap, LPUmap
		uint32_t lpuIter;
		for (lpuIter = 0; lpuIter < pDev->lpuPerEU; lpuIter++) {
			if (pCtx->lazyDst.lpuMap[lpuIter] < pDev->ppuPerEU && 
				pCtx->lazySrc.lpuMap[lpuIter] < pDev->ppuPerEU) 
			{
				// in fact dat has moved to dest
				// clear it in src PEU
				FLEG_L1BmAryFree(pCtx->lazySrc.bmsGrbgLPU, lpuIter);
				pCtx->lazySrc.lpuMap[lpuIter] = (pundx_t)pDev->ppuPerEU;
				pCtx->lazySrc.inuseLPUcnt--;
			}
		}
	}
}

int _BeginLazyMove(FlegPageWrCtx_t *pCtx, uint32_t peuSrc) {
	pCtx->srcMeta.peuDst = pCtx->pDev->bkupPEU;
	pCtx->pDev->lazyPEU = peuSrc;
	uint32_t byteOfs = peuSrc * pCtx->pDev->euSize;
	uint32_t pageNum = byteOfs / pCtx->pDev->pageSize;
	pCtx->pDev->ops.pfnPagePgm(pageNum, 0, sizeof(pCtx->srcMeta), &pCtx->srcMeta);
	pCtx->pDev->stat.lazyMoveCnt++;
	return 0;
}

//int _WearBalance(FlegPageWrCtx_t *pCtx) {
//	FlegDevice_t *pDev = pCtx->pDev;
//	uint32_t peuIter, peuToChk = pCtx->lazySrc.peuNdx;
//	uint32_t myErsCnt = pDev->peuErsCnts[peuToChk];
//	uint32_t minErs = (uint32_t)-1L, peuMinErs;
//	for (peuIter = 0; peuIter < pDev->euCnt; peuIter++) {
//		if (pDev->peuErsCnts[peuIter] < minErs)
//			peuMinErs = peuIter, minErs = pDev->peuErsCnts[peuIter];
//	}
//	if (myErsCnt - minErs < FLEG_WB_THRESHOLD)
//		return peuToChk;
//	// do wear balancing, use lazy move style
//	pCtx->pDev->lazyPEU = peuMinErs;
//	_InitLazyMoveContext(pCtx, peuToChk);
//	_BeginLazyMove(pCtx, peuMinErs);
//	return peuMinErs;
//}
int _FlushLazyMove(FlegPageWrCtx_t *pCtx);
int _EndLazyMove(FlegPageWrCtx_t *pCtx) {
	FlegDevice_t *pDev = pCtx->pDev;
	pCtx->dstMeta.peuSrc = pCtx->lazySrc.peuNdx;
	uint32_t byteOfs = pCtx->lazyDst.peuNdx * pDev->euSize;
	pCtx->dstMeta.seqNum = pCtx->srcMeta.seqNum + 1;
	pCtx->dstMeta.leuNdx = pCtx->srcMeta.leuNdx;
	pCtx->dstMeta.roEuKB = pDev->euSize >> 10, pCtx->dstMeta.roLpuPerEU = pCtx->pDev->lpuPerEU;
	pDev->ops.pfnPagePgm(byteOfs / pDev->pageSize, 0, sizeof(FlegMeta_t), &pCtx->dstMeta);
	pDev->leuMap[pCtx->srcMeta.leuNdx] = pCtx->lazyDst.peuNdx;
	pDev->lazyPEU = 0xFFFF;
	pDev->bkupPEU = 0xFFFF;
	FLEG_L3BmFree(&pCtx->pDev->bmGrbg, pCtx->lazySrc.peuNdx);	// lazy source PEU is now the garbage.
	
	pCtx->pDev->bkupPEU = FLEG_L3BmAlloc(&pCtx->pDev->bmVrgn);
	if (pCtx->pDev->bkupPEU >= pCtx->pDev->euCnt) {
		// no virgin PEU for back up, claim one garbage PEU, should search for fewest erased PEU
		pCtx->pDev->bkupPEU = _ClaimGarbagePEU(pCtx->pDev, (uint32_t)-1L);
		if (pCtx->pDev->balanceDelta > (int)(FLEG_WB_THRESHOLD + pCtx->pDev->wbTolerance)) {
			pCtx->pDev->isToWB = 1;
		}
		else {
			if (pCtx->pDev->wbTolerance > 0)
				pCtx->pDev->wbTolerance--;
		}
	}
	{
		if (pDev->leuMap[0] == pDev->leuMap[1] || pDev->leuMap[1] == pDev->leuMap[2] || pDev->leuMap[2] == pDev->leuMap[0]) {
			pCtx->pDev->ops.pfnFlush();
		}
	}
	return 0;
}

int _FlushLazyMove(FlegPageWrCtx_t *pCtx) {
	// todo: move all inuse LPUs
	static int cnt = 0;
	uint32_t lpuIter, srcPPU, dstPPU;
	FlegDevice_t *pDev = pCtx->pDev;
	uint32_t byteOfs;
	for (lpuIter = 0; lpuIter < pDev->lpuPerEU; lpuIter++) {
		srcPPU = pCtx->lazySrc.lpuMap[lpuIter];
		if (srcPPU >= pDev->ppuPerEU) {
			continue;
		}
		// find a valid LPU
		FLEG_L1BmAryFree(pCtx->lazySrc.bmsGrbgLPU, lpuIter);
		byteOfs = pCtx->lazySrc.peuNdx * pDev->euSize + FLEG_EU_META_SIZE + srcPPU * pDev->pageSize;
		pDev->ops.pfnRead(byteOfs, pDev->pageBuf, pDev->pageSize);
		dstPPU = FLEG_L1BmAryAlloc(pCtx->lazyDst.bmsVrgnPPU, sizeof(pCtx->lazyDst.bmsVrgnPPU) / 4);
		if (!(dstPPU < pDev->ppuPerEU)) {
			return -1L;
			pCtx = pCtx;
		}
		_DoWritePage(pDev, pCtx->lazyDst.peuNdx, lpuIter, dstPPU, pDev->pageBuf);
		FLEG_AppendLog(pDev, pCtx->lazyDst.peuNdx, lpuIter, dstPPU, &pCtx->lazyDst);
		FLEG_L1BmAryFree(pCtx->lazySrc.bmsGrbgLPU, lpuIter);
		pCtx->lazySrc.inuseLPUcnt--;
		pCtx->pDev->stat.lazyMoveFlushCnt++;
	}
	_EndLazyMove(pCtx);
	cnt++;
	return 0;
}

int FLEG_PageWrite(FlegDevice_t *pDev, uint32_t lpu, const void *pcvBuf) {
	uint32_t leu = lpu / pDev->lpuPerEU;
	uint32_t peu = pDev->leuMap[leu];
	uint32_t lpuNdx = lpu % pDev->lpuPerEU, ppuNdx;
	uint32_t isToFlushAfterPgWr = 0;
	FlegPageWrCtx_t ctx;
	ctx.pDev = pDev, ctx.pcvBuf = pcvBuf, ctx.lpuNum = lpu;
	if (peu >= pDev->euCnt)
	{
		// not yet alloced
		peu = _TakeVirginPEU(pDev, leu, -1L);
		FLEGASSERT(peu < pDev->euCnt);
	}
	_ReadMeta(pDev, peu, &ctx.srcMeta);
	_ParseEUlog(pDev, peu, &ctx.srcMap);
	ppuNdx = FLEG_L1BmAryAlloc(ctx.srcMap.bmsVrgnPPU, sizeof(ctx.srcMap.bmsVrgnPPU) / 4);
	if (ppuNdx >= pDev->ppuPerEU) {
		// no virgin PPU in this PEU
		// check if there are virgin PEUs


		if (pDev->lazyPEU < pDev->euCnt) {
			// a lazy move is ongoing
			_ReadMeta(pDev, pDev->lazyPEU, &ctx.srcMeta);	// load new src meta for this time. error prone to forget
			_InitLazyMoveContext(&ctx, (uint32_t)-1L);
			if (ctx.lazyDst.vrgnPPUcnt == 0) {
				_EndLazyMove(&ctx);
				_ReadMeta(pDev, ctx.lazyDst.peuNdx, &ctx.srcMeta);
				goto NoOngoinLazyMove;
			}
			if (pDev->lazyPEU != peu) {	
				// another lazy move is ongoing, must flush it, and start a new lazy move on this
				_FlushLazyMove(&ctx);
				_ReadMeta(pDev, peu, &ctx.srcMeta);	// load new src meta for this time. error prone to forget
				_BeginLazyMove(&ctx, peu);
				_InitLazyMoveContext(&ctx, ctx.srcMeta.peuDst);
			}

		}
		else {
NoOngoinLazyMove:
			//// no ongoing lazy move, check if there are virgin PEUs
			//_ReadMeta(pDev, peu, &ctx.srcMeta);
			//peu = _TakeVirginPEU(pDev, leu, ctx.srcMeta.seqNum);
			//if (peu < pDev->euCnt)
			//	goto Beginwork;
			//// no ongoing lazy move, and there is no virgin PEU, begin a new lazy move
			_BeginLazyMove(&ctx, pDev->leuMap[leu]);
			_InitLazyMoveContext(&ctx, ctx.srcMeta.peuDst);
		}

		// now, lazy move is on the same PEU
		if (ctx.lazyDst.vrgnPPUcnt == ctx.lazySrc.inuseLPUcnt ||
			(ctx.lazyDst.vrgnPPUcnt == ctx.lazySrc.inuseLPUcnt + 1 && ctx.lazySrc.lpuMap[lpuNdx] >= pDev->ppuPerEU)
			)
		{
			// no more virgin PPU after this lazy move, to ensure unmoved (lazy) pages
			// have their seat in dstPEU, must schedule a flush after this page write
			isToFlushAfterPgWr = 1;
		}
		ppuNdx = FLEG_L1BmAryAlloc(ctx.lazyDst.bmsVrgnPPU, FLEG_ARRAY_SIZE(ctx.lazyDst.bmsVrgnPPU));
		FLEGASSERT(ppuNdx < pDev->ppuPerEU);
		ctx.lazyDst.vrgnPPUcnt--;
		if (ctx.lazySrc.lpuMap[lpuNdx] < pDev->ppuPerEU &&  
			0 == FLEG_L1BmAryIsFree(ctx.lazySrc.bmsGrbgLPU, lpuNdx)) 
		{
			// the LPU is not yet moved, use new data to update to dst PEU, and mark old LPU as garbage
			FLEG_L1BmAryFree(ctx.lazySrc.bmsGrbgLPU, lpuNdx);
			ctx.lazySrc.inuseLPUcnt--;
			ctx.lazySrc.lpuMap[lpuNdx] = (pundx_t)pDev->ppuPerEU;
		}
		_DoWritePage(pDev, ctx.lazyDst.peuNdx, lpuNdx, ppuNdx, pcvBuf);
		FLEG_AppendLog(pDev, ctx.lazyDst.peuNdx, lpuNdx, ppuNdx, &ctx.lazyDst);
		if (ctx.lazySrc.inuseLPUcnt == 0) {
			_EndLazyMove(&ctx);
		}
		else if (isToFlushAfterPgWr) {
			_FlushLazyMove(&ctx);
		}

	}
	else {
		// found a virgin PPU, use it. Following code are the same
		_DoWritePage(pDev, peu, lpuNdx, ppuNdx, pcvBuf);
		FLEG_AppendLog(pDev, peu, lpuNdx, ppuNdx, &ctx.srcMap);		
	}
	if (pDev->isToWB && pDev->lazyPEU >= pDev->euCnt) {
		// inuse EU has too few erase count, do further wear balance to move it
		_ReadMeta(pDev, pDev->peuMinErsInuse, &ctx.srcMeta);
		_BeginLazyMove(&ctx, pDev->peuMinErsInuse);
		pDev->wbTolerance = ((pDev->ppuPerEU - pDev->lpuPerEU) * 3) + 32;
		if (pDev->wbTolerance >= 300)
			pDev->wbTolerance = 300;
		pDev->stat.wbCnt++, pDev->isToWB = 0;
		// _InitLazyMoveContext(pCtx, (uint32_t)-1L);
		// _FlushLazyMove(pCtx);	// note that this is recursive!
	}
	pDev->stat.pageWrCnt++;
	return 0;
}

int FLEG_DeviceScan(FlegDevice_t *pDev)
{
	uint32_t peuNdx = 0;
	volatile uint32_t dbgIsFmt = 0;
	FlegMeta_t meta;
	pDev->lazyPEU = 0xFFFF, pDev->bkupPEU = 0xFFFF;
	memset(&pDev->bmVrgn, 0, sizeof(pDev->bmVrgn));
	memset(&pDev->bmGrbg, 0, sizeof(pDev->bmGrbg));
	memset(pDev->leuMap, -1L, sizeof(pDev->leuMap));
	if (dbgIsFmt) {
		for (peuNdx = 0 ; peuNdx < pDev->euCnt; peuNdx++) {
			pDev->ops.pfnErs(peuNdx);
		}
	}
	for (peuNdx = 0 ; peuNdx < pDev->euCnt; peuNdx++) {
		{
			// scan meta items
			uint32_t oldPEUndx;
			_ReadMeta(pDev, peuNdx, &meta);
			pDev->peuErsCnts[peuNdx] = (uint32_t)-1L;
			if (meta.leuNdx == 0xFFFF) {
				// virgin
				FLEG_L3BmFree(&pDev->bmVrgn, peuNdx);
				pDev->bkupPEU = peuNdx;	// use it as backup EU for moving
				continue;
			}
			// found a meta data in this EU frame
			pDev->peuErsCnts[peuNdx] = meta.ersCnt;

			oldPEUndx = pDev->leuMap[meta.leuNdx];
			if (oldPEUndx == 0xFFFF) {
				// this is 1st time we found a non free EU
				// assume this group is not trash, until we found a group with larger seqNum
				pDev->leuMap[meta.leuNdx] = peuNdx;
				if (meta.peuDst != 0xFFFF)
					pDev->lazyPEU = peuNdx;
				continue;
			}
			// here: we found the same LEU in different PEU
			// then one must be trash, we need to determine
			{
				FlegMeta_t altMeta;
				pDev->ops.pfnRead(oldPEUndx * pDev->euSize, &altMeta, sizeof(FlegMeta_t));
				uint16_t dltSeq = altMeta.seqNum - meta.seqNum;
				if (dltSeq >= 32768) {
					// alt is old, we replace the old with new
					FLEG_L3BmSetBit(&pDev->bmGrbg, oldPEUndx);
					pDev->leuMap[meta.leuNdx] = peuNdx;
					if (meta.peuDst != 0xFFFF)
						pDev->lazyPEU = peuNdx;
					
				}
				else {
					// alt is newer, mark this new found as trash
					FLEG_L3BmSetBit(&pDev->bmGrbg, peuNdx);
				}
			}
		}
	}

	// though backup PEU is "virgin", we must not use it for take virgin PEUs, 
	// so remove it from virgin bitmap (and garbage bitmap as well)
	FLEG_L3BmTake(&pDev->bmVrgn, pDev->bkupPEU);
	FLEG_L3BmTake(&pDev->bmGrbg, pDev->bkupPEU);

	return 0;
}

int FLEG_BeginMove(uint32_t grpNdx) {
	return 0;
}



void FLEG_SetToDefaultMetrics(FlegDevice_t *pDev) {
	pDev->euSize = FLEG_EU_SIZE;
	pDev->euCnt = FLEG_EU_CNT;
	pDev->pageSize = FLEG_PAGE_SIZE;
	pDev->ppuPerEU = FLEG_PPU_PER_EU;
	pDev->lpuPerEU = FLEG_LPU_PER_EU;
	pDev->lpuCnt = FLEG_LPU_PER_EU * (FLEG_EU_CNT - 1);	// one EU for backup
}

int FLEG_Init(FlegDevice_t *pDev, FlegDeviceMetrics_t *pMetrics, 
	pfnFlegErase_t pfnErs, pfnFlegPageProgram_t pfnPgPgm,
	pfnFleg16bitProgram_t pfn16bitPgm, pfnFlegRead_t pfnRead, pfnFlegFlush_t pfnFlush) 
{	
	memset(pDev, 0, sizeof(pDev));
	if (pMetrics) {
		((FlegDeviceMetrics_t*)pDev)[0] = pMetrics[0];
	}
	else {
		FLEG_SetToDefaultMetrics(pDev);
	}
	
	pDev->bkupPEU = 0xFFFF;
	pDev->ops.pfnErs = pfnErs;
	pDev->ops.pfnPagePgm = pfnPgPgm;
	pDev->ops.pfn16bitPgm = pfn16bitPgm;
	pDev->ops.pfnRead = pfnRead;
	pDev->ops.pfnFlush = pfnFlush;
	FLEG_DeviceScan(pDev);
	return 0;
}
