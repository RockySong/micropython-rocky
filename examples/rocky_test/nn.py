import sensor, time, nn, image, os

sensor.reset()                          # Reset and initialize the sensor.
sensor.set_contrast(3)
sensor.set_pixformat(sensor.RGB565)     # Set pixel format to RGB565 (or GRAYSCALE)
sensor.set_framesize(sensor.QVGA)       # Set frame size to QVGA (320x240)
sensor.set_windowing((128, 128))        # Set window
sensor.skip_frames(time = 100)          # Wait for settings take effect.
sensor.set_auto_gain(False)
#sensor.set_framerate(0<<9|2<<11)
#net = nn.load('/cifar10.network')
net = nn.load('/cifar10_fast.network')
labels = ['plane', 'auto', 'bird', 'cat', 'deer', 'dog', 'frog', 'horse', 'ship', 'truck']
clock = time.clock()
tAvg = 40
while(True):
    clock.tick()
    img = sensor.snapshot()
    t0 = time.ticks()
    lst = net.search(img, threshold=0.595, min_scale=1, scale_mul=0.8, \
    x_overlap=-1, y_overlap=-1, contrast_threshold=0.5)
    t1 = time.ticks() - t0
    tAvg = (tAvg * 200 + t1 * 56) >> 8
    for obj in lst:
        print(' %s  - Confidence %f%%' % (labels[obj.index()], obj.value()))
        rc = obj.rect()
        img.draw_rectangle(rc, color=(255,255,255))
        img.draw_string(rc[0], rc[1], labels[obj.index()])
    print('infer fps=%.1f' % (1000.0 / tAvg))
