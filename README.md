[![Build Status](https://travis-ci.org/micropython/micropython.png?branch=master)](https://travis-ci.org/micropython/micropython) [![Coverage Status](https://coveralls.io/repos/micropython/micropython/badge.png?branch=master)](https://coveralls.io/r/micropython/micropython?branch=master)

OpenMV port to i.MX RT1050/1060
=======================
<p align="center">
  <img src="https://github.com/RockySong/micropython-rocky/blob/master/omvrt_banner.jpg" alt="project banner" />
</p>

OpenMV firmware port to i.MX RT1050/1060, can run on NXP i.MXRT1060/1060 evk and a small camear board that is highly compatible with OpenMV3 Cam.

To build under KEIL:

    Just open keil projects and build.
    prj_keil_rt1060: Build for the small factor camera board that is highly comaptible with OpenMV3
    prj_keil_rt1050_evk: Build for i.MX RT1050 evk with hyper flash.
    prj_keil_pyb_rt1050: Build for the small factor camera board, but exclude OpenMV sensor and image functions, just keep micropython, pyb module, and OpenMV IDE debug protocol.
    
To add more Python API/constants/modules/classes
    Micropython requires "QSTR" for Python binding. KEIL can't generate them, you need to add your new C source files to Makefile, and under a Linux environment with ARMGCC, run Make to generate pins, QSTRs, generated code is also in KEIL projects.
    Note: You don't have to do a entire successful Make to generate all required files (pin definitions, QSTRs, frozenpy C files). So even Make fails, it is not likely prevent you from building under KEIL.

There is a demo video showing some key functions of OpenMV and this board.
(一个演示主要功能的多合一demo视频)

http://cloud.eeworld.com.cn///courselesson/4928/2019222035616-h45jbw.mp4.mp4

And one demo video showing object tacking based on color blob detection
(基于色块识别的物体追踪)
http://cloud.eeworld.com.cn///courselesson/4928/2019130042104-tlk9jm.mp4.mp4


中文说明 (Introduction in Chinese)

基于i.MX RT的可编程视觉模块有以下特点

    主控芯片使用NXP i.MX RT1062，600MHz Cortex-M7，1MB RAM，4MB Flash （通过QSPI扩展）
    感光芯片使用OmniVision OV7725，这是一款快速 CMOS感光芯片，最高分辨率 VGA (640x480)
    在尺寸、扩展引脚、使用习惯和软件开发接口上兼容著名的OpenMV3 M7 Cam。关键接口包括SPI, I2C, UART
    集成了Micropython运行环境，包括编译器、装载器和虚拟机。使用开发效率极高的Python语言做应用程序的二次开发。
    应用程序（使用Python编写）和数据存储在外部扩展的TF卡中。
    模块连接USB后，电脑识别出优盘。可以使用任意文本编辑器开发程序。
    兼容OpenMV IDE的调试监控协议，实现一键下载、秒见效果、监控帧缓冲、虚拟串口控制台。

模块购买

    购买的淘宝链接为：https://item.taobao.com/item.htm?id=585420906175&ns=1&abbucket=12#detail 

    第14届全国大学生智能车竞赛参赛选手专享优惠价
        大赛组委会为选手们争取到了优惠价，原价399元，优惠价349元，包邮。购买时，向卖家说明购买目的用于智能车竞赛，
        以如下格式：“学校：xxx  指导老师：xxx购买数量：x  是否需TF卡:Y/N”并拍下商品，请卖家更改价格为优惠价349元。
        注1：如果需要出具发票，需另加税点。
        注2：模块需要TF卡，默认发货不包含TF卡。如需TF卡，卖家提供高质量的32G卡，另加50元。
        注3：默认提供2.8mm焦距的M12镜头。也可以指定其它焦距或从网络采购其它焦距M12镜头。焦距越长放大倍数越高。
        注意焦距影响距离计算，并且过长的焦距有可能使定位码无法完整出现在视野中。

软件安装

    文本编辑器: 只需能编辑Python源代码的编辑器即可，如Notepad++，Visual Studio Code等。

    （强烈建议）OpenMV IDE
        本模块实现了OpenMV IDE的调试监控协议。为了体验无需存盘一键下载并且监视模块帧缓冲的功能，
        以及启用虚拟串口功能，强烈建议使用OpenMV IDE加快开发。
        OpenMV IDE的下载页面链接：https://openmv.io/pages/download。支持多种操作系统的安装包。
        注：在模块连接OpenMV IDE期间会占用虚拟串口，无法同时使用串口上的Python交互式命令环境。

使用OpenMV IDE开发与测试

    （首次）安装OpenMV IDE。注：本模块尚未支持OpenMV IDE的固件升级功能。
    插入TF卡。注：如果卡里包含main.py，本模块会在上电后自动执行main.py。
    使用USB线连接电脑上的USB口和本模块的USB micro口。这会使模块上电，红灯闪烁约2秒模块开始工作。
    注：首次上电后，系统可能花较长时间（可能超过1分钟）来安装和配置驱动，请耐心等待。若中途取消安装可导致驱动安装失败。
    如果是这样，建议拔下电源，重装OpenMV IDE再上电。
    打开OpenMV IDE，待左下角的连接按钮右上多出了USB符号时，即可点击此按钮，连接OpenMV IDE和本模块。

模块引出的信号
    引出了11个信号
<p align="center">
  <img src="https://github.com/RockySong/micropython-rocky/blob/omv_initial_integrate/docs/omvrt1_signals.jpg"/>
</p>

教程资源

    由于本模块高度兼容OpenMV Cam，后者又包含了Micropython运行环境，在网络上大量的OpenMV教程和Micropython教程均可参考。
    资源非常丰富，下面列举了一些：
        OpenMV Cam在中国区的代理：https://singtown.com/openmv/，有很多优质中文教程和指南
        中文快速上手指南：http://book.openmv.cc/quick-starter.html
    中文Micropython语言：
        https://docs.singtown.com/micropython/zh/latest/openmvcam/reference/index.html
        英文Micropython语言：http://docs.micropython.org/en/latest/

与OpenMV Cam的区别

    OpenMV Cam的软件以MIT开源协议授权，本模块移植了OpenMV软件的全部算法部分，这部分是完全兼容的。
    硬件上，OpenMV使用的是STM32F7/H7，并且集成了Micropython针对STM32的移植和硬件操作模块“pyb”。
    本模块亦实现了pyb的主要功能（见模块扩展信号节图中的黑色字体功能）。
    pyb和machine模块中并不包含和Pyboard/OpenMV Cam等板子的全部功能，但是不影响创意组比赛的使用需求。
    本模块只支持TF卡上的文件系统，不支持使用内部Flash模拟，因此TF卡是必备的。
    OpenMV Cam有很多扩展板，本模块支持其中的LCD Shield。
    本模块还包含了可选的9轴运动传感器MPU9250，OpenMV Cam不包含。
        注：如需使用，会占用I2C扩展口(I2C3)，因此其它器件的I2C slave地址不要与它(7位地址0x68/0x69)冲突。

常见问题

    图像对比度差
        建议使用黑色电工胶布粘上模块背面的扩展口（粘在M12底座的两个定位螺丝口中间，如上文照片所示）。
    图像颜色发灰（饱和度低）
        旋下M12镜头，检查背面是否粘有红外截光片，如果没有就发灰。
    图像中有污点
        旋下M12镜头，清洁OV7725芯片表面。
    OpenMV IDE中运行Hello world示例时图像刷新率低
        可以适当加延时以给IDE更多机会刷新帧缓冲：
        import utime
        在主循环最后添加 “utime.delay_ms(10)”。具体时间可调整，一般在5-10之间。
        注：在实际使用时建议去掉这个延时。
    连接USB后没有识别出优盘
        这应该是SD卡初始化失败导致的。在板子上按下复位按钮或重新上电一般会解决问题，亦可能TF卡质量差/损坏。
    摄像头图像有（蓝色）噪点
        这是因为默认的像素时钟为OV7725的上限(60MHz)，当环境的电磁干扰较大时容易出现此问题。可以通过以下方法调整：
            sensor.set_framerate(N<<11) ，建议N的取值为1-7（不要设为0！），此时，像素时钟频率为 96MHz / (N+1)，
            分别是 48M, 36M, 24M, 19.2M, 16M, 13.7M, 12M。
            注：此方法只适用于本模块(不适用于OpenMV Cam)。
            注：若像素时钟过低，会影响图像刷新率。
    摄像头图像阴暗
        可在默认启用auto gain的情况下跳过帧一段时间，如以下代码所示：
            sensor.reset()
            …
            sensor.skip_frames(time = <时间(单位ms)越长越亮，一般在100-2000之间>)
            sensor.set_auto_gain(False)
        若仍然偏暗，可以同样通过降低像素时钟来解决，参考“摄像头图像有（蓝色）噪点”的解决方法
    在暗室中即使打开红外LED (LED4)仍无法显示图像
        需要旋下M12镜头，拆除背面的红外截光片。注意，这是破坏性的操作。
    图像闪烁
        如果光源受工频影响，且摄像头采图周期接近工频，就容易出现此问题
        可按”图像有（蓝色）噪点”的方法改变像素时钟频率以回避
        亦可在python代码中插入延时以回避
    i.MX RT1062主芯片过热而损坏
        多因扩展引脚被静电打坏导致电源和地短路，使芯片整体过热而烧毁
        若接反VCC与GND也会很快过热
        可使用锡箔纸内层包裹板子，外层接地

刷新模块的固件

    注：模块正常使用时不需要这部分内容，仅当模块变砖或的确需要新固件的功能时才会用到。
    您需要安装KEIL uVison5.20以上版本 (MDK)软件，并在软件中安装i.MX RT1060的Pack，以及J-Link调试器来执行这部分操作。
    本模块的固件基于C语言的KEIL工程，开放源代码，并引出了适用于Cortex-M7核的SWD调试接口。可通过J-Link烧写固件。
    克隆或下载一个压缩包。然后使用KEIL打开源码树中的 \ports\prj_keil_rt1060\mpyrt1060.uvprojx，编译（约2-4分钟），
    编译前确保选中“debug_flexspi” Target
    使用杜邦线连接J-Link和本模块的调试接口，分别是
        J-Link.Pin6 (GND) -> GND (J1.6)
        J-Link.Pin1 (VCC) -> 3.3V (J1.5) （山寨版可选，正版必须连）
        J-Link.Pin7 (SWCLK) -> SWC (J1.3)
        J-Link.Pin9 (SWDIO) -> SWD (J1.2)
    在KEIL里点击菜单栏上的下载按钮或按F8键，等候1-2分钟即可擦除和下载完毕
    下载完毕后需重启本模块方使新固件生效
    注意：若烧写中途失败，可导致模块无法再启动，烧写前务必确保J-Link与模块的连接是稳定可靠的。

刷固件中途失败或其它原因导致模块无法启动的补救

    1.	用电烙铁先去掉电阻R4（正面，镜头底座左下），R2（背面与R4接近的位置）；
    2.	短接R1（在R4旁边）和R5（在R2旁边）
    3.	重新连接J-Link，在KEIL中重新下载程序固件；
    4.	断开R1, R5，
    5.	重焊R2和R4，或者直接短接。
    具体原理可参考原理图(omvrt1_sch.pdf)中的“BOOT”部分介绍：
    默认的启动方式是”Internal Boot(NormalBoot)”, 补救时改用”Serial Download(Bootloader)”。
    请勿尝试其它启动方式！ 
	

Contributing
------------

MicroPython is an open-source project and welcomes contributions. To be
productive, please be sure to follow the
[Contributors' Guidelines](https://github.com/micropython/micropython/wiki/ContributorGuidelines)
and the [Code Conventions](https://github.com/micropython/micropython/blob/master/CODECONVENTIONS.md).
Note that MicroPython is licenced under the MIT license, and all contributions
should follow this license.
