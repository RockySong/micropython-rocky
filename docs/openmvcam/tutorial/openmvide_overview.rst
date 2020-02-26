OpenMV IDE Overview
===================

Let's talk about OpenMV IDE now. OpenMV IDE is the tool you'll be using to
program your OpenMV Cam with. It features a powerful text editor powered by
QtCreator, a frame buffer viewer, histogram display, and an integrated serial
terminal for debug output from your OpenMV Cam.

Anyway, the IDE is more or less straight forward to use. A lot of effort was
put in to stream-line things in the IDE. However, there are a few things you
should know about in the IDE.

File Menu and Examples
----------------------

Under the file menu in OpenMV IDE you have all your standard text editor
options. New, Open, Save, Save As, Print, etc. Anyway, when you create a new
file or open one it will appear in the text editor pane. Please note that you
can have multiple files open which you can select between by clicking on the
combo box that displays the name of the current file. OpenMV IDE uses QtCreator
as the text editor backend and actually supports opening multiple files in
multiple windows with horizontal and vertical splitting capabilities. However,
all of that was hidden to make it obvious which script will get run when you
click the run button like in the Arduino IDE. If you want to edit scripts in
a different editor or you need to open more than one file at a time just open
the files in the editor of your choice and work on them. OpenMV IDE will
automatically detect the files have changed and ask you if you want to load
the changes when you click on the OpenMV IDE window again.

.. note::

    Only one instance of OpenMV IDE is allowed on your computer at a time.
    This is done so that if you try to open a file via your file explorer the
    one instance of OpenMV IDE will open the file. This also allows you to
    open files using drag-and-drop.

Moving on, under the file menu you'll find the examples menu which has tons of
scripts showing off how to use different features of the OpenMV Cam. As we
implement more features more examples will show up. Make sure to familiarize
yourself with the example scripts so you can use your OpenMV Cam effectively.

For personal script storage, OpenMV IDE looks in your documents folder for an
"OpenMV" directory. OpenMV IDE will display the contents of the "OpenMV" folder
at File -> Documents Folder.

Lastly, whenever you create a new file in OpenMV IDE or open an example script
OpenMV IDE creates a memory only copy of the file that is not stored on disk
like in the Arduino IDE. This let's you quickly test out ideas without having
to create a file.

Text Editing
------------

OpenMV IDE has a professional text editor powered by the QtCreator backend.
You've got infinite undo and redo across all open files, white-space
visualization (important for MicroPython), font-size controls, and best-of-all
QtCreator's find and replace. The find and replace features regular expression
matching with the ability to capture text during the find and use that captured
text for the replace. Additionally, it also can preserve case while replacing.
Finally, the find and replace features works not only on the current file, but,
it can work on all files in a folder or all open files in OpenMV IDE.

In addition to the nice text editing enviornment OpenMV IDE also provides
auto-completion support hover tool-tips on keywords. So, after typing ``.`` for
example in Python OpenMV IDE will detect that you're about to write a function
or method name and it will show you an auto-completion text box. Once you've
written the function/method name it will also walk you through the arguments.
Finally, if you hover your mouse cursor over any keyword OpenMV IDE will
display the documentation for that keyword in a tooltip. These two features
make editing scripts a joy!

Connecting to your OpenMV Cam
-----------------------------

Connecting to your OpenMV Cam was covered in detail in the previous
``Hardware Setup`` tutorial page. Once you've gotten past all the startup
issues that involve programming firmware and etc. you just have to click
the connect button in the bottom left-hand corner of OpenMV IDE to connect
to your OpenMV Cam.

OpenMV IDE is smart about connecting and automatically filters our all serial
ports that aren't an OpenMV Cam. If there's only one OpenMV Cam attached to
your computer it will find it and connect immediately. If you have two OpenMV
Cams it will ask you which serial port to connect to then. Note that OpenMV
IDE will remember your pick so that next time if you connect the serial port
for the OpenMV Cam you want to connect to will already be selected.

After connecting to your OpenMV Cam's serial port OpenMV IDE will then try to
determine the USB flash drive on your computer associated with your OpenMV Cam.
OpenMV IDE will do some smart filtering on USB flash drives to automatically
connect to the right one if possible. However, it may not be able to determine
the correct one automatically and will ask you to help it if it can't. Like
with serial ports above OpenMV IDE will remember your selection so the next
time you connect it will automatically highlight your previous choice.

