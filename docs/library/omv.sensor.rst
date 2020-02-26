:mod:`sensor` --- camera sensor
===============================

.. module:: sensor
   :synopsis: camera sensor

The ``sensor`` module is used for taking pictures.

Example usage::

    import sensor

    # Setup camera.
    sensor.reset()
    sensor.set_pixformat(sensor.RGB565)
    sensor.set_framesize(sensor.QVGA)
    sensor.skip_frames()

    # Take pictures.
    while(True):
        sensor.snapshot()

Functions
---------

.. function:: sensor.reset()

   Initializes the camera sensor.

.. function:: sensor.sleep(enable)

   Puts the camera to sleep if enable is True. Otherwise, wakes it back up.

.. function:: sensor.shutdown(enable)

   Puts the camera into a lower power mode than sleep (but the camera must be reset on being woken up).

.. function:: sensor.flush()

   Copies whatever was in the frame buffer to the IDE. You should call this
   method to display the last image your OpenMV Cam takes if it's not running
   a script with an infinite loop. Note that you'll need to add a delay time
   of about a second after your script finishes for the IDE to grab the image
   from your camera. Otherwise, this method will have no effect.

.. function:: sensor.snapshot()

   Takes a picture using the camera and returns an ``image`` object.

   The OpenMV Cam has two memory areas for images. The classical stack/heap
   area used for normal MicroPython processing can store small images within
   it's heap. However, the MicroPython heap is only about ~100 KB which is not
   enough to store larger images. So, your OpenMV Cam has a secondary frame
   buffer memory area that stores images taken by `sensor.snapshot()`. Images
   are stored on the bottom of this memory area. Any memory that's left
   over is then available for use by the frame buffer stack which your OpenMV
   Cam's firmware uses to hold large temporary data structures for image
   processing algorithms.

   If you need room to hold multiple frames you may "steal" frame buffer space
   by calling `sensor.alloc_extra_fb()`.

.. function:: sensor.skip_frames([n, time])

   Takes ``n`` number of snapshots to let the camera image stabilize after
   changing camera settings. ``n`` is passed as normal argument, e.g.
   ``skip_frames(10)`` to skip 10 frames. You should call this function after
   changing camera settings.

   Alternatively, you can pass the keyword argument ``time`` to skip frames
   for some number of milliseconds, e.g. ``skip_frames(time = 2000)`` to skip
   frames for 2000 milliseconds.

   If neither ``n`` nor ``time`` is specified this method skips frames for
   300 milliseconds.

   If both are specified this method skips ``n`` number of frames but will
   timeout after ``time`` milliseconds.

.. function:: sensor.width()

   Returns the sensor resolution width.

.. function:: sensor.height()

   Returns the sensor resolution height.

.. function:: sensor.get_fb()

   (Get Frame Buffer) Returns the image object returned by a previous call of
   `sensor.snapshot()`. If `sensor.snapshot()` had not been called before
   then ``None`` is returned.

.. function:: sensor.get_id()

   Returns the camera module ID.

      * `sensor.OV9650`: First gen OpenMV Cam sensor - never released.
      * `sensor.OV2640`: Second gen OpenMV Cam sensor - never released.
      * `sensor.OV7725`: Rolling shutter sensor module.
      * `sensor.MT9V034`: Global shutter sensor module.
      * `sensor.LEPTON`: Lepton1/2/3 sensor module.

.. function:: sensor.alloc_extra_fb(width, height, pixformat)

   Allocates another frame buffer for image storage from the frame buffer stack
   and returns an ``image`` object of ``width``, ``height``, and ``pixformat``.

   You may call this function as many times as you like as long as there's
   memory available to allocate any number of extra frame buffers.

   .. note::

      Creating secondary images normally requires creating them on the heap which
      has a limited amount of RAM... but, also gets fragmented making it hard to
      grab a large contigous memory array to store an image in. With this method
      you are able to allocate a very large memory array for an image instantly
      by taking space away from our frame buffer stack memory which we use for
      computer vision algorithms. That said, this also means you'll run out of
      memory more easily if you try to execute more memory intensive machine
      vision algorithms like `image.find_apriltags`.

