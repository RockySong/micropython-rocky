Software Setup
==============

Before you can start using your OpenMV Cam you'll need to download and install
`OpenMV IDE <https://openmv.io/pages/download/>`_.

Windows
-------

OpenMV IDE comes inside of an installer that will automatically install the IDE
along with drivers for the OpenMV Cam and the MicroPython pyboard. Just follow
the default installer prompts.

To launch OpenMV IDE afterwards just click on its shortcut in the Start Menu.

Mac
---

OpenMV IDE comes in a ``.dmg`` file. Simply open the ``.dmg`` file and then
drag the OpenMV IDE ``.app`` onto the Applications folder shortcut to install
OpenMV IDE.

In addition to installing OpenMV IDE you'll also want to install device
firmware update (DFU) support so that you can recover your OpenMV Cam if you
encounter a problem with our boot-loader.

First you'll need to install a package manager. Either
`MacPorts <https://www.macports.org/install.php>`_ or
`HomeBrew <http://brew.sh/>`_. If you don't have a preference choose HomeBrew.

For MacPorts you'll need to execute the following commands::

    sudo port install libusb py-pip
    sudo pip install pyusb

For HomeBrew you'll need to execute the following commands::

    sudo brew install libusb python
    sudo pip install pyusb

In general, you have to install ``libusb``, ``python``, and ``pyusb``.

To launch OpenMV IDE just click on its ``.app`` file in your Applications
folder.

Linux-Desktop
-------------

OpenMV IDE comes inside of an installer ``.run`` file. Just do::

    chmod +x openmv-ide-linux-*.run
    ./openmv-ide-linux-*.run

And then follow the installer prompts to install OpenMV IDE on linux.
Afterwards, see the ``README.txt`` file and the ``setup.sh`` file in the
installer output directory for installing device firmware update (DFU) support
so that you can recover your OpenMV Cam if you encounter a problem with our
boot-loader.

Finally, to launch OpenMV IDE just click on the ``bin/openmvide`` file. If
OpenMV IDE fails to launch you may need to add execution permissions first.
Do::

    chmod +x openmvide
    ./openmvide

If this doesn't work then use the ``openmvide.sh`` script instead. Do::

    chmod +x openmvide.sh
    ./openmvide.sh

In general, you'll need to run OpenMV IDE using the ``openmvide.sh`` script if
you've installed Qt on linux. The ``openmvide.sh`` script fixes linker path
issues before launching OpenMV IDE to make sure that it runs on any system.

Linux-RaspberryPi
-----------------

OpenMV IDE comes inside of an installer ``.tar.gz`` file. Just extract the
contents where you like (like ``~/openmvide``). Afterwards, see the
``README.txt`` file and the ``setup.sh`` file in the output directory for
installing device firmware update (DFU) support so that you can recover your
OpenMV Cam if you encounter a problem with our boot-loader.

Finally, to launch OpenMV IDE just click on the ``bin/openmvide`` file. If
OpenMV IDE fails to launch you may need to add execution permissions first.
Do::

    chmod +x openmvide
    ./openmvide

If this doesn't work then use the ``openmvide.sh`` script instead. Do::

    chmod +x openmvide.sh
    ./openmvide.sh

In general, you'll need to run OpenMV IDE using the ``openmvide.sh`` script if
you've installed Qt on linux. The ``openmvide.sh`` script fixes linker path
issues before launching OpenMV IDE to make sure that it runs on any system.
