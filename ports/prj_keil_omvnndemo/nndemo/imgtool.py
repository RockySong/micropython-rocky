from PIL import Image
import os
import numpy as np


def DumpWt(a, wordLen, shfLeft, sublineLen = 5, sublineSep = [' ', '\n']):
    # a must have output channel as the last shape
    chnCnt = a.shape[0] ; oldShape = a.shape
    wtPerChn = a.size // chnCnt
    cnt = a.size
    sublinePerLine = len(sublineSep)
    nMax = (1 << wordLen) / 2 - 1
    if wordLen <= 8:
        sIntFmt = '0x%02x,'
    else:
        sIntFmt = '0x%04x,'
    b = np.reshape(a, -1, 'C')
    bOut = np.zeros((cnt))
    sVal = '' ; lineNdx = 0 ; itemNdx = 0
    chnNdx = 0 ; inChnOfs = 0
    for ndx in range(cnt):
        if wtPerChn > 1 and inChnOfs == 0:
            pass
            #sVal += '// Out channel %d\n\t' % chnNdx
        fVal = b[ndx]
        if (shfLeft >= 0):
            fVal *= 1 << shfLeft
        else:
            fVal /= 1 << -shfLeft
        nVal = int(fVal)
        if nVal < 0:
            if wordLen <= 8:
                nVal = 256 + nVal
            else:
                nVal = 65536 + nVal
        bOut[ndx] = nVal
        ndx += 1
        sVal += sIntFmt % (nVal)
        itemNdx += 1
        if itemNdx == sublineLen:
            itemNdx = 0 ; lineSep = sublineSep[lineNdx % sublinePerLine]
            if '\n' in lineSep:
                sVal += ' // %d' % (ndx)
            sVal += lineSep
            lineNdx += 1
        if wtPerChn > 1:
            inChnOfs += 1
            if inChnOfs == wtPerChn:
                if sVal[-2] != '\n':
                    sVal += '\n\t'
                inChnOfs = 0 ; chnNdx += 1
                itemNdx = 0 ; lineNdx = 0
    if sVal[-1] == '\n':
        sVal = sVal[:-1]

    return sVal


def MakeButtons():
    sPrefix = r'D:\BL_MICR\_sdk2\180714_SDK241_RT1050\boards\evkbimxrt1050\demo_apps\mfn_cmsisnn\btn_'
    lst = [sPrefix + 'Add', sPrefix + 'Del', sPrefix + 'Yes', sPrefix + 'No', sPrefix + 'SnsAdd', sPrefix + 'SnsZero', \
           sPrefix + 'SnsSub']
    sOut = 'const unsigned char cg_btns[%d][64*64*3] = {\n\t' % len(lst)
    for i, sFile in enumerate(lst):
        img = Image.open(sFile + '.bmp')
        a = np.array(img)
        sOut += '{\n\t'
        sOut += DumpWt(a, 8, 0, 4, [' ', '  ', ' ', '\n\t'])
        sOut += '},\n\t'
    sOut += '};\n'
    fd = open('buttons.c', 'w')
    fd.write(sOut)
    fd.close()


MakeButtons()
print('Done!')