.. note::

    OpenMV IDE needs to associate the USB flash drive on your OpenMV Cam with
    your OpenMV Cam's virtual serial port so that it can parse compile error
    messages and open the file with the error easily. It also needs the drive
    information for the ``Save open script to OpenMV Cam`` command. That all
    said, OpenMV IDE can still function without knowing your OpenMV Cam's USB
    flash drive and will just disable features that depend on this knowledge.

Finally, after connecting to your OpenMV Cam the connect button will be
replaced with the disconnect button. Click the disconnect button to disconnect
from your OpenMV Cam. Note that disconnecting will stop whatever script is
currently executing on your OpenMV Cam. You can also just unplug your OpenMV
Cam from your computer without disconnecting and OpenMV IDE will detect that
and automatically disconnect from your OpenMV Cam. If your OpenMV Cam crashes
OpenMV IDE will detect this too and disconnect from your OpenMV Cam.

.. note::

    It is possible on Windows/Mac/Linux for the serial port driver to crash in
    a terrible way if your OpenMV Cam becomes unresponsive. On Windows you'll
    notice this as an unkillable OpenMV IDE process without any window in
    the Task Manager. If this happens the only recourse is to restart your
    computer as the unkillable process will prevent any new instance of OpenMV
    IDE from connecting to any OpenMV Cam. This issues exists as a won't fix
    bug in Windows that's been around since Windows XP. On Mac/Linux this same
    issue can occur but is much harder to run into. Basically what happens on
    Windows at-least is that when the USB virtual serial port driver crashes
    from an OpenMV Cam becoming unresponsive it never let's OpenMV IDE's serial
    thread return from a Kernel function call which makes OpenMV IDE's serial
    thread unkillable. Anyway, we've done a lot of work to make sure this
    doesn't happen but please note that it still can.

Running scripts
---------------

Once you've finished editing your code and are ready to run a script just click
the green run button in the bottom left-hand corner of OpenMV IDE. The script
will then be sent to your OpenMV Cam to be compiled into Python byte-code and
executed by your OpenMV Cam.

If there were any errors in your script your OpenMV Cam will send back the
compile error in the Serial Terminal which OpenMV IDE automatically parses
looking for errors. When OpenMV IDE detects and error it will automatically
open the file in error and highlight the line in error along with displaying
a nice error message box. This feature saves you tons of time fixing errors.

Anyway, if you want to stop the script just click on the stop button which will
replace the run button while a script is running. Note that scripts can
automatically stop by themselves either due to finishing or a compile error. In
either case the run button will re-appear again.

.. note::

    OpenMV IDE automatically scans imports in your script when you click the run
    button and copies any externally required scripts that are missing to your
    OpenMV Cam. OpenMV IDE will also automatically update any out-of-date external
    modules on your OpenMV Cam when you click the run button too. OpenMV IDE looks
    for external modules in your personal "OpenMV" Documents Folder first and then
    the example folder. OpenMV IDE is able to parse both single file modules and
    directory modules.

Frame Buffer Viewer
-------------------

What makes OpenMV IDE special is the integrated frame buffer viewer. This let's
you easily see what your OpenMV Cam is looking at while working on your code.

The frame buffer viewer displays whatever was in your OpenMV Cam's frame buffer
previously when `sensor.snapshot()` is called. Anyway, we'll talk more about
that later. For now, here's what you need to know about the frame buffer
viewer:

    *
        The ``Reocord`` button on the top right-hand corner of OpenMV IDE
        records whatever is in the frame buffer. Use it to quickly make videos
        of what your OpenMV Cam sees. Note that recording works by recording
        whatever is in OpenMV IDE's frame buffer at 30 FPS. However, the frame
        buffer may be updating faster or slower than this depending on the
        application. Anyway, after the recording is complete OpenMV IDE will
        use FFMPEG to transcode the recording to whatever file format you want
        for sharing.

    *
        The ``Zoom`` button on the top right-hand corner of OpenMV IDE controls
        the zoom-to-fit feature for the frame buffer viewer. Enable or disable
        the feature as your please.

    *
        The ``Disable`` button on the top right-hand corner of OpenMV IDE
        controls whether or not your OpenMV Cam will send images to OpenMV IDE.
        Basically, your OpenMV Cam has to JPEG compress images constantly to
        stream them to OpenMV IDE. This reduces performance. So, if you want to
        see how fast your script will run after in the wild without your OpenMV
        Cam being connected to your computer just click the ``Disable`` button.
        While the frame buffer is disabled you won't be able to see what your
        OpenMV Cam is looking at anymore but you'll still see debug output from
        your OpenMV Cam in the Serial Terminal.

