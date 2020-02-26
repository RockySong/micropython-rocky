:mod:`tv` --- tv shield driver
==============================

.. module:: tv
   :synopsis: tv shield driver

The ``tv`` module is used for controlling the tv shield.

Example usage::

    import sensor, tv

    # Setup camera.
    sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.QQVGA)
    sensor.skip_frames()
    tv.init()

    # Show image.
    while(True):
        tv.display(sensor.snapshot())

Functions
---------

.. function:: tv.init([type=1])

   Initializes an attached lcd shield using I/O pins P0, P2, and P3.

   ``type`` indicates the type of tv shield (for future use possibly):

      * 0: None
      * 1: tv shield

.. function:: tv.deinit()

   Deinitializes the tv shield freeing up I/O pins.

.. function:: tv.type()

   Returns the type of the tv shield (for future use possibly):

      * 0: None
      * 1: tv Shield

.. function:: tv.channel(channel)

   If using the wireless TV shield FPV sets the broadcast channel to channel 1-8.

.. function:: tv.display(image)

   Displays a QQVGA `image` on the tv screen.

.. function:: tv.palettes()

   Draws color palettes on the tv screen.
