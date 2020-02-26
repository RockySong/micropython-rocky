Hardware Setup
==============

Before connecting your OpenMV Cam to your computer you'll want to clean the
camera IC first. You'll need some type of cloth that doesn't leave behind
strands (like a microfiber cloth used to clean eye-glasses) and some isopropyl
alcohol.

    1.
        Use a screw driver to remove the two lens mount screw from the lens
        mount on your OpenMV Cam.
    2.
        Apply some isopropyl alcohol to a small part of the cloth.
    3.
        Rub the wet part of the cloth on the camera IC gently. Any dirt spots on
        the camera IC will be microscopic to the human eye so just try to
        generally rub down the top of the camera IC. Note that the top of the
        camera IC is glass.
    4.
        After cleaning the camera IC make sure the alcohol has evaporated
        completely and that no cloth strands were left behind. Note that we're
        using isopropyl alcohol versus water since isopropyl alcohol evaporates
        quickly and doesn't leave anything behind.
    5.
        Use the screw driver to re-attach the lens mount. Make sure that the set
        screw on the lens mount points off the top/back of the OpenMV Cam.

Next, find a micro-usb cable and connect your OpenMV Cam to your computer and
then launch OpenMV IDE.

.. note::

    Please be gentle with the micro-usb cable. When connecting or disconnecting
    the micro-usb cable to your OpenMV Cam please move the cable side-to-side
    and not up-and-down. You can easily rip off the micro-usb connector on our
    first generation of OpenMV Cams (OpenMV Cam M4) with up-and-down movement.
    Our second generating OpenMV Cam (OpenMV Cam M7) uses a micro-usb connector
    with through-hole strain relief pins to be more robust.

On windows you should see some notifications about windows installing drivers
and such. Wait until windows finishes installing drivers, your OpenMV Cam's
USB flash drive appears, and the blue led on your OpenMV Cam is blinking before
trying to connect with OpenMV IDE.

On mac or linux please wait until your OpenMV Cam's USB flash drive file
browser window appears (you may have to click on it for the operating system to
mount it) and the blue led on your OpenMV Cam is blinking before trying to
connect with OpenMV IDE.

If your OpenMV Cam appears unresponsive after connecting to the computer that
is okay too. If you didn't see a green light flashing right after it was
connected then we can use DFU to re-program your OpenMV Cam. If you saw a green
light but no USB flash drive appeared then we can still use DFU to re-program.

Next, launch OpenMV IDE and click on the connect button (lower left-hand corner
in OpenMV IDE). OpenMV IDE should then automatically connect to your OpenMV
Cam. However, you may get a few different errors your first time:

    *
        If OpenMV IDE gives you an error about not being able to find a
        corresponding drive to mount then you need to make sure that the USB
        flash drive the OpenMV Cam appears as is mounted. In particular, linux
        does not always amount mount USB flash drives like Windows and Mac do.
        You can force a mount in Ubuntu for example by clicking on the flash
        drive icon that will appear in the launcher menu. Anyway, after getting
        this error and mounting the drive just click on the ``Drive:`` label
        on the bottom right-hand side of OpenMV IDE to connect to the OpenMV
        Cam's flash drive after the OpenMV IDE has connected to your OpenMV
        Cam's serial port.

    *
        If OpenMV IDE can't connect to your OpenMV Cam at all it will ask you if
        you have an OpenMV Cam connected to the PC. There are two possible
        reasons for this. First, your micro-usb cable may be a power only
        cable. A large number of micro-usb cables are so make sure that it's
        a power and data micro-usb cable and that it's not broken. I.e. test
        the cable with a known working micro-usb device. Otherwise, your OpenMV
        Cam's firmware might not be working. To fix this just follow the
        prompts OpenMV IDE displays after clicking connect.

        *
            If your OpenMV Cam's boot-loader is working (green light flashes on
            power-on) and your computer can connect to our boot-loader then
            OpenMV IDE should be able to automatically update your OpenMV Cam's
            firmware for you.

        *
            If your OpenMV Cam's boot-loader isn't working (green light doesn't
            flash on power-on) or your computer can't connect to our
            boot-loader OpenMV IDE will display a "connecting" box. You can try
            unplugging your OpenMV Cam and plugging it back in, this may fix
            the issue, otherwise click cancel and then OpenMV IDE will ask if
            you want to use DFU to recover your OpenMV Cam's firmware. Say yes
            and follow the prompts to recover your OpenMV Cam's firmware via
            DFU. DFU should 100% work to recover your OpenMV Cam on Windows and
            should work on Mac and Linux if you installed DFU support. However,
            on Mac and Linux the first connection since the OpenMV Cam was
            plugged into your computer may fail. Just try again and it should
            work the second time.

.. note:

    We've built in a ton of features into OpenMV IDE to recover your OpenMV
    Cam's firmware. Please do not give up if you encounter problems initially
    setting up your OpenMV Cam. Note that for the OpenMV Cam M7 everything
    should just work. Only the OpenMV Cam M4 should suffer from issues like the
    above.

