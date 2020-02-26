:mod:`gif` --- gif recording
============================

.. module:: gif
   :synopsis: gif recording

The ``gif`` module is used for gif recording.

class Gif -- Gif recorder
=========================

You can use the gif module to record small video clips. Note that gif files save
uncompressed image data. So, they are best for recording short video clips that
you want to share. Use `mjpeg` for long clips.

Example usage::

    import sensor, gif

    # Setup camera.
    sensor.reset()
    sensor.set_pixformat(sensor.GRAYSCALE)
    sensor.set_framesize(sensor.QQVGA)
    sensor.skip_frames()

    # Create the gif object.
    g = gif.Gif("example.gif")

    # Add frames.
    for i in range(100):
        g.add_frame(sensor.snapshot())

    # Finalize.
    g.close()

Constructors
------------

.. class:: gif.Gif(filename, [width, [height, [color, [loop=True]]]])

   Create a Gif object which you can add frames to. ``filename`` is the path to
   save the gif recording to.

   ``width`` is automatically set equal to the image sensor horizontal resolution
   unless explicitly overridden.

   ``height`` is automatically set equal to the image sensor vertical resolution
   unless explicitly overridden.

   ``color`` is automatically set equal to the image sensor color mode
   unless explicitly overridden:

     - False for color results in a `sensor.GRAYSCALE` 7-bit per pixel gif.
     - True for color results in a `sensor.RGB565` 7-bit per pixel gif.

   ``loop`` when True results in the gif automatically looping on playback.

Methods
-------

.. method:: gif.width()

   Returns the width (horizontal resolution) for the gif object.

.. method:: gif.height()

   Returns the height (vertical resolution) for the gif object.

.. method:: gif.format()

   Returns `sensor.RGB565` if color is True or `sensor.GRAYSCALE` if not.

.. method:: gif.size()

   Returns the file size of the gif so far. This value is updated after adding frames.

.. method:: gif.loop()

   Returns if the gif object had loop set in its constructor.

.. method:: gif.add_frame(image, [delay=10])

   Add an image to the gif recording. The image width, height, and color mode,
   must be equal to the same width, height, and color modes used in the constructor
   for the gif.

   ``delay`` is the number of centi-seconds to wait before displaying this frame
   after the previous frame (if not the first frame).

.. method:: gif.close()

   Finalizes the gif recording. This method must be called once the recording
   is complete to make the file viewable.
