LED Control
===========

Your OpenMV Cam has an RGB LED and two IR LEDs on board. You can control the
red, green, and blue segments of the RGB LED individually and the two IR LEDs
as one unit. To control the LEDs first import the `pyb` module. Then create
an LED class object for the particular LED you want to control::

    import pyb

    red_led = pyb.LED(1)
    green_led = pyb.LED(2)
    blue_led = pyb.LED(3)
    ir_leds = pyb.LED(4)

The `pyb.LED()` call creates an LED object which you can use to control a
particular LED. Pass `pyb.LED()` "1" to control the red RGB LED segment, "2" to
control the green RGB LED segment, "3" to control the blue RGB LED segment, and
"4" to control the two IR LEDs.

After creating the LED control objects like above I heavily recommend that you
call the `pyb.LED.off()` method for a new LED to put it into a known state.

Anyway, there are three methods you can call for each LED, `pyb.LED.off()`,
`pyb.LED.on()`, and `pyb.LED.toggle()` which do exactly that.

Unlike other MicroPython Boards the OpenMV Cam doesn't support the
``intensity()`` method to allow for PWM dimming of the LEDs. We re-purposed the
timer that was used for LED dimming for generating a clock source to power the
camera chip.

Finally, use the RGB LED for indicator purposes in your script. As the IR LEDs,
those are for night vision. When you switch out your OpenMV Cam's regular lens
for our IR lens (which is a lens without an IR filter) you can then turn on the
IR LEDs so that your OpenMV Cam can see in the dark. The IR LEDs are strong
enough to illuminate about 3 meters in front of your OpenMV Cam in pitch black.
