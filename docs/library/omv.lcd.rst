:mod:`lcd` --- lcd shield driver
================================

.. module:: lcd
   :synopsis: lcd shield driver

The ``lcd`` module is used for controlling the lcd shield.

Example usage::

    import sensor, lcd

    # Setup camera.
    sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.LCD)
    sensor.skip_frames()
    lcd.init()

    # Show image.
    while(True):
        lcd.display(sensor.snapshot())

Functions
---------

.. function:: lcd.init([type=1])

   Initializes an attached lcd shield using I/O pins P0, P2, P3, P6, P7, and P8.

   ``type`` indicates the type of lcd shield (for future use possibly):

      * 0: None
      * 1: lcd shield

.. function:: lcd.deinit()

   Deinitializes the lcd shield freeing up I/O pins.

.. function:: lcd.width()

   Returns the width (horizontal resolution) of the lcd shield.

      * None: 0 pixels.
      * lcd shield: 128 pixels.

.. function:: lcd.height()

   Returns the height (vertical resolution) of the lcd shield.

      * None: 0 pixels.
      * lcd shield: 160 pixels.

.. function:: lcd.type()

   Returns the type of the lcd shield (for future use possibly):

      * 0: None
      * 1: lcd Shield

.. function:: lcd.set_backlight(state)

   Set the lcd shield backlight state (False for off - True for on). Turning
   off the backlight dramatically reduces the lcd shield's current consumption.

   The lcd shield backlight pin is pulled up (on) by default. P6 which controls
   the backlight is left floating by default. Calling this function puts P6
   into open drain mode to control the backlight (False=low - True=float).

   If you want to reuse P6 while the lcd shield is attached then cut the
   backlight jumper on the lcd shield (leaving the backlight permanently on).
   This frees up P6 as long as you do not call this function.

.. function:: lcd.get_backlight()

   Returns the backlight state (False for off - True for on) if
   `lcd.set_backlight()` had been called previously.

.. function:: lcd.display(image, [roi])

   Displays an `image` on the lcd screen.

   ``roi`` is a region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle (0, 0, image.w, image.h).

   If the ``roi`` width is smaller than the lcd width then the ``roi`` will be
   centered on screen with vertical black borders (i.e. we fill the unused
   space with black).

   If the ``roi`` width is larger than the lcd width then the ``roi`` will be
   centered on screen and pixels that do not fit will not be shown (i.e. the
   lcd screen shows the center of the ``roi`` like a window).

   If the ``roi`` height is smaller than the lcd height then the ``roi`` will be
   centered on screen with horizontal black borders (i.e. we fill the unused
   space with black).

   If the ``roi`` height is larger than the lcd height then the ``roi`` will be
   centered on screen and pixels that do not fit will not be shown (i.e. the
   lcd screen shows the center of the ``roi`` like a window).

.. function:: lcd.clear()

   Clears the lcd screen to black.
