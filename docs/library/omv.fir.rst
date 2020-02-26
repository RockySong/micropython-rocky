:mod:`fir` --- thermopile shield driver (fir == far infrared)
=============================================================

.. module:: fir
   :synopsis: thermopile shield driver (fir == far infrared)

The ``fir`` module is used for controlling the thermopile shield.

Example usage::

    import sensor, fir

    # Setup camera.
    sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.QVGA)
    sensor.skip_frames()
    fir.init()

    # Show image.
    while(True):
        img = sensor.snapshot()
        ta, ir, to_min, to_max = fir.read_ir()
        fir.draw_ir(image, ir)
        print("====================")
        print("Ambient temperature: %0.2f" % ta)
        print("Min temperature seen: %0.2f" % to_min)
        print("Max temperature seen: %0.2f" % to_max)

Functions
---------

.. function:: fir.init([type=fir.FIR_SHIELD, [refresh, [resolution]]])

   Initializes an attached thermopile shield using I/O pins P4 and P5.

   ``type`` indicates the type of thermopile shield:

      * `fir.FIR_NONE`: 0 pixels.
      * `fir.FIR_SHIELD`: 16x4 pixels.
      * `fir.FIR_MLX90620`: 16x4 pixels.
      * `fir.FIR_MLX90621`: 16x4 pixels.
      * `fir.FIR_MLX90640`: 32x24 pixels.
      * `fir.FIR_AMG8833`: 8x8 pixels.

   ``refresh`` is the thermopile sensor power-of-2 refresh rate in Hz:

      * `fir.FIR_NONE`: N/A
      * `fir.FIR_SHIELD`: Defaults to 64 Hz. Can be 1 Hz, 2 Hz, 4 Hz, 8 Hz, 16 Hz, 32 Hz, 64 Hz, 128 Hz, 256 Hz, or 512 Hz. Note that a higher refresh rate lowers the accuracy and vice-versa.
      * `fir.FIR_MLX90620`: Defaults to 64 Hz. Can be 1 Hz, 2 Hz, 4 Hz, 8 Hz, 16 Hz, 32 Hz, 64 Hz, 128 Hz, 256 Hz, or 512 Hz. Note that a higher refresh rate lowers the accuracy and vice-versa.
      * `fir.FIR_MLX90621`: Defaults to 64 Hz. Can be 1 Hz, 2 Hz, 4 Hz, 8 Hz, 16 Hz, 32 Hz, 64 Hz, 128 Hz, 256 Hz, or 512 Hz. Note that a higher refresh rate lowers the accuracy and vice-versa.
      * `fir.FIR_MLX90640`: Defaults to 32 Hz. Can be 1 Hz, 2 Hz, 4 Hz, 8 Hz, 16 Hz, 32 Hz, or 64 Hz. Note that a higher refresh rate lowers the accuracy and vice-versa.
      * `fir.FIR_AMG8833`: 10 Hz

   ``resolution`` is the thermopile sensor measurement resolution:

      * `fir.FIR_NONE`: N/A
      * `fir.FIR_SHIELD`: Defaults to 18-bits. Can be 15-bits, 16-bits, 17-bits, or 18-bits. Note that a higher resolution lowers the maximum temperature range and vice-versa.
      * `fir.FIR_MLX90620`: Defaults to 18-bits. Can be 15-bits, 16-bits, 17-bits, or 18-bits. Note that a higher resolution lowers the maximum temperature range and vice-versa.
      * `fir.FIR_MLX90621`: Defaults to 18-bits. Can be 15-bits, 16-bits, 17-bits, or 18-bits. Note that a higher resolution lowers the maximum temperature range and vice-versa.
      * `fir.FIR_MLX90640`: Defaults to 19-bits. Can be 16-bits, 17-bits, 18-bits, or 19-bits. Note that a higher resolution lowers the maximum temperature range and vice-versa.
      * `fir.FIR_AMG8833`: 12-bits.

   For the `fir.FIR_SHIELD`, `fir.FIR_MLX90620`, and `fir.FIR_MLX90621`:

      * 15-bits -> Max of ~950C.
      * 16-bits -> Max of ~750C.
      * 17-bits -> Max of ~600C.
      * 18-bits -> Max of ~450C.

   For the `fir.FIR_MLX90640`:

      * 16-bits -> Max of ~750C.
      * 17-bits -> Max of ~600C.
      * 18-bits -> Max of ~450C.
      * 19-bits -> Max of ~300C.

   For the `fir.FIR_AMG8833`:

      * Max of ~80C.

.. function:: fir.deinit()

   Deinitializes the thermopile shield freeing up I/O pins.

.. function:: fir.width()

   Returns the width (horizontal resolution) of the thermopile shield.

      * `fir.FIR_NONE`: 0 pixels.
      * `fir.FIR_SHIELD`: 16 pixels.
      * `fir.FIR_MLX90620`: 16 pixels.
      * `fir.FIR_MLX90621`: 16 pixels.
      * `fir.FIR_MLX90640`: 32 pixels.
      * `fir.FIR_AMG8833`: 8 pixels.

