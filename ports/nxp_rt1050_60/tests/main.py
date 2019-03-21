# main.py -- put your code here!
import pyb
import os
import math
import maooled as oled
import sensors
grad_hwCounter = 0
def set_led_gradation(hwLevel, led1, led2):
	global grad_hwCounter
	if (hwLevel >= grad_hwCounter):
		led1.on()
		led2.off()
	else:
		led1.off()
		led2.on()
	grad_hwCounter += 1
	if grad_hwCounter == 256:
		grad_hwCounter = 0

def OledDbg():
	oled.init()

def draw_clock_1(gui, a=0, div = 2, cx=64, cy=64, amp = 1.0, rLen = 9, leaves=8):
	step = 3.14159*2.0/leaves
	for r in range(rLen):
		for t in range(leaves):
			ofs = (float(a)-float(r))/11.0
			rad = (7.0 + float(r) * 6.0) * amp
			x = int(cx + math.cos(t*step + ofs) * rad)
			y = int(cy + math.sin(t*step + ofs) * rad)
			w = r // div
			gui.put_box(x, y,x+w,y+w)
	
def draw_clock(gui):
	gui.clear_screen(0)
	gui.set_font(0x0613)
	n=0
	t1 = pyb.millis()
	fps = 0
	prevfps = 0
	for a in range(9999999):
		draw_clock_1(gui, a)
		n += 1
		fps += 1
		if pyb.millis() - t1 >= 1000:
			t1 = pyb.millis()
			prevfps = fps
			fps = 0
		gui.put_text_xy(str(prevfps), 88, 3)
		gui.put_text_xy('fps', 100, 3)
		gui.update_display()
		#pyb.delay(50)
		gui.clear_screen(0)
		
def draw_ball(gui, x=0, y=0, dx=15, dy=16, xMax=122*16, yMax=122*16, isDraw = True):
	if isDraw == True:
		gui.clear_screen(0)
	ix = 0
	iy = 0
	if isDraw == True:
		gui.set_fill_color(0)
	n=0
	while True:
		x += dx
		y += dy
		if x > xMax:
			dx = -dx
		if y > yMax:
			dy = -dy
		if x < 0:
			x = 0
			dx = -dx
		if y < 0:
			y = 0
			dy = -dy
		if isDraw == True:
			gui.set_pen_color(0)
			gui.put_box(ix, iy, ix + 4, iy + 4)
		ix = x >> 4
		iy = y >> 4
		if isDraw == True:
			gui.set_pen_color(0xFF)
			gui.put_box(ix, iy, ix + 4, iy + 4)
			gui.update_display()
		else:
			break
		n+=1
	return (x,y,dx,dy)
			
def SwimDbg(draw = 0, kbps=12000):
	gui = pyb.SWIM(0, 0,baudrate=kbps*1000)
	gui.window_open()
	return gui

@micropython.native	
def SensorHubDbg(itv=50):
	gui = SwimDbg()
	gui.set_font(gui.FONT6x13)
	gui.set_fill_color(pyb.SWIM.WHITE)
	fontH = 13
	h = fontH + 1
	lTitle = ['A=','G=','M=', 'E=','P=','T=']
	gui.update_display()
	# init sensor hub
	sh = sensors.frdm_fxs_multi2_b(2)
	sh.InitPressure()
	sh.InitAcc()
	sh.InitGyr()
	sh.InitMag()
	imu = pyb.IMU(0,0, delta_ms = 0.02)
	agm = [[0,0,0],[0,0,0],[0,0,0],[0,0,0], [0.0], [0.0]]
	s = [[0,0,0],[0,0,0],[0,0,0],[0,0,0], [''] , ['']]
	e = [0.0, 0.0, 0.0]
	l0 = bytearray(6)
	l1 = bytearray(6)
	l2 = bytearray(6)
	t1 = pyb.millis()
	x=23
	y=31
	dx=5
	dy=6
	isInflate = False
	amp = 0.7
	demo_st = 0
	
	btn_sw4 = pyb.Pin("04")
	btn_sw4_prev = btn_sw4.value()
	for cnt in range(9999999):
		if btn_sw4_prev == 1 and btn_sw4.value() == 0:
			demo_st += 1
			if demo_st >= 3:
				demo_st = 0
		btn_sw4_prev = btn_sw4.value() 
		if demo_st != 2:			
			if (cnt & 15) == 0:
				p = sh.ReadPressure()
				t = sh.ReadTemp()
			sh.ReadAcc(l0)
			sh.ReadGyr(l1)
			sh.ReadMag(l2)
			sh._prvDataProc(l0, 0, agm[0])
			sh._prvDataProc(l1, 1, agm[1])
			sh._prvDataProc(l2, 2, agm[2])
			t2 = pyb.millis()
			dt = t2 - t1
			t1 = t2
			e = imu.step(l0, l1, None, dt / 1000.0)
			agm[3][0] = e[0]
			agm[3][1] = e[1]
			agm[3][2] = e[2]
			# >>> format AGM string
			for j in range(4):
				for i in range(3):
					if agm[j][i] >= 0:
						s[j][i] = '+%.1f' % agm[j][i]
					else:
						s[j][i] = '%.1f' % agm[j][i]
			# <<<
			if (cnt & 7) == 0:
				print ('P=', p, 'T=',t, 'A=',s[0][0], s[0][1], s[0][2], 'G=',s[1], 'M=',s[2])
			agm[4] = [p]
			agm[5] = [t]
			s[4] = ['%.1f hPa' % p]
			s[5] = ['%.1f dgrC' % t]
			gui.clear_screen(0)
			for i in range(6):
				gui.put_text_xy(lTitle[i], 2, 2 + i * h)
				if i < 4:
					str = "%s,%s,%s" % (s[i][0], s[i][1], s[i][2])
				else:
					str = s[i][0]
				#gui.set_pen_color(pyb.SWIM.BLACK)
				#gui.put_box(16, y, 120, y + fontH)
				#gui.set_pen_color(pyb.SWIM.WHITE)
				gui.put_text_xy(str, 16, 2 + i * h)
			gui.put_text_xy('itv=%dms' % dt, 2, 2 + 6 * h)
		
		# >>> draw bouncing flower
		x += dx
		y += dy
		if x > 22*16:
			dx = -dx
		if y > 22*16:
			dy = -dy
		if x < 0:
			dx = -dx
		if y < 0:
			dy = -dy
		# <<<
		if isInflate == True:
			amp *= 1.01
			if amp >= 0.77:
				isInflate = False
		else:
			amp /= 1.01
			if amp < 0.45:
				isInflate = True
		#
		if demo_st == 1:
			draw_clock_1(gui, cnt, div=2, cx=72+(x>>4), cy=72+(y>>4), amp=amp*0.8, rLen = 6, leaves=6)
		if demo_st == 2:
			gui.clear_screen(0)
			draw_clock_1(gui, cnt, div=3, cx=64, cy=64, amp=amp*1.22, rLen = 9, leaves=9)
		gui.update_display()
		pyb.delay(itv)
	return sh
	
