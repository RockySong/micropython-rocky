General information about the openmvcam
=======================================

.. contents::

Local filesystem and SD card
----------------------------

There is a small internal filesystem (a drive) on the openmvcam which is stored
within the microcontroller's flash memory.

When the openmvcam boots up, it needs to choose a filesystem to boot from.  If
there is no SD card, then it uses the internal filesystem as the boot
filesystem, otherwise, it uses the SD card.  After the boot, the current
directory is set to ``/``.

The boot filesystem is used for 2 things: it is the filesystem from which
``boot.py`` and ``main.py`` files are searched for, and it is the filesystem
which is made available on your PC over the USB cable.

The filesystem will be available as a USB flash drive on your PC.  You can
save files to the drive, and edit ``boot.py`` and ``main.py``.

*Remember to eject (on Linux, unmount) the USB drive before you reset your
pyboard.*

.. note::

   The above behavior is different from the pyboard which allows access to the
   internal file system and SD card at the same time within a script by creating
   a virtual file system with multiple drives for the internal flash and SD
   card.  The OpenMV Cam's behavior is different because modern operating systems
   do not mount the OpenMV Cam's internal flash drive and/or SD Card as a
   virtual file system but instead as a block device... meaning that modern
   operating systems do not see a pyboard's file system the same way as the
   pyboard sees it.  To avoid this situation we only allow one file system at a
   time to keep the operating system the OpenMV Cam is attached to and what the
   OpenMV Cam thinks its file system looks like in sync.

   That said, there is another complication.  Because modern operating systems
   mount the OpenMV Cam's internal flash drive or SD card as a block device they
   treat it as if it cannot create files itself.  Because of this if you create
   a file onboard your OpenMV Cam in code you must remount the OpenMV Cam after
   a new file is created for the operating system to rescan the OpenMV Cam to
   detect the change.  Additionally, if both the operating system and the OpenMV
   Cam are changing files on the file system at the same time the operating
   system will ignore and overwrite the OpenMV Cam's changes.

   OpenMV reconmends using the internal flash drive or SD card to store assets
   that will be read by the OpenMV Cam.  If you need to saves things to disk
   make sure you have an SD card (and don't use the internal flash drive for
   this as it is *quite* small). Additionally, if you need to write files to the
   disk keep note of the above paragraph about a rescan being required.

Boot modes
----------

On powerup, if powered by USB, the OpenMV Cam will run a bootloader program for
about 3 seconds which allows OpenMV IDE to update the firmware without using DFU.  After
3 seconds then bootloader will exit and then ``boot.py`` will run allowing you
to change the USB mode before executing ``main.py``.  If not powered
by USB then ``boot.py`` followed by ``main.py`` will run immediantly.

Flashing LED Errors
-------------------

If all colors of the RGB LED are flashing quickly there was a hard fault.  Reflash
your OpenMV Cam's firmware to fix this issue.  If this does not work your OpenMV Cam
may be damaged...
