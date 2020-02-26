GPIO Control
============

Your OpenMV Cam has between 9 (OpenMV Cam M4) to 10 (OpenMV Cam M7) general
purpose I/O pins onboard for talking to the real-world. We're probably going to
keep the pin count this low moving into the future to keep the OpenMV Cam tiny.

Anyway, there are a few ways to use GPIO pins.

As an Input
-----------

To use a GPIO pin as an input just do::

    import pyb

    p = pyb.Pin("P0", pyb.Pin.IN)
    p.value() # Returns 0 or 1.

The `pyb.Pin()` constructor creates a pin object which you will use to control
the I/O pin on your OpenMV Cam. The string you pass to the OpenMV Cam should be
``P`` and then ``0-8`` for the OpenMV Cam M4 and ``0-9`` for the OpenMV Cam M7.

Once you've created the GPIO pin use the `pyb.Pin.value()` method to get the
state of the IO pin.

Finally, if you need to pull-up or pull-down the IO pin pass `pyb.Pin.PULL_UP`
or `pyb.Pin.PULL_DOWN` as additional arguments to `pyb.Pin()` constructor::

    p = pyb.Pin("P0", pyb.Pin.IN, pyb.Pin.PULL_UP)

As an Output
------------

Now, to use a GPIO pin as an output just do::

    import pyb

    p = pyb.Pin("P0", pyb.Pin.OUT_PP)
    p.high() # or p.value(1) to make the pin high (3.3V)
    p.low() # or p.value(0) to make the pin low (0V)

It's that easy! However, what if you want to open-drain an output? Just do::

    p = pyb.Pin("P0", pyb.Pin.OUT_OD)

And now ``pyb.Pin.high()`` will cause the pin to float while ``pyb.Pin.low()`` will
pull the pin low. If you need a pull-up resistor on the Pin just add::

    p = pyb.Pin("P0", pyb.Pin.OUT_OD, pyb.Pin.PULL_UP)

... to the constructor.
