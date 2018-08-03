import sensor, image, time, pyb, nn
def BlobTest(thresholds, loopCnt = 390):
    #sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.QVGA)
    sensor.set_windowing((0,0,999,999))
    sensor.set_auto_gain(True)
    sensor.set_auto_whitebal(True) # must be turned off for color tracking
    clock = time.clock()
    avg = 0.0
    startTick = time.ticks()
    while(True):
        if time.ticks() - startTick > loopCnt:
            break
        clock.tick()
        img = sensor.snapshot()
        img.draw_string(4, 4, 'Color blob detect', color=(0,0,0))
        t0 = time.ticks()
        blobSet = img.find_blobs(thresholds, pixels_threshold=200, area_threshold=200)
        t1 = time.ticks() - t0
        avg = avg * 0.95 + t1 * 0.05
        for blob in blobSet:
            img.draw_rectangle(blob.rect())
            img.draw_cross(blob.cx(), blob.cy())
        print('algo time cost : %.2f ms' % (avg))

def FaceTest(loopCnt = 220):
    #sensor.reset()

    # Sensor settings
    sensor.set_contrast(1)
    sensor.set_gainceiling(16)
    # HQVGA and GRAYSCALE are the best for face tracking.

    #sensor.set_framesize(sensor.VGA)
    #sensor.set_windowing((320,240))
    sensor.set_framesize(sensor.HQVGA)
    sensor.set_windowing((0,0,999,999))
    sensor.set_pixformat(sensor.GRAYSCALE)
    #sensor.set_framerate(2<<9|3<<11)
    # Load Haar Cascade
    # By default this will use all stages, lower satges is faster but less accurate.
    face_cascade = image.HaarCascade("frontalface", stages=25)
    print(face_cascade)
    clock = time.clock()
    avg = 0.0
    startTick = time.ticks()
    while (True):
        if time.ticks() - startTick > loopCnt:
            break
        clock.tick()
        img = sensor.snapshot()
        img.draw_string(4,4,'Face Detect', color = (0,0,0))
        t0 = time.ticks()
        objects = img.find_features(face_cascade, threshold=0.75, scale_factor=1.25)
        t1 = time.ticks() - t0
        avg = avg * 0.90 + t1 * 0.10
        fID = 0
        for r in objects:
            img.draw_rectangle(r, color=(0,0,0), thickness=3)
            #img.draw_rectangle(r[0], r[1], 48, 10, fill=True, color=(0,0,0))
            fID += 1
            s = 'face %d' % (fID)
            img.draw_string(r[0], r[1], s)
        print('algo time cost : %.2f ms' % (avg))

def CIFAR10Test(loopCnt = 600, isFull = False):
    pyb.LED(1).off()
    pyb.LED(2).off()
    pyb.LED(3).off()
    #sensor.reset()                          # Reset and initialize the sensor.
    sensor.set_contrast(3)
    sensor.set_pixformat(sensor.RGB565)     # Set pixel format to RGB565 (or GRAYSCALE)
    sensor.set_framesize(sensor.QVGA)       # Set frame size to QVGA (320x240)
    sensor.set_windowing((192, 192))        # Set window
    sensor.skip_frames(time = 100)          # Wait for settings take effect.
    sensor.set_auto_gain(False)
    sensor.set_framerate(0<<9|1<<12)
    if isFull:
        net = nn.load('/cifar10.network')
    else:
        net = nn.load('/cifar10_fast.network')
    labels = ['plane', 'auto', 'bird', 'cat', 'deer', 'dog', 'frog', 'horse', 'ship', 'truck']
    clock = time.clock()
    tAvg = 0.0
    startTick = time.ticks()
    while (True):
        if time.ticks() - startTick > loopCnt:
            break
        clock.tick()
        img = sensor.snapshot()
        img.draw_string(4,4,'CIFAR-10', color=(0,0,0))
        t0 = time.ticks()
        lst = net.search(img, threshold=0.595, min_scale=1, scale_mul=0.8, \
        x_overlap=-1, y_overlap=-1, contrast_threshold=0.5)
        t1 = time.ticks() - t0
        tAvg = tAvg * 0.9 + t1 * 0.1
        for obj in lst:
            print(' %s  - Confidence %f%%' % (labels[obj.index()], obj.value()))
            rc = obj.rect()
            img.draw_rectangle(rc, color=(255,255,255))
            img.draw_string(80, 4, labels[obj.index()], color=(0,0,0))
        print('algo time cost : %.2f ms' % (tAvg))