.. function:: sensor.dealloc_extra_fb()

   Deallocates the last previously allocated extra frame buffer. Extra frame
   buffers are stored in a stack like structure.

   .. note::

      Your OpenMV Cam has two memory areas. First, you have your classical
      .data/.bss/heap/stack memory area. The .data/.bss/heap regions are
      fixed by firmware. The stack then grows down until it hits the heap.
      Next, frame buffers are stored in a secondary memory region. Memory is
      liad out with the main frame buffer on the bottom and the frame buffer
      stack on the top. When `sensor.snapshot()` is called it fills the frame bufer
      from the bottom. The frame buffer stack is then able to use whatever is
      left over. This memory allocation method is extremely efficent for computer
      vision on microcontrollers.

.. function:: sensor.set_pixformat(pixformat)

   Sets the pixel format for the camera module.

      * `sensor.GRAYSCALE`: 8-bits per pixel.
      * `sensor.RGB565`: 16-bits per pixel.
      * `sensor.BAYER`: 8-bits per pixel bayer pattern.

.. function:: sensor.set_framesize(framesize)

   Sets the frame size for the camera module.

      * `sensor.QQCIF`: 88x72
      * `sensor.QCIF`: 176x144
      * `sensor.CIF`: 352x288
      * `sensor.QQSIF`: 88x60
      * `sensor.QSIF`: 176x120
      * `sensor.SIF`: 352x240
      * `sensor.QQQQVGA`: 40x30
      * `sensor.QQQVGA`: 80x60
      * `sensor.QQVGA`: 160x120
      * `sensor.QVGA`: 320x240
      * `sensor.VGA`: 640x480
      * `sensor.HQQQVGA`: 80x40
      * `sensor.HQQVGA`: 160x80
      * `sensor.HQVGA`: 240x160
      * `sensor.B64X32`: 64x32 (for use with `image.find_displacement()`)
      * `sensor.B64X64`: 64x64 (for use with `image.find_displacement()`)
      * `sensor.B128X64`: 128x64 (for use with `image.find_displacement()`)
      * `sensor.B128X128`: 128x128 (for use with `image.find_displacement()`)
      * `sensor.LCD`: 128x160 (for use with the lcd shield)
      * `sensor.QQVGA2`: 128x160 (for use with the lcd shield)
      * `sensor.WVGA`: 720x480 (for the MT9V034)
      * `sensor.WVGA2`:752x480 (for the MT9V034)
      * `sensor.SVGA`: 800x600 (only in JPEG mode for the OV2640 sensor)
      * `sensor.SXGA`: 1280x1024 (only in JPEG mode for the OV2640 sensor)
      * `sensor.UXGA`: 1600x1200 (only in JPEG mode for the OV2640 sensor)

.. function:: sensor.set_windowing(roi)

   Sets the resolution of the camera to a sub resolution inside of the current
   resolution. For example, setting the resolution to `sensor.VGA` and then
   the windowing to (120, 140, 200, 200) sets `sensor.snapshot()` to capture
   the 200x200 center pixels of the VGA resolution outputted by the camera
   sensor. You can use windowing to get custom resolutions. Also, when using
   windowing on a larger resolution you effectively are digital zooming.

   ``roi`` is a rect tuple (x, y, w, h). However, you may just pass (w, h) and
   the ``roi`` will be centered on the frame.

.. function:: sensor.set_gainceiling(gainceiling)

   Set the camera image gainceiling. 2, 4, 8, 16, 32, 64, or 128.

.. function:: sensor.set_contrast(constrast)

   Set the camera image contrast. -3 to +3.

.. function:: sensor.set_brightness(brightness)

   Set the camera image brightness. -3 to +3.

.. function:: sensor.set_saturation(saturation)

   Set the camera image saturation. -3 to +3.

.. function:: sensor.set_quality(quality)

   Set the camera image JPEG compression quality. 0 - 100.

   .. note::

      Only for the OV2640 camera.

.. function:: sensor.set_colorbar(enable)

   Turns color bar mode on (True) or off (False). Defaults to off.

.. function:: sensor.set_auto_gain(enable, [gain_db=-1, [gain_db_ceiling]])

   ``enable`` turns auto gain control on (True) or off (False).
   The camera will startup with auto gain control on.

   If ``enable`` is False you may set a fixed gain in decibels with ``gain_db``.

   If ``enable`` is True you may set the maximum gain ceiling in decibels with
   ``gain_db_ceiling`` for the automatic gain control algorithm.

   .. note::

      You need to turn off white balance too if you want to track colors.

