import sensor, time, nn, image, os

sensor.reset()                          # Reset and initialize the sensor.
sensor.set_contrast(3)
sensor.set_pixformat(sensor.RGB565)     # Set pixel format to RGB565 (or GRAYSCALE)
sensor.set_framesize(sensor.QVGA)       # Set frame size to QVGA (320x240)
sensor.set_windowing((200, 200))        # Set 128x128 window.
sensor.skip_frames(time = 100)          # Wait for settings take effect.
sensor.set_auto_gain(False)
sensor.set_auto_exposure(False)

net = nn.load('/cifar10_fast.network')
labels = ['airplane', 'automobile', 'bird', 'cat', 'deer', 'dog', 'frog', 'horse', 'ship', 'truck']
clock = time.clock()
while(True):
	clock.tick()
	img = sensor.snapshot()
	
