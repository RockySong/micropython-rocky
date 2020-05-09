def soft_delay(n):
    while n != 0:
        n -= 1
import pyb
for i in range(5):
    pyb.LED(1).on()
    soft_delay(60000)
    pyb.LED(1).off()
    soft_delay(60000)