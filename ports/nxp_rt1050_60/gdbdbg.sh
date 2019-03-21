target remote 127.0.0.1:2331
file ./build-imxrtevk105x/firmware.elf
load
# b usbdbg.c:222
# entry of pendSV handler
# b pendsv.c:219
# b nlrthumb.c:222
#b main_omv.c:277
#b uart.c:328
#b uart.c:481
#b uart.c:673
layout split
