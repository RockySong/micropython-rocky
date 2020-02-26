Script Structure
================

Let's learn how to program your OpenMV Cam now! Note that this tuturial assumes
you know how the python language works. If you don't know how python works
please study up on it. There are plenty of web tuturials about how to write
python code (finally, if you know any other C like programming language you can
pick up python easily since it's VERY similar).

Anyway, any script you write is going to have three distinct parts::

    import ...

    ...

    one time setup ...

    ...

    while(True): # Loop
        ...

The first part of your OpenMV Cam code should include some header comments,
import statements to bring modules into scope, and finally constants and global
variables in your code.

Next, you're going to want to do one-time setup code. This includes things like
creating I/O pin objects, setting up the camera, defining helper functions,
etc.

Finally, you'll create a ``while(True):`` loop under which you'll put all code
that gets called in a loop repeatedly until power-off.

Here's an example of this::

    ### Header comments, import statements, etc.

    # Hello World Example
    #
    # Welcome to the OpenMV IDE! Click on the green run arrow button below to run the script!

    import sensor, image, time

    ### One time setup

    sensor.reset()                      # Reset and initialize the sensor.
    sensor.set_pixformat(sensor.RGB565) # Set pixel format to RGB565 (or GRAYSCALE)
    sensor.set_framesize(sensor.QVGA)   # Set frame size to QVGA (320x240)
    sensor.skip_frames(time = 2000)     # Wait for settings take effect.
    clock = time.clock()                # Create a clock object to track the FPS.

    ### Infinite loop

    while(True):
        clock.tick()                    # Update the FPS clock.
        img = sensor.snapshot()         # Take a picture and return the image.
        print(clock.fps())              # Note: OpenMV Cam runs about half as fast when connected
                                        # to the IDE. The FPS should increase once disconnected.

Note that if you do not have an infinite while loop in your code then once your
OpenMV Cam finishes running the script it will sit there and do nothing.