.. function:: fir.height()

   Returns the height (vertical resolution) of the thermopile shield.

      * `fir.FIR_NONE`: 0 pixels.
      * `fir.FIR_SHIELD`: 4 pixels.
      * `fir.FIR_MLX90620`: 4 pixels.
      * `fir.FIR_MLX90621`: 4 pixels.
      * `fir.FIR_MLX90640`: 24 pixels.
      * `fir.FIR_AMG8833`: 8 pixels.

.. function:: fir.type()

   Returns the type of the thermopile shield:

      * `fir.FIR_NONE`
      * `fir.FIR_SHIELD`
      * `fir.FIR_MLX90620`
      * `fir.FIR_MLX90621`
      * `fir.FIR_MLX90640`
      * `fir.FIR_AMG8833`

.. function:: fir.refresh()

   Returns the current refresh rate set during `fir.init()` call.

.. function:: fir.resolution()

   Returns the current resolution set during the `fir.init()` call.

.. function:: fir.read_ta()

   Returns the ambient temperature (i.e. sensor temperature).

   Example::

      ta = fir.read_ta()

   The value returned is a float that represents the temperature in celsius.

.. function:: fir.read_ir()

   Returns a tuple containing the ambient temperature (i.e. sensor temperature),
   the temperature list (width * height), the minimum temperature seen, and
   the maximum temperature seen.

   Example::

      ta, ir, to_min, to_max = fir.read_ir()

   The values returned are floats that represent the temperature in celsius.

   .. note::

      ``ir`` is a (width * height) list of floats.

.. function:: fir.draw_ta(image, ta, [alpha=128, [scale]])

   Draws the ambient temperature ``ta`` on the `image` using a rainbow
   table color conversion. This method colors the whole image by a blue to red
   overlay depending on the ambient temperature.

   ``alpha`` controls the transparency. 256 for an opaque overlay. 0 for none.

   ``scale`` is a two value tuple which controls the rainbow table color conversion. The first number is
   the minimum temperature in celsius cutoff and the second number is the max. Values
   closer to the min are blue and values closer to the max are red.

   The default ``scale`` is (-17.7778C, 37.7778C) which corresponds to (0F, 100F).

   .. note::

      For best results look at really cold or hot objects.

.. function:: fir.draw_ir(image, ir, [alpha=128, [scale]])

   Draws the temperature list ``ir`` on the `image` using a rainbow
   table color conversion. This method auotmatically handles scaling the IR data
   to the right resolution and applies a centering offset to overlay on the image.

   ``alpha`` controls the transparency. 256 for an opaque overlay. 0 for none.

   ``scale`` is a two value tuple which controls the rainbow table color conversion. The first number is
   the minimum temperature in celsius cutoff and the second number is the max. Values
   closer to the min are blue and values closer to the max are red.

   The minimum and maximum values in the temperature list are used to scale
   the output `image` automatically unless explicitly overridden using scale.

   .. note::

      For best results look at really cold or hot objects.

.. function:: fir.snapshot([alpha=128, [scale, [pixformat=sensor.RGB565, [copy_to_fb=False]]]])

   Works like `sensor.snapshot()` and returns an `image` object that's either
   `sensor.GRAYSCALE` (grayscale) or `sensor.RGB565` (color). If ``copy_to_fb`` is False then
   the new image is allocated on the MicroPython heap. However, the MicroPython heap is limited
   and may not have space to store the new image if exhausted. Instead, set ``copy_to_fb`` to
   True to set the frame buffer to the new image making this function work just like `sensor.snapshot()`.

   ``copy_to_fb`` may also be another image object if you want to replace that image object's memory
   buffer, type, width, and height with new image data.

   .. note::

      Any use of ``copy_to_fb`` invalidates the previous image object it overwrites. Do not use
      any references to previous image objects anymore it overwrites. Either for an image object
      referencing the frame buffer, frame buffer stack, or an image on the MicroPython heap.

   ``alpha`` controls the transparency. 256 for an opaque overlay. 0 for none.

   ``scale`` is a two value tuple which controls the rainbow table color conversion. The first number is
   the minimum temperature in celsius cutoff and the second number is the max. Values
   closer to the min are blue and values closer to the max are red.

   The minimum and maximum values in the temperature list are used to scale
   the output `image` automatically unless explicitly overridden using scale.

   Returns a tuple containing the new image and the raw floating point IR temperature array in celsius.

   .. note::

      For best results look at really cold or hot objects.

Constants
---------

.. data:: fir.FIR_NONE

   No FIR sensor type.

.. data:: fir.FIR_SHIELD

   The OpenMV Cam Thermopile Shield Type (MLX90621).

.. data:: fir.FIR_MLX90620

   MLX90620 FIR sensor.

.. data:: fir.FIR_MLX90621

   FIR_MLX90621 FIR sensor.

.. data:: fir.FIR_MLX90640

   FIR_MLX90640 FIR sensor.

.. data:: fir.FIR_AMG8833

   FIR_AMG8833 FIR sensor.
