[![Build Status](https://travis-ci.org/micropython/micropython.png?branch=master)](https://travis-ci.org/micropython/micropython) [![Coverage Status](https://coveralls.io/repos/micropython/micropython/badge.png?branch=master)](https://coveralls.io/r/micropython/micropython?branch=master)

The face recognition (MobileFaceNet,64x64RGB) demo for i.MX RT1060
=======================
<p align="center">
  <img src="https://raw.githubusercontent.com/micropython/micropython/master/logo/upython-with-micro.jpg" alt="MicroPython Logo"/>
</p>

This is a KEIL project for building the MobileFaceNet demo, you need i.MX RT1060 EVK with LCD panel and OV7725 module.
There is a video for the demo: http://bbs.eeworld.com.cn/huodong/NXP_iMXVideo_201903/index.php#zbjs , and watch "基于恩智浦i.MX RT运行的现代大型神经网络：面部识别系统"

To build:

    open KEIL project, build and download.

Then to give it a try (save below content to 'main.py'):

    import nndemo
    while True:
        nndemo.show(0, 0) # use nndemo.show(0, 1) if you want to just recognize a fixed area


Contributing
------------

MicroPython is an open-source project and welcomes contributions. To be
productive, please be sure to follow the
[Contributors' Guidelines](https://github.com/micropython/micropython/wiki/ContributorGuidelines)
and the [Code Conventions](https://github.com/micropython/micropython/blob/master/CODECONVENTIONS.md).
Note that MicroPython is licenced under the MIT license, and all contributions
should follow this license.
