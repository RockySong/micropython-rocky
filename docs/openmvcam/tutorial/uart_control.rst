UART Control
============

The OpenMV Cam has a main UART on pins P4 (TX) and P5 (RX) which you can use
for serial communication. To create a UART object do the following::

    import pyb

    uart = pyb.UART(3, 115200, timeout_char = 1000)

First, let's breakdown what we did. The first argument is the UART bus. This
is the index of the UART bus on the OpenMV Cam. You have to call the UART
constructor with this value because we're leveraging the `pyb` module from
MicroPython's pyboard. The second value is the baudrate which can be any
standard baudrate value you like. Finally, the third argument tells the driver
to wait up to 1 second between sending chars if the UART is busy. The default
value for ``timeout_char`` of 0 causes the driver to abadon sending characters
if your code ever has to block waiting for space in the UART buffer which is
something you don't want (generally).

Anyway, once you've got a UART object then sending data is easy. Just do::

    uart.write("Hello World\n")

And that's it.

But, if you'd like to send binary data instead, use the `ustruct` module. The
`ustruct` module will let you serialize data easily. Here's an example::

    import ustruct

    uart.write(ustruct.pack("<lhb", a_32_bit_value, a_16_bit_value, a_8_bit_value))

The first string above tells ustruct how to pack data into a byte stream. "<"
means the data will be packed in little-endian format. "l" means pack a long,
"h" means pack a short, and "b" means pack a byte. See the
`Python Struct Module <https://docs.python.org/3/library/struct.html>`_ for
more information.

Now, if you'd like to receive data just use the `pyb.UART.any()` method along with
the `pyb.UART.read()` method. Note that you'll need to code up some sort of state
machine to receive data reliability. For example, see the
``Examples->Pixy Emulation->pixy_uart_emulation.py`` example.
