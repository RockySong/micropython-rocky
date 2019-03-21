openMV for i.MX RT1050 port
=======================
ported up-to-date openMV version to i.MX RT1050, including the newest machine learning libraries + cmsis-nn examples (cifar-10, lenet, smilenet).
Framebuffer is cutdown to only 160kB (openMV3 is 300kB).
Dedicated optimization for TCM, as all 512kB SRAM on i.MX RT1050 can be configured to TCM. Current partition is 32kB ITCM, 480kB DTCM, algorithm performance boost is up to 5x from openMV3 M7 Cam. CNN inference on cifar-10 fast model is about 45.5 images/second.

Contains a KEIL project that can build. Build with i.MX RT1050 EVK from NXP, you need the OV7725 camera module, and (optional) LCD module to monitor.

Build with KEIL
----------------
Straightforward, just open <openMV>\ports\prj_keil_rt105\mpyrt105.uvprojx

Build with Make
----------------
Makefiles are not yet fully updated, can pass the QSTR generation stage.

License
-----------
All code created by myself inherits MIT license as micropython and openMV do (sorry, not yet all marked in source files)
Other 3rd party code remain their original licenses (such as NXP MCUXPresso SDK, FatFS).
No GPL like license is involved.

Contributing
------------
Welcome and do appreciate! Please raise pull request and/or issue tickets.