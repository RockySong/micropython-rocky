import sensor, time, image, nndemo
sensor.reset()
# Sensor settings
sensor.set_auto_gain(True)
sensor.set_auto_exposure(True)
sensor.set_auto_whitebal(True)
sensor.set_brightness(2)
sensor.set_contrast(1)
sensor.set_gainceiling(16)
# HQVGA and GRAYSCALE are the best for face tracking.
sensor.set_framesize(sensor.VGA)
sensor.set_windowing((256,192))
sensor.set_pixformat(sensor.RGB565)
sensor.set_framerate(0<<9 | 1<<11)
sensor.skip_frames(time = 1300)          # Wait for settings take effect.
sensor.set_auto_gain(False)
# FPS clock
clock = time.clock()
nndemo.show(0, index=0, data=0)
while (True):
    clock.tick()
    nndemo.show(0, index=0, data = 1)
    print(clock.fps())