Finally, you can right click on whatever image you see in the frame buffer
viewer to save that image to disk. Additionally, if you select an area in the
frame buffer by clicking and dragging you can save just that area to disk
instead. Note that you should stop the script before trying to save the frame
buffer to disk. Otherwise, you may not get the exact frame you want.

To de-select an area in the frame buffer just click anywhere without dragging
to remove the selection. However, it's possible to create one pixel selections
when de-selecting so try to click on the blank area in the frame buffer.

Histogram Display
-----------------

The integrated histogram display in OpenMV IDE exists primarily to fill the
empty space under the frame buffer viewer and provide some eye candy for you.
However, it also actually useful for getting feedback about the lighting
quality in the room, determining color tracking settings, and in general just
giving you an idea about the quality of the image your OpenMV Cam is looking
at.

You can select between four different color spaces in the histogram. Either
RGB, Grayscale, LAB, and YUV. Only Grayscale and LAB are useful for use with
programmatically controlling your OpenMV Cam. RGB is nice for looking at as
eye candy and YUV is there because we use it for JPEG compression and thought
we might as well add it.

Anyway, by default the histogram shows information about the whole image. But,
if you select an area of the frame buffer by clicking and dragging on it then
the histogram will only show the distribution of colors in that area. This
features makes the histogram display super useful for determining the correct
Grayscale and LAB color channel settings you need to use in your scripts for
`image.find_blobs()` and `image.binary()`.

Finally, the image resolution and ROI (x, y, w, h) of the bounding box you
select on the image are displayed above the histogram graphs.

Serial Terminal
---------------

To show the Serial Terminal click on the Serial Terminal button located on the
bottom of OpenMV IDE. The Serial Terminal is built-into the main window to be
easier to use. It just splits with your text editing window.

Anyway, all debug text from your OpenMV Cam created by ``print`` will be
displayed in the Serial Terminal. Other than that there's not much else to say.

Note that the serial terminal more or less will infinitely buffer text. It will
keep the last one million lines of text in RAM. So, you can use it to buffer
a large amount of debug output. Additionally, if you press ``ctrl+f`` in
Windows/Linux or the equivalent shortcut on Mac you'll be able to search
through the debug output. Finally, the Serial Terminal is smart enough not
to auto-scroll on you if you want to look at previous debug output making it
really nice to use. Auto-scrolling will turn on again if you scroll to the
bottom of the text output.

Status Bar
----------

On the status bar OpenMV IDE will display your OpenMV Cam's Firmware Version,
Serial Port, Drive, and FPS. The Firmware Version label is actually a button
you can click to update your OpenMV Cam if your OpenMV Cam's firmware is out
of date. The Serial Port label just displays your OpenMV Cam's serial port and
nothing else. The Drive label is another button which you can click on to
change the drive linked to your OpenMV Cam. Finally, the FPS label displays the
FPS OpenMV IDE is getting from your OpenMV Cam.

.. note::

    The FPS displayed by OpenMV IDE may not match the FPS from your OpenMV Cam.
    The FPS label on OpenMV IDE is the FPS OpenMV IDE is getting from your
    OpenMV Cam. But, your OpenMV Cam can actually run faster than OpenMV IDE
    sometimes and OpenMV IDE is only sampling some of the frames from your
    OpenMV Cam and not all. Anyway, OpenMV IDE's FPS will never be faster than
    your OpenMV Cam's FPS, but, it may be slower.

Tools
-----

