# Face Detection Example
#
# This example shows off the built-in face detection feature of the OpenMV Cam.
#
# Face detection works by using the Haar Cascade feature detector on an image. A
# Haar Cascade is a series of simple area contrasts checks. For the built-in
# frontalface detector there are 25 stages of checks with each stage having
# hundreds of checks a piece. Haar Cascades run fast because later stages are
# only evaluated if previous stages pass. Additionally, your OpenMV Cam uses
# a data structure called the integral image to quickly execute each area
# contrast check in constant time (the reason for feature detection being
# grayscale only is because of the space requirment for the integral image).

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
sensor.set_framesize(sensor.CIF)
sensor.set_windowing((256,192))
sensor.set_pixformat(sensor.RGB565)
sensor.set_framerate(0<<9 | 1<<11)
sensor.skip_frames(time = 700)          # Wait for settings take effect.
sensor.set_auto_gain(False)
# FPS clock
clock = time.clock()
nndemo.show(0, index=0, data=0)
while (True):
    clock.tick()
    nndemo.show(0, index=0, data = 0)
    print(clock.fps())
