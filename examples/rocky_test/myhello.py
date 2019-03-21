import sensor, image, time, pyb
sensor.reset()
sensor.set_pixformat(sensor.GRAYSCALE)
sensor.set_framesize(sensor.VGA)
sensor.set_framerate(2<<9|1<<11)

AHBSCR = 0xE000EFA0
isEnableUsbIrqInSnapshot = 0x20032423
for i in range(32):
    machine.mem32[AHBSCR] = 1<<0 | i<<11
    # must be 0 to avoid tearing
    machine.mem8[isEnableUsbIrqInSnapshot] = 1

    print('0x%08x' % machine.mem32[AHBSCR])
    clock = time.clock()
    for j in range(20000):
        clock.tick()
        img = sensor.snapshot()
        print(clock.fps())
        #time.sleep(3)
    time.sleep(1000)