def LENETTest(loopCnt = 1200):
    #sensor.reset()                          # Reset and initialize the sensor.
    sensor.set_contrast(3)
    sensor.set_pixformat(sensor.GRAYSCALE)     # Set pixel format to RGB565 (or GRAYSCALE)
    sensor.set_framesize(sensor.QVGA)       # Set frame size to QVGA (320x240)
    sensor.set_windowing((84, 84))        # Set 128x128 window.
    sensor.set_auto_gain(True)
    sensor.set_auto_whitebal(False)
    sensor.set_auto_exposure(False)
    sensor.skip_frames(time = 100)          # Wait for settings take effect.

    net = nn.load('/lenet.network')
    labels = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    clock = time.clock()
    avg = 0.0
    pyb.LED(1).on()
    pyb.LED(2).on()
    pyb.LED(3).on()
    startTick = time.ticks()
    while (True):
        if time.ticks() - startTick > loopCnt:
            break
        clock.tick()
        img = sensor.snapshot()
        img.draw_string(2,2,'LENET', color=(0,0,0))
        t1 = time.ticks()
        tmp_img = img.copy().binary([(120,255)], invert=True)
        lst = net.search(tmp_img, threshold=0.8, min_scale=1, scale_mul=0.8, \
        x_overlap=-1, y_overlap=-1, contrast_threshold=0.5, softmax=False)
        t2 = time.ticks() - t1
        avg = avg * 0.95 + t2 * 0.05
        for obj in lst:
            print('Detected %s - Confidence %f%%' % (labels[obj.index()], obj.value()))
            img.draw_rectangle(obj.rect())
            img.draw_string(68,4,labels[obj.index()], color = (0,0,0))
        # print(clock.fps())
        print('algo time cost : %.2f ms' % (avg))


# Color Tracking Thresholds (L Min, L Max, A Min, A Max, B Min, B Max)
# The below thresholds track in general red/green things. You may wish to tune them...
thresholds = [(30, 100, 15, 127, 15, 127), # generic_red_thresholds
                          (30, 100, -64, -8, -32, 32), # generic_green_thresholds
                          (0, 15, 0, 40, -80, -20)] # generic_blue_thresholds
# You may pass up to 16 thresholds above. However, it's not really possible to segment any
# scene with 16 thresholds before color thresholds start to overlap heavily.
thresholds2 = [(50, 92, -68, -16, 9, 119)]
thresholds3 = [(92, 64, -81, -9, 13, 75),(63, 25, 86, 63, 11, 127),(44, 79, -106, 27, -90, -52)]

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

def QRCodeTest(loopCnt = 120):
    #sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.VGA)
    sensor.set_windowing((0,0,360,320))
    sensor.set_auto_gain(True) # must turn this off to prevent image washout...
    clock = time.clock()
    avg = 0.0
    startTick = time.ticks()
    while (True):
        if time.ticks() - startTick > loopCnt:
            break
        clock.tick()
        img = sensor.snapshot()
        img.draw_string(4,4,'QR Code Scan', color=(0,0,0))
        # img.lens_corr(1.2) # strength of 1.8 is good for the 2.8mm lens.
        t1 = time.ticks()
        codeSet = img.find_qrcodes()
        t2 = time.ticks() - t1
        avg = avg * 0.92 + t2 * 0.08
        for code in codeSet:
            img.draw_rectangle(code.rect(), color = (255, 0, 0))
            print(code)
        print('algo time cost : %.2f ms' % (avg))

while (True):
    #LEDTest()
    pyb.LED(1).on()
    pyb.LED(2).on()
    pyb.LED(3).on()
    pyb.LED(4).off()
    sensor.reset()
    FaceTest(12345)
    LENETTest(12345)
    BlobTest(thresholds3, 12345)
    CIFAR10Test(12345)
    QRCodeTest(12345)