.. function:: sensor.get_gain_db()

   Returns the current camera gain value in decibels (float).

.. function:: sensor.set_auto_exposure(enable, [exposure_us])

   ``enable`` turns auto exposure control on (True) or off (False).
   The camera will startup with auto exposure control on.

   If ``enable`` is False you may set a fixed exposure time in microseconds
   with ``exposure_us``.

   .. note::

      Camera auto exposure algorithms are pretty conservative about how much
      they adjust the exposure value by and will generally avoid changing the
      exposure value by much. Instead, they change the gain value alot of deal
      with changing lighting.

.. function:: sensor.get_exposure_us()

   Returns the current camera exposure value in microseconds (int).

.. function:: sensor.set_auto_whitebal(enable, [rgb_gain_db])

   ``enable`` turns auto white balance on (True) or off (False).
   The camera will startup with auto white balance on.

   If ``enable`` is False you may set a fixed gain in decibels for the red, green,
   and blue channels respectively with ``rgb_gain_db``.

   .. note::

      You need to turn off gain control too if you want to track colors.

.. function:: sensor.get_rgb_gain_db()

   Returns a tuple with the current camera red, green, and blue gain values in
   decibels ((float, float, float)).

.. function:: sensor.set_hmirror(enable)

   Turns horizontal mirror mode on (True) or off (False). Defaults to off.

.. function:: sensor.set_vflip(enable)

   Turns vertical flip mode on (True) or off (False). Defaults to off.

.. function:: sensor.set_lens_correction(enable, radi, coef)

   ``enable`` True to enable and False to disable (bool).
   ``radi`` integer radius of pixels to correct (int).
   ``coef`` power of correction (int).

.. function:: sensor.set_vsync_output(pin_object)

   ``pin_object`` created with `pyb.Pin()`. The VSYNC signal from the camera
   will be generated on this pin to power FSIN on another OpenMV Cam to sync
   both camera image streams for stereo vision applications...

.. function:: sensor.ioctl(...)

   Executes a sensor specific method:

   * `sensor.IOCTL_SET_TRIGGERED_MODE` - Pass this enum followed by True or False set triggered mode for the MT9V034 sensor.
   * `sensor.IOCTL_GET_TRIGGERED_MODE` - Pass this enum for `sensor.ioctl` to return the current triggered mode state.
   * `sensor.IOCTL_LEPTON_GET_WIDTH` - Pass this enum to get the FLIR Lepton image width in pixels.
   * `sensor.IOCTL_LEPTON_GET_HEIGHT` - Pass this enum to get the FLIR Lepton image height in pixels.
   * `sensor.IOCTL_LEPTON_GET_RADIOMETRY` - Pass this enum to get the FLIR Lepton type (radiometric or not).
   * `sensor.IOCTL_LEPTON_GET_REFRESH` - Pass this enum to get the FLIR Lepton refresh rate in hertz.
   * `sensor.IOCTL_LEPTON_GET_RESOLUTION` - Pass this enum to get the FLIR Lepton ADC resolution in bits.
   * `sensor.IOCTL_LEPTON_RUN_COMMAND` - Pass this enum to execute a FLIR Lepton SDK command. You need to pass an additional 16-bit value after the enum as the command to execute.
   * `sensor.IOCTL_LEPTON_SET_ATTRIBUTE` - Pass this enum to set a FLIR Lepton SDK attribute.
      * The first argument is the 16-bit attribute ID to set (set the FLIR Lepton SDK).
      * The second argument is a MicroPython byte array of bytes to write (should be a multiple of 16-bits). Create the byte array using `struct` following the FLIR Lepton SDK.
   * `sensor.IOCTL_LEPTON_GET_ATTRIBUTE` - Pass this enum to get a FLIR Lepton SDK attribute.
      * The first argument is the 16-bit attribute ID to set (set the FLIR Lepton SDK).
      * Returns a MicroPython byte array of the attribute. Use `struct` to deserialize the byte array following the FLIR Lepton SDK.
   * `sensor.IOCTL_LEPTON_GET_FPA_TEMPERATURE` - Pass this enum to get the FLIR Lepton FPA Temp in celsius.
   * `sensor.IOCTL_LEPTON_GET_AUX_TEMPERATURE` - Pass this enum to get the FLIR Lepton AUX Temp in celsius.
   * `sensor.IOCTL_LEPTON_SET_MEASUREMENT_MODE` - Pass this followed by True or False to turn off automatic gain control on the FLIR Lepton and force it to output an image where each pixel value represents an exact temperature value in celsius.
   * `sensor.IOCTL_LEPTON_GET_MEASUREMENT_MODE` - Pass this to get if measurment mode is enabled or not.
   * `sensor.IOCTL_LEPTON_SET_MEASUREMENT_RANGE` - Pass this when measurement mode is enabled to set the temperature range in celsius for the mapping operation. The temperature image returned by the FLIR Lepton will then be clamped between these min and max values and then scaled to values between 0 to 255. To map a pixel value back to a temperature (on a grayscale image) do: ((pixel * (max_temp_in_celsius - min_temp_in_celsius)) / 255.0) + min_temp_in_celsius.
      * The first arugment should be the min temperature in celsius.
      * The second argument should be the max temperature in celsius. If the arguments are reversed the library will automatically swap them for you.
   * `sensor.IOCTL_LEPTON_GET_MEASUREMENT_RANGE` - Pass this to return the sorted (min, max) 2 value temperature range tuple. The default is -17.7778C to 37.7778C (0F to 100F) if not set yet.

