[![Build Status](https://travis-ci.org/micropython/micropython.png?branch=master)](https://travis-ci.org/micropython/micropython) [![Coverage Status](https://coveralls.io/repos/micropython/micropython/badge.png?branch=master)](https://coveralls.io/r/micropython/micropython?branch=master)

OpenMV port to i.MX RT1050/1060
=======================
<p align="center">
  <img src="https://raw.githubusercontent.com/micropython/micropython/master/logo/upython-with-micro.jpg" alt="MicroPython Logo"/>
</p>

OpenMV3 Cam port to i.MX RT1050/1060, can run on NXP i.MXRT1060/1060 evk and a small camear board that is highly compatible with OpenMV3 Cam.

To build under KEIL:

    Just open keil projects and build.
    prj_keil_rt1060: Build for the small factor camera board that is highly comaptible with OpenMV3
    prj_keil_rt1050_evk: Build for i.MX RT1050 evk with hyper flash.
    prj_keil_pyb_rt1050: Build for the small factor camera board, but exclude OpenMV sensor and image functions, just keep micropython, pyb module, and OpenMV IDE debug protocol.
    
To add more Python API/constants/modules/classes
    Micropython requires "QSTR" for Python binding. KEIL can't generate them, you need to add your new C source files to Makefile, and under a Linux environment with ARMGCC, run Make to generate pins, QSTRs, generated code is also in KEIL projects.
    Note: You don't have to do a entire successful Make to generate all required files (pin definitions, QSTRs, frozenpy C files). So even Make fails, it is not likely prevent you from building under KEIL.
    
Contributing
------------

MicroPython is an open-source project and welcomes contributions. To be
productive, please be sure to follow the
[Contributors' Guidelines](https://github.com/micropython/micropython/wiki/ContributorGuidelines)
and the [Code Conventions](https://github.com/micropython/micropython/blob/master/CODECONVENTIONS.md).
Note that MicroPython is licenced under the MIT license, and all contributions
should follow this license.
