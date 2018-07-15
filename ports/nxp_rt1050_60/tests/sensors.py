# maooled.py -- put your code here!
import pyb
import os

# I2C address:
#pressure (MPL3115A2): 0x60 (96)
#Accel (MMA8652FC): 0x1D (29)
#Accel FXAS21002_I2C_ADDR 	0x20 (32)
class frdm_fxs_multi2_b:
	def __init__(self, busNdx=0):
		i = pyb.I2C(busNdx, baudrate=400000)
		self.bus = i
		self.scales = [0.0, 0.0, 0.0]
		self.scales[0] = 9.8 * 2 / 32768 # acc: +/- 2g
		self.scales[1] = 1000.0 / 32768 # gyr: +/- 1000dgr/s
		self.scales[2] = 0.01
		print("FRDM-FXS-MULTI2-B board inited!\nScanning sensors...")
		l = self.bus.scan()
		print("got ACK from below addresses:")
		print(l)
	def InitPressure(self, mode=0, ovsmp=3):
		if self.bus.mem_read(1, 96, 0x0c)[0] != 0xc4:
			print('pressure sensor not found!')
		else:
			print('pressure sensor OK')
		#       barometer mode | oversample | active mode
		val = bytearray(1)
		val[0] = 0<<7           | ovsmp<<3   | 1<<0
		self.bus.mem_write(val, 96, 0x26)	# write ctrl_reg1
		
		val[0] = 0<<0
		self.bus.mem_write(val, 96, 0x27)	# write ctrl_reg2
	def ReadPressure(self, raw = False):
		l = self.bus.mem_read(3, 96, 0x01)
		if raw == True:
			return l
		#MSB,CSB: integer parts of pascals [18:2]
		#LSB[6:7] integer parts of pascals [1:0]
		n = (l[0] * 1024 + l[1] * 4 + (l[2] >> 6)) / 100 # hPa
		return n
	def ReadTemp(self, raw = False):
		l = self.bus.mem_read(2, 96, 0x04)
		if raw == True:
			return l		
		n = l[0] * 256 + l[1]
		return n / 256.0
	@micropython.native
	def _prvDataProc(self, l, snsNdx, d, scale = None):
		d[0] = l[0] * 256 + l[1]
		if d[0] & 0x8000:
			d[0] -= 65536
		d[1] = l[2] * 256 + l[3]
		if d[1] & 0x8000:
			d[1] -= 65536
		d[2] = l[4] * 256 + l[5]
		if d[2] & 0x8000:
			d[2] -= 65536
		if scale == None:
			scale = self.scales[snsNdx]
		d[0] *= scale
		d[1] *= scale
		d[2] *= scale
		return d
	def InitAcc(self):
		if self.bus.mem_read(1, 0x1D, 0x0D)[0] != 0x4A:
			print('accel sensor failed!')
		else:
			print('accel sensor OK')	
		xyz_data_cfg = 0 # XYZ_DATA_CFG: FS[1:0] = 0 (2g) , HighpassFlt: dis
		self.bus.mem_write(xyz_data_cfg, 0x1D, 0x0E)  
		#           active | 50hz | 1.56Hz ASLP (auto wake rate in sleep mode)
		ctrl_reg1 = 1<<0   | 4<<3 | 3<<6 # CTRL_REG1: DR[2:0] = 4 (50Hz)
		self.bus.mem_write(ctrl_reg1, 0x1D, 0x2a)
		#			 !SelfTst|!NoRst| SleepnormalOvsmp|!AutoSleep| ActiveNormalOvsmp
		ctrl_reg2 = 0<<7     | 0<<6 | 0<<3       	  | 0<<2     | 0<<0
		self.bus.mem_write(ctrl_reg2, 0x1D, 0x2b)
		fifo_setup = 0 # disable fifo
		self.bus.mem_write(fifo_setup, 0x1D, 0x09)
	def ReadAcc(self, l, scale=None, a = None):
		self.bus.mem_read(l, 0x1D, 0x01)
		if a != None:
			self._prvDataProc(l, 0, a, scale)
	def InitGyr(self, ofsx = 0, ofsy = 0, ofsz = 0):
		if self.bus.mem_read(1, 0x20, 0x0C)[0] != 0xD7:
			print('gyro sensor failed!')
		else:
			print('gyro sensor OK')	
		#           +/-1000dps|!highPassEn
		ctrl_reg0 = 1<<0      | 0<<2
		self.bus.mem_write(ctrl_reg0, 0x20, 0x0D)
		#           active |100hz | !SelfTest
		ctrl_reg1 = 1<<1   | 3<<2 | 0<<5
		self.bus.mem_write(ctrl_reg1, 0x20, 0x13)
		#			 !SelfTst|!NoRst| SleepnormalOvsmp|!AutoSleep| ActiveNormalOvsmp
		ctrl_reg2 = 0<<7     | 0<<6 | 0<<3       	  | 0<<2     | 0<<0
		self.bus.mem_write(ctrl_reg2, 0x20, 0x14)
		fifo_setup = 0 # disable fifo
		self.bus.mem_write(fifo_setup, 0x20, 0x09)
	def ReadGyr(self, l, scale = None, a = None):
		self.bus.mem_read(l, 0x20, 0x01)
		if a != None:
			self._prvDataProc(l, 0, a, scale)
	def InitMag(self, ofsx = 0, ofsy = 0, ofsz = 0):
		if self.bus.mem_read(1, 0x0E, 0x07)[0] != 0xc4:
			print('magnet sensor failed!')
		else:
			print('magnet sensor OK')	
		#           active | NrmlOpAsAcCond | FullRead| 20Hz,OVS=32, 550uA
		ctrl_reg1 = 1<<0   | 0<<1           | 0<<2    | 5<<3
		self.bus.mem_write(ctrl_reg1, 0x0E, 0x10)
		#		    !Rst | Raw  | AutoRstEn as recommendded in datasheet
		ctrl_reg2 = 0<<4 | 1<<5 | 1<<7
		self.bus.mem_write(ctrl_reg2, 0x0E, 0x11)
		# todo: add offset
	def ReadMag(self, l, scale=None, a=None):
		self.bus.mem_read(l, 0x0E, 0x01)
		if a != None:
			self._prvDataProc(l, 0, a, scale)
		