import sensor, image, time, pyb
def BlobTest(thresholds):
    sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.QVGA)

    #sensor.set_framerate(1<<9|6<<11)
    #sensor.set_framerate(2<<9|2<<11) #120/3=40M
    sensor.set_auto_gain(True)
    #sensor.set_windowing((50, 50, 50, 90))
    sensor.skip_frames(time = 500)
    #sensor.__write_reg(0xac, 0xF7)  #needed for CIF RGB565
    #sensor.set_auto_gain(True) # must be turned off for color tracking
    #sensor.set_auto_whitebal(False) # must be turned off for color tracking
    clock = time.clock()
    print('main loop')
    avg = 0
    lpCnt = 0
    #sensor.__write_reg(0xa6, c)

    for i in range(500):
            clock.tick()
            img = sensor.snapshot()
            n = 0
            t1 = time.ticks()
            #pyb.LED(2).toggle()
            blbs = img.find_blobs(thresholds, pixels_threshold=120, area_threshold=120)
            t2 = time.ticks() - t1
            avg = avg * 0.95 + t2 * 0.05
            for blob in blbs:
                    img.draw_rectangle(blob.rect(), thickness=2, color=(0,255,255))
                    img.draw_cross(blob.cx(), blob.cy())
                    n += 1
                    #print('blob %d, cx=%d,cy=%d' % (n,blob.cx(), blob.cy()))
            print('time=', avg, lpCnt)
            #if lpCnt % 10 == 0:
            #print('fps=', clock.fps())
            lpCnt += 1

def FaceTest():
    sensor.reset()

    # Sensor settings
    sensor.set_contrast(1)
    sensor.set_gainceiling(16)
    # HQVGA and GRAYSCALE are the best for face tracking.

    sensor.set_framesize(sensor.VGA)
    sensor.set_windowing((320,240))
    #sensor.set_framesize(sensor.QVGA)

    sensor.set_pixformat(sensor.GRAYSCALE)
    #sensor.set_framerate(2<<9|3<<11)
    # Load Haar Cascade
    # By default this will use all stages, lower satges is faster but less accurate.
    face_cascade = image.HaarCascade("frontalface", stages=25)
    print(face_cascade)
    clock = time.clock()
    for i in range(250):
        clock.tick()
        img = sensor.snapshot()
        objects = img.find_features(face_cascade, threshold=0.75, scale_factor=1.25)
        fID = 0
        for r in objects:
            img.draw_rectangle(r, color=(0,0,0), thickness=3)
            #img.draw_rectangle(r[0], r[1], 48, 10, fill=True, color=(0,0,0))
            fID += 1
            s = 'face %d' % (fID)
            img.draw_string(r[0], r[1], s)
        print(clock.fps())

# Color Tracking Thresholds (L Min, L Max, A Min, A Max, B Min, B Max)
# The below thresholds track in general red/green things. You may wish to tune them...
thresholds = [(30, 100, 15, 127, 15, 127), # generic_red_thresholds
                          (30, 100, -64, -8, -32, 32), # generic_green_thresholds
                          (0, 15, 0, 40, -80, -20)] # generic_blue_thresholds
# You may pass up to 16 thresholds above. However, it's not really possible to segment any
# scene with 16 thresholds before color thresholds start to overlap heavily.
thresholds2 = [(50, 92, -68, -16, 9, 119)]
thresholds3 = [(92, 64, -81, -9, 13, 75),(63, 25, 86, 63, 11, 127),(35, 55, 96, 19, -32, -128)]

def LEDTest():
    i = 0
    while(True):
        if i & 1:
            pyb.LED(1).on()
        else:
            pyb.LED(1).off()
        if i & 2:
            pyb.LED(2).on()
        else:
            pyb.LED(2).off()
        if i & 4:
            pyb.LED(3).on()
        else:
            pyb.LED(3).off()
        i += 1
        time.sleep(5)


while (True):
    #LEDTest()
    pyb.LED(1).on()
    pyb.LED(2).on()
    pyb.LED(3).on()
    pyb.LED(4).off()
    FaceTest()
    BlobTest(thresholds3)