Anyway, once you've connected to your OpenMV Cam the firmware may be
out-of-date. To update your firmware please click on the ``Firmware Version:``
label on the bottom right-hand side of OpenMV IDE if it says your firmware is
out-of-date. OpenMV IDE will then automatically update your OpenMV Cam's
firmware. If there's a problem connecting to your OpenMV Cam's boot-loader on
your computer OpenMV IDE will try to update your firmware using DFU. Please
follow the prompts to update your firmware via DFU. As mentioned above with DFU
on Mac and Linux please try updating via DFU twice if the first time fails.

Moving on, once your OpenMV Cam's firmware is up-to-date please run the
``hello_world.py`` script you see in front of you in OpenMV IDE. To do this
simply click on the green run button (bottom left-hand corner) in OpenMV IDE.

The ``hello_world.py`` script turns your OpenMV Cam into a webcam showing you
what it sees. If this is the first time you've run your OpenMV Cam the lens
will be out of focus. To focus the lens do the following:

    1.
        Make sure the set screw is not fully screwed in and that you can screw
        the lens in easily.
    2.
        Screw the lens in until the image comes into focus in OpenMV IDE's
        frame buffer.
    3.
        Tighten the set screw on your OpenMV Cam's lens mount to prevent the
        lens from moving anymore. Note that the set screw doesn't dig into the
        lens threads but instead just creates a bump in the plastic preventing
        the lens from unscrewing anymore.

Your OpenMV Cam is ready to use now!

.. note::

    We require you to manually clean your OpenMV Cam camera IC and then focus
    the lens because it's very expensive for us to do this currently. As we
    increase our production volume we'll be able to do this eventually for you.
    Note that all OpenMV Cam camera ICs are cleaned before being packaged, but,
    since focusing is not done our manufacturer can't tell if the camera IC is
    clean. The quality control test we use for each OpenMV Cam only verifies
    that the camera IC is connected properly and operating normally.

USB Flash Drive Notes
---------------------

Your OpenMV Cam has a USB flash drive built-into it. This flash drive appears
when your OpenMV Cam is plugged into your computer. There are a few things you
should know about this flash drive:

    1.
        Windows/Mac/Linux assume USB flash drives can't create files by
        themselves. So, if you create a file on our OpenMV Cam in a script
        Window/Mac/Linux won't detect that the new file exists until you either
        reset your OpenMV Cam using OpenMV IDE (see Tools->Reset) or disconnect
        and then reconnect your OpenMV Cam to your computer.
    2.
        If you see a red light blinking on your OpenMV Cam while it's connected
        to your computer that's just a notification that your computer is
        accessing your OpenMV Cam's USB drive.
    3.
        If you corrupt the state of the internal USB flash drive of your OpenMV
        Cam you can reformat the flash drive either through your operating
        systems reformatting tool or by re-installing your OpenMV Cam's
        firmware and selecting the "erase internal flash drive" option.
    4.
        You can accidentally corrupt your OpenMV Cam's internal flash drive
        state by trying to save images to the internal flash drive (i.e. using
        up all the space of the small flash drive because most images are
        larger than the internal flash drive which is only a few KB), or if
        power is removed from your OpenMV Cam while it's saving something.
        The internal flash drive uses the FAT filesystem which has no ability
        to recover from partial writes due to power failure like modern file
        systems such as NTFS (Windows) on your PC. NTFS does something called
        journaling which involves writing what it's about to do in a scratch
        buffer, doing what it wrote in the scratch buffer, and then clearing
        the scratch buffer. This allows NTFS to recover if power is lost by
        looking at the scratch buffer. FAT, the file system used by DOS,
        Windows 95/98, etc. doesn't have this feature so if power is lost while
        it's writing to a file the whole drive could be corrupted. Why use FAT
        then? Because it's the de-facto standard for USB Flash Drives, but,
        more importantly there are open-source drivers for it and it's not
        under patent protection.
    5.
        In general, avoid writing to your OpenMV Cam's internal flash drive in
        a python script. Instead, just use the internal flash drive to store
        assets manually copied onto your OpenMV Cam while it is connected to
        your computer by you.
    6.
        After manually copying assets to your OpenMV Cam's internal flash drive
        please use the safety remove hardware feature before unplugging your
        OpenMV Cam (or not, the system won't break if you ignore doing this).
    7.
        Windows may ask to scan and fix the USB Flash Drive before mounting it.
        You can either say yes or no to this. Windows will generally only ask
        if the power was turned off on the the internal flash drive during a
        write. So, if Windows asks to scan and fix the drive then let it.
    8.
        Finally, if you insert a micro-sd card into the micro-sd card slot on
        your OpenMV Cam the micro-sd card will replace the internal flash drive
        for all of the above. The OpenMV Cam supports micro-sd cards up to
        32 GB in size. In particular, we support SD and SDHC micro-sd cards,
        but, not SDXC cards which are the ones larger than 32 GB. However, this
        is only because SDXC cards aren't formatted using the FAT file system.
        If you format an SDXC card with FAT then it may work with the OpenMV
        Cam. Last, feel free to save pictures/video on a micro-sd card. Just
        don't do this on your OpenMV Cam's internal flash drive.
