:mod:`mjpeg` --- mjpeg recording
================================

.. module:: mjpeg
   :synopsis: mjpeg recording

The ``mjpeg`` module is used for mjpeg recording.

class Mjpeg -- Mjpeg recorder
=============================

You can use the mjpeg module to record large video clips. Note that mjpeg files save
compressed image data. So, they are best for recording long video clips that
you want to share. Use `gif` for short clips.

Example usage::

    import sensor, mjpeg, time

    # Setup camera.
    sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.QVGA)
    sensor.skip_frames()
    c = time.clock()

    # Create the mjpeg object.
    m = mjpeg.Mjpeg("example.mjpeg")

    # Add frames.
    for i in range(100):
        c.tick()
        m.add_frame(sensor.snapshot())

    # Finalize.
    m.close(c.fps())

Constructors
------------

.. class:: mjpeg.Mjpeg(filename, [width, [height]])

   Create a Mjpeg object which you can add frames to. ``filename`` is the path to
   save the mjpeg recording to.

   ``width`` is automatically set equal to the image sensor horizontal resolution
   unless explicitly overridden.

   ``height`` is automatically set equal to the image sensor vertical resolution
   unless explicitly overridden.

Methods
-------

.. method:: mjpeg.width()

   Returns the width (horizontal resolution) for the mjpeg object.

.. method:: mjpeg.height()

   Returns the height (vertical resolution) for the mjpeg object.

.. method:: mjpeg.size()

   Returns the file size of the mjpeg so far. This value is updated after adding frames.

.. method:: mjpeg.add_frame(image, [quality=50])

   Add an image to the mjpeg recording. The image width, height, and color mode,
   must be equal to the same width, height, and color modes used in the constructor
   for the mjpeg.

   ``quality`` is the jpeg compression quality to use to compress the image if
   it's not in JPEG format (either `sensor.RGB565` or `sensor.GRAYSCALE` format).

.. method:: mjpeg.close(fps)

   Finalizes the mjpeg recording. This method must be called once the recording
   is complete to make the file viewable.

   ``fps`` is the frame rate the mjpeg was recorded at.
