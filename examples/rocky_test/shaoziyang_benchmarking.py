'''
  File:     benchmarks.py
  Descript: benchmark test for different microcontroller
  Author:   Shao ziyang
  Data:     2018-Octo-25
  Version:  1.0
'''
import time
import machine
import gc

def pi(places=100):
  # 3 + 3*(1/24) + 3*(1/24)*(9/80) + 3*(1/24)*(9/80)*(25/168)
  # The numerators 1, 9, 25, ... are given by (2x + 1) ^ 2
  # The denominators 24, 80, 168 are given by (16x^2 -24x + 8)
  extra = 8
  one = 10 ** (places+extra)
  t, c, n, na, d, da = 3*one, 3*one, 1, 0, 0, 24

  while t > 1:
    n, na, d, da = n+na, na+8, d+da, da+32
    t = t * n // d
    c += t
  return c // (10 ** extra)

def pi_test(n = 5000):
    t1 = time.ticks()
    t = pi(n)
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Pi', n, 'digit calculation: ', r, 's')
    return '%.2f'%r

def int_add_test(n = 1000000, a = 12345, b = 56789):
    t1 = time.ticks()
    sum = 0
    for i in range(n):
        sum = a + b
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Integer Add test', n, 'times: ', r, 's')
    return '%.2f'%r

def float_add_test(n=1000000, a = 1234.5678, b = 5678.1234):
    t1 = time.ticks()
    sum = 0
    for i in range(n):
        sum = a + b
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Float Add test', n, 'times:', r, 's')
    return '%.2f'%r

def int_mul_test(n=1000000, a = 12345, b = 56789):
    t1 = time.ticks()
    sum = 0
    for i in range(n):
        sum = a * b
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Integer Mul test', n, 'times: ', r, 's')
    return '%.2f'%r

def float_mul_test(n=1000000, a = 1234.5678, b = 5678.1234):
    t1 = time.ticks()
    sum = 0
    for i in range(n):
        sum = a * b
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Float Mul test', n, 'times: ', r, 's')
    return '%.2f'%r

def int_div_test(n=1000000, a = 123456, b = 567):
    t1 = time.ticks()
    sum = 0
    for i in range(n):
        sum = a // b
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Integer Div test', n, 'times: ', r, 's')
    return '%.2f'%r

def float_div_test(n=1000000, a = 12345.678, b = 56.789):
    t1 = time.ticks()
    sum = 0
    for i in range(n):
        sum = a / b
    t2 = time.ticks()
    r = (t2*1.0-t1)/1000
    print('  Float Div test', n, 'times: ', r, 's')
    return '%.2f'%r

def mem():
    r = gc.mem_free()
    print('free memory:', r)

print('Speed test')
try:
    print('System freq: {:.1f} MHz'.format(machine.freq()[0]/1000000))
except:
    print('System freq: {:.1f} MHz'.format(machine.freq()/1000000))

print('\nCalcaulate integer addition')
gc.collect()
mem()
d1 = int_add_test()
d2 = int_add_test()
d3 = int_add_test()
r_int_add =  min(d1, d2, d3)
print('Integer addition test result: ', r_int_add, 's')
mem()

print('\nCalcaulate float addition')
gc.collect()
mem()
d1 = float_add_test()
d2 = float_add_test()
d3 = float_add_test()
r_float_add = min(d1, d2, d3)
print('Float addition test result: ', r_float_add, 's')
mem()

print('\nCalcaulate integer multiplication')
gc.collect()
mem()
d1 = int_mul_test()
d2 = int_mul_test()
d3 = int_mul_test()
r_int_mul = min(d1, d2, d3)
print('Integer multiplication test result: ', r_int_mul, 's')
mem()

print('\nCalcaulate float multiplication')
gc.collect()
mem()
d1 = float_mul_test()
d2 = float_mul_test()
d3 = float_mul_test()
r_float_mul = min(d1, d2, d3)
print('Float multiplication test result: ', r_float_mul, 's')
mem()

print('\nCalcaulate integer division')
gc.collect()
mem()
d1 = int_div_test()
d2 = int_div_test()
d3 = int_div_test()
r_int_div = min(d1, d2, d3)
print('Integer division test result: ', r_int_div, 's')
mem()

print('\nCalcaulate float division')
gc.collect()
mem()
d1 = float_div_test()
d2 = float_div_test()
d3 = float_div_test()
r_float_div = min(d1, d2, d3)
print('Float division test result: ', r_float_div, 's')
mem()

print('\nCalcaulate Pi 1000 digit')
gc.collect()
mem()
try:
    d1 = pi_test(1000)
    d2 = pi_test(1000)
    d3 = pi_test(1000)
    r_pi_1000 = min(d1, d2, d3)
    print('1000 digit Pi calculation result: ', r_pi_1000, 's')
    mem()
except:
    r_pi_1000 = None
    print('  calculation error')

print('\nCalcaulate Pi 5000 digit')
gc.collect()
mem()
try:
    d1 = pi_test(5000)
    d2 = pi_test(5000)
    d3 = pi_test(5000)
    r_pi_5000 = min(d1, d2, d3)
    print('5000 digit Pi calculation result: ', r_pi_5000, 's')
    mem()
except:
    r_pi_5000 = None
    print('  calculation error')

print('\nCalcaulate Pi 100,000 digit')
gc.collect()
mem()
try:
    d1 = pi_test(100000)
    d2 = pi_test(100000)
    d3 = pi_test(100000)
    r_pi_100000 = min(d1, d2, d3)
    print('100000 digit Pi calculation result: ', r_pi_100000, 's')
    mem()
except:
    r_pi_100000 = None
    print('  calculation error')

print('Test result:')
print('  Integer addition test result: ', r_int_add, 's')
print('  Float addition test result: ', r_float_add, 's')
print('  Integer multiplication test result: ', r_int_mul, 's')
print('  Float multiplication test result: ', r_float_mul, 's')
print('  Integer division test result: ', r_int_div, 's')
print('  Float division test result: ', r_float_div, 's')
if r_pi_1000:
    print('  1000 digit Pi calculation result: ', r_pi_1000, 's')
if r_pi_5000:
    print('  5000 digit Pi calculation result: ', r_pi_5000, 's')
if r_pi_100000:
    print('  100000 digit Pi calculation result: ', r_pi_100000, 's')
