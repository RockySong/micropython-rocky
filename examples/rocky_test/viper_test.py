import micropython
import pyb
@micropython.viper
def test_speed(imag):
    rngi = range(160)
    rngj = range(60)
    k = 0
    for i in rngi:
        for j in rngj:
            imag[k] = 0
            k += 1
img = bytearray(160*60)
t0 = pyb.millis()
test_speed(img)
dur = pyb.elapsed_millis(t0)
print('time=%d' % dur)
