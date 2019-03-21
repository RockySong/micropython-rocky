import struct

def ParseJpegHeader(s = ''):
    n = s.find('ff d8 ff e0  00 10 4a 46  49 46 00 01')
    if n >= 0:
        return n
    return -1

def WriteJpegLine(sLn, fd2):
    sLn = sLn[15:65]              
    sLn = sLn.replace('  ', ' ')
    print (sLn)  
    l = sLn.split(' ')
    for sKey in l:
        n = int(sKey, 16)
        i = struct.pack('1B', n)
        fd2.write(i)

st = 0
fileNum = 0
sn = struct.pack('1H1H1H', 1,2,32768)

f=open('bintest.dat','wb')
f.write(sn)
f.write('i love u'.encode())
f.close()

fd = open('omv_protocol.txt', 'r')
for sLn in fd:
    if st == 0:
        n = ParseJpegHeader(sLn)
        if n >= 0:
            st = 1
            sFileName = 'jpeg%d.jpg' % (fileNum)
            fd2 = open(sFileName, 'wb')
            WriteJpegLine(sLn, fd2)         
    elif st == 1:
        if sLn.find(" OUT ") >= 0:
            st = 0
            fileNum += 1
            print('find %d jpegs!' % (fileNum))
            fd2.close()
        else:        
            WriteJpegLine(sLn, fd2)


fd.close()