.. function:: sensor.set_color_palette(palette)

   Sets the color palette to use for FLIR Lepton grayscale to RGB565 conversion.

.. function:: sensor.get_color_palette()

   Returns the current color palette setting. Defaults to `sensor.PALETTE_RAINBOW`.

.. function:: sensor.__write_reg(address, value)

   Write ``value`` (int) to camera register at ``address`` (int).

   .. note:: See the camera data sheet for register info.

.. function:: sensor.__read_reg(address)

   Read camera register at ``address`` (int).

   .. note:: See the camera data sheet for register info.

Constants
---------

.. data:: sensor.BINARY

   BINARY (bitmap) pixel format. Each pixel is 1-bit.

   This format is usful for mask storage. Can be used with `image.Image()` and
   `sensor.alloc_extra_fb()`.

.. data:: sensor.GRAYSCALE

   GRAYSCALE pixel format (Y from YUV422). Each pixel is 8-bits, 1-byte.

   All of our computer vision algorithms run faster on grayscale images than
   RGB565 images.

.. data:: sensor.RGB565

   RGB565 pixel format. Each pixel is 16-bits, 2-bytes. 5-bits are used for red,
   6-bits are used for green, and 5-bits are used for blue.

   All of our computer vision algorithms run slower on RGB565 images than
   grayscale images.

.. data:: sensor.BAYER

   RAW BAYER image pixel format. If you try to make the frame size too big
   to fit in the frame buffer your OpenMV Cam will set the pixel format
   to BAYER so that you can capture images but no image processing methods
   will be operational.

.. data:: sensor.JPEG

   JPEG mode. Only works for the OV2640 camera.

.. data:: sensor.OV9650

   `sensor.get_id()` returns this for the OV9650 camera.

.. data:: sensor.OV2640

   `sensor.get_id()` returns this for the OV2640 camera.

.. data:: sensor.OV7725

   `sensor.get_id()` returns this for the OV7725 camera.

.. data:: sensor.MT9V034

   `sensor.get_id()` returns this for the MT9V034 camera.

.. data:: sensor.LEPTON

   `sensor.get_id()` returns this for the LEPTON1/2/3 cameras.

.. data:: sensor.QQCIF

   88x72 resolution for the camera sensor.

.. data:: sensor.QCIF

   176x144 resolution for the camera sensor.

.. data:: sensor.CIF

   352x288 resolution for the camera sensor.

.. data:: sensor.QQSIF

   88x60 resolution for the camera sensor.

.. data:: sensor.QSIF

   176x120 resolution for the camera sensor.

.. data:: sensor.SIF

   352x240 resolution for the camera sensor.

.. data:: sensor.QQQQVGA

   40x30 resolution for the camera sensor.

.. data:: sensor.QQQVGA

   80x60 resolution for the camera sensor.

.. data:: sensor.QQVGA

   160x120 resolution for the camera sensor.

.. data:: sensor.QVGA

   320x240 resolution for the camera sensor.

.. data:: sensor.VGA

   640x480 resolution for the camera sensor.

.. data:: sensor.HQQQVGA

   60x40 resolution for the camera sensor.

.. data:: sensor.HQQVGA

   120x80 resolution for the camera sensor.