@micropython.viper
def speed():
	x = 1
	n = 800000
	t1 = pyb.millis()
	while n != 0:
		x += 1
		n -= 1
	print ("Elapsed ", pyb.elapsed_millis(t1))
def fp_speed(n = 80000):
	x = 1.1
	t1 = pyb.millis()
	while n != 0:
		x += 0.1
		n -= 1
	print ("Elapsed ", pyb.elapsed_millis(t1))

def BreatheLED(ledNdx1 = 1, ledNdx2 = 2, prescale = 50, cnt = 5):
	global grad_hwCounter
	led1 = pyb.LED(ledNdx1)
	led2 = pyb.LED(ledNdx2)
	grad_hwCounter = 0
	s_hwCounter = 0 
	s_nGray = 0
	print("Breathe LED start")
	while cnt:
		s_hwCounter += 1
		if s_hwCounter >= prescale:
			s_hwCounter = 0
			s_nGray += 1
			if s_nGray >= 512:
				s_nGray = 0
				cnt -= 1
		if s_nGray >= 256:
			set_led_gradation(511 - s_nGray, led1, led2)
		else:
			set_led_gradation(s_nGray, led1, led2)
		led1.off()
		led2.off()

def DebugUART(n):
	u = pyb.UART(n)
	u.init(115200, read_buf_len=128)
	n = 0
	cb = 0
	while True:
		cb = u.any()
		if cb != 0:
			print("Got " + str(cb) + " data:" + str(u.read(cb)))
		pyb.delay(50)
		print(n)
		n += 1
def I2CDebug(ndx):
	i = pyb.I2C(ndx)
	i.init(pyb.I2C.MASTER, baudrate=200000)
	i.send('I love pearl pig, 123', 0x7e)
	c = i.recv(32, addr)
	print(c)

def I2CScan(ndx):
	i = pyb.I2C(ndx)
	i.init(pyb.I2C.MASTER, baudrate=440000)
	c = i.scan()
	i.deinit()
	return c

def SPIDbg(ndx):
	#p_sclk = machine.Pin.board.J9_9
	#p_mosi = machine.Pin.board.J9_13
	#s = pyb.SPI(ndx, pyb.SPI.MASTER, baudrate=876000, phase=1, polarity=1, bits=12, firstbit=1)
	s = pyb.SPI(ndx, pyb.SPI.MASTER)
	tx = 'I love you!'
	rx = bytearray(4)
	rx2 = bytearray(len(tx))
	s.send_recv(send = tx, recv = rx, halfduplex=1)
	s.send_recv(send = tx, recv = rx2)
	
	return s
	
def SwI2CDbg():
	clk = machine.Pin.board.J9_1
	dat = machine.Pin.board.J9_3
	i = machine.I2C(-1, clk, dat)
	return i
if __name__ == '__main__':
	#speed()
	SensorHubDbg(1)
	#print("Hello from main")

def FadingLEDPWM(cnt=10, step = 1.07, ledNdx1 = 1, ledNdx2 = 2):
	led = pyb.LED(ledNdx1)
	led2 = pyb.LED(ledNdx2)
	bri = 1.0
	dir = 1
	while cnt:
		if dir == 1:
			bri *= step
			if bri > 270:
				bri = 255
				dir = -1
				print("Fading out")
		else:
			bri /= step
			if bri < 1:
				dir = 1
				bri = 1
				print("Fading in")
				cnt -= 1
		intbri = int(bri)
		if intbri > 255:
			intbri = 255
		led.intensity(intbri)
		led2.intensity(intbri)
		pyb.delay(25)
	print("exiting")