You'll find useful tools for your OpenMV Cam under the Tools Menu in OpenMV
IDE. In particular, the ``Save open script to your OpenMV Cam`` and ``Reset
OpenMV Cam`` tools are useful for using your OpenMV Cam when developing an
application.

    *
        The ``Configure OpenMV Cam Settings file`` allows you to modify an
        ``.ini`` file stored on your OpenMV Cam using OpenMV IDE which your
        OpenMV Cam will read on bootup for particular hardware configurations.

    *
        The ``Save open script to your OpenMV Cam`` command saves whatever
        script you're currently looking at to your OpenMV Cam. Additionally,
        it can also automatically strip white-space and comments from your
        script so it takes up less space. Use this command once you think
        your program is ready to deploy without OpenMV IDE. Note that this
        command will save your script as ``main.py`` on your OpenMV Cam's
        USB flash drive. ``main.py`` is the script your OpenMV Cam will run
        once it finishes booting up.

    *
        The ``Reset OpenMV Cam`` command resets and then disconnects from your
        OpenMV Cam. You'll want to use this option if you run a script that
        creates files on your OpenMV Cam as Windows/Mac/Linux won't show you
        any files on your OpenMV Cam created programmatically in a Python
        Script after your OpenMV Cam's USB flash drive is mounted.

Next, under the Tools Menu you can invoke the boot-loader to re-program your
OpenMV Cam. The boot-loader can only be invoked while OpenMV IDE is
disconnected for your OpenMV Cam. You can either give it a binary ``.bin`` file
to re-program your OpenMV Cam with or a ``.dfu`` file. The boot-loader
feature is only for advanced users who plan on changing the default OpenMV Cam
firmware.

Open Terminal
-------------

The Open Terminal feature allows you to create new serial terminals using
OpenMV IDE to remotely debug your OpenMV Cam while it is not connected to your
computer. The Open Terminal feature can also be used to program any MicroPython
development board.

You can use the Open Terminal feature to open terminals connected to serial
ports, tcp ports, or udp ports. Note that serial ports can be bluetooth ports
for wireless connectivity.

Machine Vision
--------------

The Machine Vision submenu includes a lot of Machine Vision tools for your
OpenMV Cam. For example, the you can use the color threshold editor to get
the best color tracking thresholds for ``image.find_blobs()``. We'll make
new machine vision tools available regularly to make life easier for you.

Video Tools
-----------

If you need to compress a ``.gif`` file produced by your OpenMV Cam or convert
a ``.mjpeg`` or ImageWriter ``.bin`` video file to ``.mp4`` you can use the
convert video file action to do this. Alternatively, if you'd just like to play
these videos instead you can do that too using the play video file action.

Note that you should copy video files from your OpenMV Cam's flash drive to
your computer first before playing them since disk I/O over USB on your OpenMV
Cam is slow.

Finally, FFMPEG is used to provide conversion and video player support and may
be used for any non-OpenMV Cam activites you like. FFMPEG can convert/play
a large number of file formats.

    *
        To convert a video file into a set of pictures select the video file
        as the source and make the target a "%07d.bmp"/"%07d.jpg"/etc. file
        name. FFMPEG understands ``printf()`` like format statements with an
        image file format extension to mean it should break the video file
        up into still images of the target format.

    *
        To convert a series of still images into a video set the source file
        name to "%7d.bmp"/"%7d.jpg"/etc. where all the images in a directory
        have a name like ``1.bmp``, ``2.bmp``, etc.  FFMPEG understands
        ``printf()`` like format statements with an image file format extension
        to mean it should join those images files together into a video.

    *
        To convert an `ImageWriter` file into any other video format select
        the file as the source and target to be whatever file format you want.

    *
        To convert a video file of any format into an `ImageWriter` file select
        the video file you want to convert as the source and set the target to
        be a ``.bin`` file. FFMPEG will then break the video into JPGs and
        OpenMV IDE will turn these JPGs into RAW Grayscale or RGB565 frames
        saves to the ``.bin`` file using the `ImageWriter` file format.

    *
        To optimize a ``.gif`` file saved by your OpenMV Cam for the web set the
        source file to be that ``.gif`` and the target file to be another ``.gif``.

    *
        To convert an MJPEG file saved by your OpenMV Cam to another format
        set the MJPEG file as the source and another file using another format
        (like ``.mp4``) as the target.

Options
-------

Under the Tools Menu (or About Menu for Mac) you can access OpenMV IDE's
option dialog.

You can configure the editor font, size, zoom, tab behavior, automatic cleaning
of white space, column margins for folks who like keeping lines to 80
characters, and more.