.. data:: sensor.HQVGA

   240x160 resolution for the camera sensor.

.. data:: sensor.B64X32

   64x32 resolution for the camera sensor.

   For use with `image.find_displacement()` and any other FFT based algorithm.

.. data:: sensor.B64X64

   64x64 resolution for the camera sensor.

   For use with `image.find_displacement()` and any other FFT based algorithm.

.. data:: sensor.B128X64

   128x64 resolution for the camera sensor.

   For use with `image.find_displacement()` and any other FFT based algorithm.

.. data:: sensor.B128X128

   128x128 resolution for the camera sensor.

   For use with `image.find_displacement()` and any other FFT based algorithm.

.. data:: sensor.LCD

   128x160 resolution for the camera sensor (for use with the lcd shield).

.. data:: sensor.QQVGA2

   128x160 resolution for the camera sensor (for use with the lcd shield).

.. data:: sensor.WVGA

   720x480 resolution for the MT9V034 camera sensor.

.. data:: sensor.WVGA2

   752x480 resolution for the MT9V034 camera sensor.

.. data:: sensor.SVGA

   800x600 resolution for the camera sensor. Only works for the OV2640 camera.

.. data:: sensor.XGA

   1024x768 resolution for the camera sensor. Only works for the OV2640 camera.

.. data:: sensor.SXGA

   1280x1024 resolution for the camera sensor. Only works for the OV2640 camera.

.. data:: sensor.UXGA

   1600x1200 resolution for the camera sensor. Only works for the OV2640 camera.

.. data:: sensor.PALETTE_RAINBOW

   Default OpenMV Cam color palette for thermal images using a smooth color wheel.

.. data:: sensor.PALETTE_IRONBOW

   Makes images look like the FLIR Lepton thermal images using a very non-linear color palette.

.. data:: sensor.IOCTL_SET_TRIGGERED_MODE

   Lets you set the triggered mode for the MT9V034.

.. data:: sensor.IOCTL_GET_TRIGGERED_MODE

   Lets you get the triggered mode for the MT9V034.

.. data:: sensor.IOCTL_LEPTON_GET_WIDTH

   Lets you get the FLIR Lepton image resolution width in pixels.

.. data:: sensor.IOCTL_LEPTON_GET_HEIGHT

   Lets you get the FLIR Lepton image resolution height in pixels.

.. data:: sensor.IOCTL_LEPTON_GET_RADIOMETRY

   Lets you get the FLIR Lepton type (radiometric or not).

.. data:: sensor.IOCTL_LEPTON_GET_REFRESH

   Lets you get the FLIR Lepton refresh rate in hertz.

.. data:: sensor.IOCTL_LEPTON_GET_RESOLUTION

   Lets you get the FLIR Lepton ADC resolution in bits.

.. data:: sensor.IOCTL_LEPTON_RUN_COMMAND

   Executes a 16-bit command given the FLIR Lepton SDK.

.. data:: sensor.IOCTL_LEPTON_SET_ATTRIBUTE

   Sets a FLIR Lepton Attribute given the FLIR Lepton SDK.

.. data:: sensor.IOCTL_LEPTON_GET_ATTRIBUTE

   Gets a FLIR Lepton Attribute given the FLIR Lepton SDK.

.. data:: sensor.IOCTL_LEPTON_GET_FPA_TEMPERATURE

   Gets the FLIR Lepton FPA temp in celsius.

.. data:: sensor.IOCTL_LEPTON_GET_AUX_TEMPERATURE

   Gets the FLIR Lepton AUX temp in celsius.

.. data:: sensor.IOCTL_LEPTON_SET_MEASUREMENT_MODE

   Lets you set the FLIR Lepton driver into a mode where you can get a valid temperature value per pixel. See `sensor.ioctl()` for more information.

.. data:: sensor.IOCTL_LEPTON_GET_MEASUREMENT_MODE

   Lets you get if measurement mode is enabled or not for the FLIR Lepton sensor. See `sensor.ioctl()` for more information.

.. data:: sensor.IOCTL_LEPTON_SET_MEASUREMENT_RANGE

   Lets you set the temperature range you want to map pixels in the image to when in measurement mode. See `sensor.ioctl()` for more information.

.. data:: sensor.IOCTL_LEPTON_GET_MEASUREMENT_RANGE

   Lets you get the temperature range used for measurement mode. See `sensor.ioctl()` for more information.
