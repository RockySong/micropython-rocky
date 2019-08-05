# Timer Control Example
#
# This example shows how to use a timer for callbacks.

import time
from pyb import Pin, qtimer, LED
red_led = LED(1)
grn_led = LED(2)
def led_state(timer):            # we will receive the timer object when being called
    red_led.toggle()
    print("Timer1 callback")

def call2(timer):            # we will receive the timer object when being called
    print("Timer2 callback")

def call3(timer):            # we will receive the timer object when being called
    print("Timer3 callback")

def call4(timer):            # we will receive the timer object when being called
    print("Timer4 callback")
    grn_led.toggle()

def call5(timer):            # we will receive the timer object when being called
    print("Timer5 callback")

def call6(timer):            # we will receive the timer object when being called
    print("Timer6 callback")

def call7(timer):            # we will receive the timer object when being called
    print("Timer7 callback")

def call8(timer):            # we will receive the timer object when being called
    print("Timer8 callback")

def call9(timer):            # we will receive the timer object when being called
    print("Timer9 callback")

def call10(timer):            # we will receive the timer object when being called
    print("Timer10 callback")

def call11(timer):            # we will receive the timer object when being called
    print("Timer11 callback")

tim = qtimer(1, period=100, callback=led_state)      # create a timer object using timer 4 - trigger at 1Hz
tim = qtimer(2, period=10, callback=call2)
tim = qtimer(3, period=100, callback=call3)
tim = qtimer(4, period=98, callback=call4)
tim = qtimer(5, period=100, callback=call5)
tim = qtimer(6, period=10, callback=call6)
tim = qtimer(7, period=100, callback=call7)
tim = qtimer(8, period=10, callback=call8)
tim = qtimer(9, period=100, callback=call9)
tim = qtimer(10, period=10, callback=call10)
tim = qtimer(11, period=100, callback=call11)

print(tim)
#tim.callback(led_state)

while (True):
    time.sleep(1000)
