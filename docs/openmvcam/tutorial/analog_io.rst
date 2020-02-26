Analog IO
=========

The OpenMV Cam has one analog I/O pin (P6) which can be used as an ADC input or
DAC output. Here's how to use it to read a voltage value between 0V and 3.3V::

    import pyb

    adc = pyb.ADC(pyb.Pin('P6'))

    while(True):
        pyb.delay(10) # wait 10 ms
        print("%f volts" % (((adc.read() * 3.3) + 2047.5) / 4095)) # read value, 0-4095

The ADC has 12-bits of resolution so it will output a value between 0 and 4095
for 0 to 3.3 volts. Finally, note that while the pin is in ADC mode it is not
5V tolerant anymore.

Next, to generate an analog output voltage you can put the I/O pin in DAC
mode::

    import pyb, math

    dac = pyb.DAC(pyb.Pin('P6'))

    counter = 0

    while(True):
        pyb.delay(10) # wait 10 ms
        dac.write(int(math.sin(math.radians(counter % 360)) * 255))
        counter += 1

The above code generates a sin wave on the I/O pin which will go from 0 to 255
for 0 to 3.3 volts. Again, note that while the pin is in DAC mode it is not
5V tolerant anymore.
