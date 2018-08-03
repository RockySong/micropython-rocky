
import sensor, time, nn, image, os, pyb

sensor.reset()                          # Reset and initialize the sensor.
sensor.set_contrast(3)
sensor.set_pixformat(sensor.GRAYSCALE)     # Set pixel format to RGB565 (or GRAYSCALE)
sensor.set_framesize(sensor.QVGA)       # Set frame size to QVGA (320x240)
sensor.set_windowing((56, 56))        # Set 128x128 window.
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
while(True):
    clock.tick()
    img = sensor.snapshot()
    t1 = time.ticks()
    tmp_img = img.copy().binary([(120,255)], invert=True)
    lst = net.search(tmp_img, threshold=0.8, min_scale=1.0, scale_mul=0.8, \
    x_overlap=-1, y_overlap=-1, contrast_threshold=0.5, softmax=False)
    t2 = time.ticks() - t1
    avg = avg * 0.95 + t2 * 0.05
    for obj in lst:
        print('Detected %s - Confidence %f%%' % (labels[obj.index()], obj.value()))
        img.draw_rectangle(obj.rect(), color=(255,255,255))
        img.draw_string(4,4,labels[obj.index()])
    # print(clock.fps())
    print(avg)
