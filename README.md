The face recognition (MobileFaceNet,64x64RGB) demo for i.MX RT1060
=======================
<p align="center">
  <img src="https://github.com/RockySong/micropython-rocky/blob/mfn_demo/logo/mfn_demo.jpg" alt="project banner" />
</p>

This is a KEIL project for building the MobileFaceNet demo, you need i.MX RT1060 EVK with LCD panel and OV7725 module.
There is a video for the demo: http://bbs.eeworld.com.cn/huodong/NXP_iMXVideo_201903/index.php#zbjs , and watch 
"基于恩智浦i.MX RT运行的现代大型神经网络：面部识别系统"

To build:

    (C part) open KEIL project, build and download.
    (Micropython part) Get a TF card, copy "./ports/prj_keil_omvnndemo/nndemo/main.py" to the ROOT directory 
    of TF card, insert TF card into the i.mx RT1060 EVK board. Power on the board, wait for about 3-5 seconds, 
    then the demo GUI shows, you can play with it now :)
    
Contents of "main.py":

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


How to play with the demo GUI
------------

    The demo keeps detecting a face, and if a face is detected, resizes to 64x64 then run MobileFaceNet to recognize.
    Face detection technology is from OpenMV, model is self-trained by Keras (not the nn module from OpenMV, as it
    does not support residual connections needed by MobileFaceNet model).

    To add a face, press add button then OK button, a count down timer (4 seconds) starts, keep your face in front of
    the lens, after the count down timer reaches 0, it will take a snapshot when your face is detected, then add the
    feature vector of your face to database together with the resized snapshot image (64x64).
    
    To del a face, press del button then OK button, your face will be deleted when the system recognized your face.
    
    To delete all, press del button 5 times and then OK button.
    
    You can also adjust sensitivity by increase, decrease and reset. Higher sensitivity tolerance more differences of 
    faces compared with the snapshot, however, with more false triggers.

Note
------------

Original MobileFaceNet wants 112x112 RGB, we use 64x64 instead, model is ~97.4% for LFW test (sorry my laptop has a weak GPU that can't afford full training set), inference time is 295ms on 600MHz i.MX RT1062. Orignal MobileFaceNet should reaches 99%+ accuracy for LFW test with sufficient training.

Contributing
------------

MicroPython is an open-source project and welcomes contributions. To be
productive, please be sure to follow the
[Contributors' Guidelines](https://github.com/micropython/micropython/wiki/ContributorGuidelines)
and the [Code Conventions](https://github.com/micropython/micropython/blob/master/CODECONVENTIONS.md).
Note that MicroPython is licenced under the MIT license, and all contributions
should follow this license.
