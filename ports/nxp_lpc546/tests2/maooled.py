# maooled.py -- put your code here!
import pyb
import os
global spi
pinCMD = 0
pinRST = 0
pinVPP = 0
spi = 0
fb = 0

def io_cmd():
	global pinCMD
	pinCMD.off()

def io_data():
	global pinCMD
	pinCMD.on()

def io_vpp(level):
	global pinVPP
	if level != 0:
		pinVPP.on()
	else:
		pinVPP.off()
	
def io_write(c):
	global spi
	spi.send(c)
	
def io_reset(isRst):
	global pinRST
	if isRst != 0:
		pinRST.off()
	else:
		pinRST.on()

def WriteCmd(cmd):
	io_cmd()
	io_write(cmd)

def WriteDat(data):
	io_data()
	io_write(data)

def SetPos(x, y):
	WriteCmd(0xb0+y)
	WriteCmd(((x&0xf0)>>4)|0x10)
	WriteCmd((x&0x0f)|0x10)

def Fill(c):
	for m in range(16):
		WriteCmd(0xb0+m)				#	page0-page1
		WriteCmd(0x00)					#	low column start address
		WriteCmd(0x10)					#	high column start address
		lst = [c,c,c,c]
		for n in range(128):
			WriteDat(c)

def cls():
	Fill(0x50)

def on():
	WriteCmd(0x8d)						#	set charge pump
	WriteCmd(0x14)						#	enable charge pump
	WriteCmd(0xaf)						#	enable OLED

def off():
	WriteCmd(0x8d)						#	set charge pump
	WriteCmd(0x10)						#	disable charge pump
	WriteCmd(0xae)						#	disable OLED

def write_64(fb, ndx):
	x = 7
	while x >= 0:
		data_out = 0
		for y in range(8):
			data_in = fb[ndx + (y<<4)]
			data_out >>= 1
			if (data_in & 1<<x) != 0:
				data_out |= 0x80
		WriteDat(data_out)
		x -= 1

def update_fb():
	global fb
	ofs = 0
	for y in range(16):
		SetPos(0, y)
		for x in range(16):
			ndx = ofs + x
			write_64(fb, ndx)
		ofs += 128

def write_fb(c = 0, ndx = 0, update=True):
	global fb
	fb[ndx] = c
	if update == True:
		update_fb()

def init():
	global pinCMD
	global pinRST
	global pinVPP
	global spi
	global fb
	fb = bytearray(128*16)
	spi = pyb.SPI(9, pyb.SPI.MASTER, baudrate=4000000)
	pinCMD = pyb.Pin('21', pyb.Pin.OUT, value=True)
	pinRST = pyb.Pin('122', pyb.Pin.OUT, value=True)
	pinVPP = pyb.Pin('11', pyb.Pin.OUT, value=True)
	lstInitSeq = [	
	0xae,		#	Display OFF
	0xd5,		#	Set D-clock
	0x50,		#	100Hz
	0x20,		#	Set row address
	0x81,		#	Set contrast control
	0xc0,
	0xa0,		#	Segment remap
	0xa4,		#	Set Entire Display ON
	0xa6,		#	Normal display
	0xad,		#	Set external VPP
	0x80,
	0xc0,		#	Set Common scan direction
	0xd9,		#	Set phase length
	0x25,
	0xdb,		#	Set Vcomh voltage
	0x28,		#	0.687*VPP
	]

	io_vpp(True)				#	power panel
	io_reset(True)				#	start reset
	pyb.delay(2)						#	20uS delay
	io_reset(False)			#	release reset
	pyb.delay(100)						#	wait for SH1107 to come out of reset

	initLen = len(lstInitSeq)
	for i in range(initLen):
		WriteCmd(lstInitSeq[i])
	cls()							#	clear oled
	WriteCmd(0xaf)						#	enable OLED	
	
def test():
	print("test")