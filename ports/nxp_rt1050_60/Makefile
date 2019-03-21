# Select the board to build for: if not given on the command line,
# then default to PYBV10.
BOARD ?= imxrtevk105x
ifeq ($(wildcard boards/$(BOARD)/.),)
$(error Invalid BOARD specified)
endif

# If the build directory is not given, make it reflect the board name.
BUILD ?= build-$(BOARD)

include ../../py/mkenv.mk
-include mpconfigport.mk
include boards/$(BOARD)/mpconfigboard.mk

# qstr definitions (must come before including py.mk)
QSTR_DEFS = qstrdefsport.h $(BUILD)/pins_qstr.h $(BUILD)/modmcu_qstr.h

# directory containing scripts to be frozen as bytecode
FROZEN_MPY_DIR ?= modules

# include py core make definitions
include $(TOP)/py/py.mk

LD_DIR=boards
HAL_DIR=mcusdk
USBDEV_DIR=$(HAL_DIR)/middleware/sdkusb
#USBHOST_DIR=usbhost
FATFS_DIR=lib/oofatfs
DFU=$(TOP)/tools/dfu.py
# may need to prefix dfu-util with sudo
USE_PYDFU ?= 1
PYDFU ?= $(TOP)/tools/pydfu.py
DFU_UTIL ?= dfu-util
DEVICE=0483:df11
STFLASH ?= st-flash
OPENOCD ?= openocd
OPENOCD_CONFIG ?= boards/openocd_stm32f4.cfg

CROSS_COMPILE = arm-none-eabi-

INC += -I.
INC += -I..
INC += -I./boards/$(BOARD)
INC += -I$(TOP)
INC += -I$(TOP)/py
INC += -I$(TOP)/lib
INC += -I$(TOP)/lib/oofatfs
INC += -I$(TOP)/lib/mp-readline
INC += -I$(BUILD)
INC += -I$(TOP)/lib/cmsis/inc
INC += -I$(HAL_DIR)
INC += -I$(HAL_DIR)/drivers
INC += -I$(HAL_DIR)/utilities
INC += -I$(HAL_DIR)/utilities/io
INC += -I$(HAL_DIR)/utilities/log
INC += -I$(HAL_DIR)/utilities/str
INC += -Iusb_cdc_msc
INC += -Inxp_swim/inc
INC += -Isdmmc
INC += -Iflegftl
INC += -I$(USBDEV_DIR)/include
INC += -I$(USBDEV_DIR)/device
INC += -I$(USBDEV_DIR)/osa
INC += -I$(HAL_DIR)/middleware/sdkusb/phy
INC += -Iay_imu/core
INC += -Iay_imu/math
INC += -I./omv
INC += -I./omv/py
INC += -I./omv/img
INC += -I./omv/nn
#INC += -I$(USBHOST_DIR)

CFLAGS_CORTEX_M4 = -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -fsingle-precision-constant -Wdouble-promotion -mtune=cortex-m4 -mcpu=cortex-m4
CFLAGS_CORTEX_M7 = -mthumb -DCPU_MIMXRT1052DVL6A -g -DARM_MATH_CM7 -DMCU_SERIES_RT105 -fno-common -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mfpu=fpv5-d16 -mfloat-abi=hard -fsingle-precision-constant -Wdouble-promotion -mtune=cortex-m7 -mcpu=cortex-m7

CFLAGS = $(INC) -Wpointer-arith -std=gnu99 -g
CFLAGS += $(CFLAGS_CORTEX_M7) 
CFLAGS += -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-error
CFLAGS += $(COPT) 
CFLAGS += -DUSB_STACK_BM
CFLAGS += -DUSB_DEVICE_CONFIG_BUFFER_PROPERTY_CACHEABLE=1
CFLAGS += -DFSL_SDK_ENABLE_DRIVER_CACHE_CONTROL=1
CFLAGS += -D__FPU_PRESENT=1

ifeq ($(BOARD), omvrt1)
CFLAGS += -DBOARD_OMVRT1
else
CFLAGS += -DBOARD_IMXRTEVK1050_60
endif

LDFLAGS = -L $(LD_DIR) -T $(LD_FILE) -Xlinker -Map=$(@:.elf=.map) -Xlinker --cref
LIBS = $(shell $(CC) $(CFLAGS) -print-libgcc-file-name)

CFLAGS += -fdata-sections -ffunction-sections
LDFLAGS += -Xlinker --gc-sections

# Debugging/Optimization
ifeq ($(DEBUG), 1)
CFLAGS += -g -DPENDSV_DEBUG
COPT = -O0
else
COPT += -Os -DNDEBUG
endif

SRC_LIB = $(addprefix lib/,\
	libc/string0.c \
	oofatfs/ff.c \
	oofatfs/option/unicode.c \
	mp-readline/readline.c \
	netutils/netutils.c \
	timeutils/timeutils.c \
	utils/pyexec.c \
	utils/interrupt_char.c \
	)

ifeq ($(MICROPY_FLOAT_IMPL),double)
SRC_LIBM = $(addprefix lib/libm_dbl/,\
	__cos.c \
	__expo2.c \
	__fpclassify.c \
	__rem_pio2.c \
	__rem_pio2_large.c \
	__signbit.c \
	__sin.c \
	__tan.c \
	acos.c \
	acosh.c \
	asin.c \
	asinh.c \
	atan.c \
	atan2.c \
	atanh.c \
	ceil.c \
	cos.c \
	cosh.c \
	erf.c \
	exp.c \
	expm1.c \
	floor.c \
	fmod.c \
	frexp.c \
	ldexp.c \
	lgamma.c \
	log.c \
	log10.c \
	log1p.c \
	modf.c \
	nearbyint.c \
	pow.c \
	rint.c \
	scalbn.c \
	sin.c \
	sinh.c \
	sqrt.c \
	tan.c \
	tanh.c \
	tgamma.c \
	trunc.c \
	)
else
SRC_LIBM = $(addprefix lib/libm/,\
	math.c \
	thumb_vfp_sqrtf.c \
	acoshf.c \
	asinfacosf.c \
	asinhf.c \
	atan2f.c \
	atanf.c \
	atanhf.c \
	ef_rem_pio2.c \
	erf_lgamma.c \
	fmodf.c \
	kf_cos.c \
	kf_rem_pio2.c \
	kf_sin.c \
	kf_tan.c \
	log1pf.c \
	nearbyintf.c \
	sf_cos.c \
	sf_erf.c \
	sf_frexp.c \
	sf_ldexp.c \
	sf_modf.c \
	sf_sin.c \
	sf_tan.c \
	wf_lgamma.c \
	wf_tgamma.c \
	)
endif

EXTMOD_SRC_C = $(addprefix extmod/,\
	modonewire.c \
	)

DRIVERS_SRC_C = $(addprefix drivers/,\
	memory/spiflash.c \
	)

SRC_fleg_ftl = $(addprefix flegftl/, \
	flegftl.c \
	)
	
SRC_OMV = $(addprefix omv/,  \
	cambus.c \
	mutex.c \
	xalloc.c \
	ov7725.c \
	sensor.c \
	xalloc.c  \
	usbdbg.c  \
	framebuffer.c \
	array.c  \
	fb_alloc.c  \
	ff_wrapper.c  \
	ini.c  \
	umm_malloc.c  \
	)
#	mt9v034.c \
#   ov9650.c \
#   ov2640.c \
#	mathop.c                
#   draw.c  
#	line.c                  
#	cifar10.c               
#	cifar10_model.c         
SRC_IMG = $(addprefix omv/img/,   \
	blob.c                  \
	qrcode.c                \
	binary.c                \
	clahe.c                \
	qsort.c                \
	filter.c                \
	mathop.c                \
	shadow_removal.c        \
	line.c                  \
	apriltag.c              \
	dmtx.c                  \
	zbar.c                  \
	fmath.c                 \
	fsort.c                 \
	fft.c                   \
	haar.c                  \
	imlib.c                 \
	collections.c           \
	stats.c                 \
	integral.c              \
	integral_mw.c           \
	kmeans.c                \
	lab_tab.c               \
	xyz_tab.c               \
	yuv_tab.c               \
	rainbow_tab.c           \
	rgb2rgb_tab.c           \
	invariant_tab.c         \
	pool.c                  \
	point.c                 \
	rectangle.c             \
	bmp.c                   \
	ppm.c                   \
	gif.c                   \
	mjpeg.c                 \
	fast.c                  \
	agast.c                 \
	orb.c                   \
	template.c              \
	phasecorrelation.c      \
	shadow_removal.c        \
	font.c                  \
	jpeg.c                  \
	lbp.c                   \
	eye.c                   \
	hough.c                 \
	lsd.c                   \
	sincos_tab.c            \
	edge.c                  \
	hog.c                   \
	lenet.c                 \
	lenet_model_num.c       \
   )

SRCS_NN = $(addprefix omv/nn/,    \
	nn.c                    \
   )

SRC_PY = $(addprefix omv/py/, \
	py_helper.c             \
	py_omv.c                \
	py_sensor.c             \
	py_image.c              \
	py_time.c               \
	py_gif.c                \
	py_mjpeg.c              \
	py_nn.c                 \
   )
#	py_cpufreq.c            
#	py_fir.c                
#	py_lcd.c                
#	py_winc.c           
SRC_C = \
	main.c \
	main_omv.c  \
	./mcusdk/system_MIMXRT1052.c \
	irq.c \
	pendsv.c \
	systick.c  \
	mphalport.c \
	isr.c \
	hal_wrapper.c \
	pybthread.c \
	adc.c \
	led.c \
	pin_named_pins.c \
	pin_defs_mcu.c \
	bufhelper.c \
	gccollect.c \
	pybstdio.c \
	help.c \
	modmachine.c \
	modpyb.c \
	modmcu.c \
	moduos.c \
	modutime.c \
	modusocket.c \
	modnetwork.c \
	flash_hyper.c \
	pin.c \
	pwm.c \
	i2c.c \
	spi.c \
	uart.c \
	usb_app.c \
	usrsw.c \
	storage.c \
	fatfs_port.c \
	sdcard.c \
	usbd_msc_storage.c \
	./sdmmc/port_usdhc_irq/fsl_sdmmc_event.c \
	./sdmmc/port_usdhc_irq/fsl_sdmmc_host.c \
	./nxp_swim/py_swim.c \
	./flegftl/flegftl.c \
	overlay_manager.c \
	flash_pgm.c  \
	rtc.c	\
	rng.c	\
	uniqueID.c	\
	$(wildcard boards/$(BOARD)/*.c)

SRC_C_BKUP = \
	main.c \
	./mcusdk/system_LPC54608.c \
	usbd_conf.c \
	usbd_desc.c \
	usbd_cdc_interface.c \
	usbd_hid_interface.c \
	usbd_msc_storage.c \
	mphalport.c \
	mpthreadport.c \
	irq.c \
	pendsv.c \
	systick.c  \
	pybthread.c \
	timer.c \
	led.c \
	pin.c \
	pin_defs_mcu.c \
	pin_named_pins.c \
	bufhelper.c \
	dma.c \
	spi.c \
	uart.c \
	can.c \
	usb.c \
	wdt.c \
	gccollect.c \
	pybstdio.c \
	help.c \
	machine_i2c.c \
	modmachine.c \
	modpyb.c \
	modmcu.c \
	moduos.c \
	modutime.c \
	modusocket.c \
	modnetwork.c \
	extint.c \
	usrsw.c \
	rng.c \
	rtc.c \
	flash.c \
	storage.c \
	sdcard.c \
	fatfs_port.c \
	lcd.c \
	accel.c \
	servo.c \
	dac.c \
	adc.c \
	$(wildcard boards/$(BOARD)/*.c)    
    
SRC_O = \
	startup_MIMXRT1052_gcc.o \
	gchelper.o \
	
SRC_UTIL = 	$(addprefix $(HAL_DIR)/utilities/, \
	io/fsl_io.c \
	log/fsl_log.c \
	str/fsl_str.c \
	fsl_debug_console.c \
	)
SRC_HAL = $(addprefix $(HAL_DIR)/drivers/, \
	fsl_adc.c \
	fsl_clock.c \
	fsl_cache.c \
	fsl_flexspi.c \
	fsl_gpio.c \
	fsl_lpspi.c \
	fsl_lpuart.c\
	fsl_usdhc.c \
	fsl_elcdif.c \
	fsl_csi.c \
	fsl_csi_camera_adapter.c \
	fsl_lpi2c.c \
	)
	
SRC_CDC_MSC = $(addprefix usb_cdc_msc/,\
	usb_device_ch9.c \
	usb_device_msc.c \
	usb_device_msc_ufi.c \
	usb_device_class.c \
	usb_device_descriptor.c \
	usb_device_cdc_acm.c \
	virtual_com.c \
	ring_buffer.c \
	composite.c \
	)

SRC_USBD = $(addprefix $(HAL_DIR)/middleware/sdkusb/device/usb_device_,\
	ehci.c \
	dci.c \
	)

SRC_SD = $(addprefix ./sdmmc/fsl_, \
	sd.c \
	sdmmc_common.c \
	)

SRC_PHY = $(HAL_DIR)/middleware/sdkusb/phy/usb_phy.c

SRC_OSA = $(HAL_DIR)/middleware/sdkusb/osa/usb_osa_bm.c	

SRC_VFS = $(addprefix $(TOP)/extmod/vfs, \
	.c \
	_fat.c \
	_fat_diskio.c \
	)

ifneq ($(MICROPY_PY_WIZNET5K),0)
WIZNET5K_DIR=drivers/wiznet5k
INC += -I$(TOP)/$(WIZNET5K_DIR)
CFLAGS_MOD += -DMICROPY_PY_WIZNET5K=$(MICROPY_PY_WIZNET5K) -D_WIZCHIP_=$(MICROPY_PY_WIZNET5K)
SRC_MOD += modnwwiznet5k.c
SRC_MOD += $(addprefix $(WIZNET5K_DIR)/,\
	ethernet/w$(MICROPY_PY_WIZNET5K)/w$(MICROPY_PY_WIZNET5K).c \
	ethernet/wizchip_conf.c \
	ethernet/socket.c \
	internet/dns/dns.c \
	)
endif

# for CC3000 module
ifeq ($(MICROPY_PY_CC3K),1)
CC3000_DIR=drivers/cc3000
INC += -I$(TOP)/$(CC3000_DIR)/inc
CFLAGS_MOD += -DMICROPY_PY_CC3K=1
SRC_MOD += modnwcc3k.c
SRC_MOD += $(addprefix $(CC3000_DIR)/src/,\
	cc3000_common.c \
	evnt_handler.c \
	hci.c \
	netapp.c \
	nvmem.c \
	security.c \
	socket.c \
	wlan.c \
	ccspi.c \
	inet_ntop.c \
	inet_pton.c \
	patch.c \
	patch_prog.c \
	)
endif

OBJ =
OBJ += $(PY_O)
OBJ += $(addprefix $(BUILD)/, $(SRC_LIB:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(DRIVERS_SRC_C:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_C:.c=.o))

OBJ += $(addprefix $(BUILD)/, $(SRC_UTIL:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_HAL:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_CDC_MSC:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_USBD:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_PHY:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_SD:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_OSA:.c=.o))

OBJ += $(addprefix $(BUILD)/, $(SRC_OMV:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_PY:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_NN:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_IMG:.c=.o))

OBJ += $(addprefix $(BUILD)/, $(SRC_O))
OBJ += $(addprefix $(BUILD)/, $(SRC_MOD:.c=.o))
OBJ += $(BUILD)/pins_$(BOARD).o

# We put several files into the first 16K section with the ISRs.
# If we compile these using -O0 then it won't fit. So if you really want these
# to be compiled with -O0, then edit boards/common.ld (in the .isr_vector section)
# and comment out the following lines.
$(BUILD)/$(FATFS_DIR)/ff.o: COPT += -Os
$(filter $(PY_BUILD)/../extmod/vfs_fat_%.o, $(PY_O)): COPT += -Os
$(PY_BUILD)/formatfloat.o: COPT += -Os
$(PY_BUILD)/parsenum.o: COPT += -Os
$(PY_BUILD)/mpprint.o: COPT += -Os

all: $(BUILD)/firmware.dfu $(BUILD)/firmware.hex

ifneq ($(FROZEN_DIR),)
# To use frozen source modules, put your .py files in a subdirectory (eg scripts/)
# and then invoke make with FROZEN_DIR=scripts (be sure to build from scratch).
CFLAGS += -DMICROPY_MODULE_FROZEN_STR
endif

ifneq ($(FROZEN_MPY_DIR),)
# To use frozen bytecode, put your .py files in a subdirectory (eg frozen/) and
# then invoke make with FROZEN_MPY_DIR=frozen (be sure to build from scratch).
CFLAGS += -DMICROPY_QSTR_EXTRA_POOL=mp_qstr_frozen_const_pool
CFLAGS += -DMICROPY_MODULE_FROZEN_MPY
endif

.PHONY: deploy

deploy: $(BUILD)/firmware.dfu
	$(ECHO) "Writing $< to the board"
ifeq ($(USE_PYDFU),1)
	$(Q)$(PYTHON) $(PYDFU) -u $<
else
	$(Q)$(DFU_UTIL) -a 0 -d $(DEVICE) -D $<
endif

FLASH_ADDR ?= 0x08000000
TEXT_ADDR ?= 0x08020000

deploy-stlink: $(BUILD)/firmware.dfu
	$(ECHO) "Writing $(BUILD)/firmware0.bin to the board via ST-LINK"
	$(Q)$(STFLASH) write $(BUILD)/firmware0.bin $(FLASH_ADDR)
	$(ECHO) "Writing $(BUILD)/firmware1.bin to the board via ST-LINK"
	$(Q)$(STFLASH) --reset write $(BUILD)/firmware1.bin $(TEXT_ADDR)

deploy-openocd: $(BUILD)/firmware.dfu
	$(ECHO) "Writing $(BUILD)/firmware{0,1}.bin to the board via ST-LINK using OpenOCD"
	$(Q)$(OPENOCD) -f $(OPENOCD_CONFIG) -c "mcu_flash $(BUILD)/firmware0.bin $(FLASH_ADDR) $(BUILD)/firmware1.bin $(TEXT_ADDR)"

$(BUILD)/firmware.dfu: $(BUILD)/firmware.elf
	$(ECHO) "Create $@"
	$(Q)$(OBJCOPY) -O binary -j .isr_vector $^ $(BUILD)/firmware0.bin
	$(Q)$(OBJCOPY) -O binary -j .text -j .data $^ $(BUILD)/firmware1.bin
	$(Q)$(PYTHON) $(DFU) -b $(FLASH_ADDR):$(BUILD)/firmware0.bin -b $(TEXT_ADDR):$(BUILD)/firmware1.bin $@

$(BUILD)/firmware.hex: $(BUILD)/firmware.elf
	$(ECHO) "Create $@"
	$(Q)$(OBJCOPY) -O ihex $< $@

$(BUILD)/firmware.elf: $(OBJ)
#	$(ECHO) "LINK $@"
#	$(Q)$(LD) $(LDFLAGS) -o $@ $^ $(LIBS)
#	$(Q)$(SIZE) $@
	$(ECHO) "LINK $@"
	$(Q)$(CC) $(CFLAGS) $(LDFLAGS) -g -o $@ $^ $(LIBS) -lm
	$(Q)$(SIZE) $@
	
	
MAKE_PINS = boards/make-pins.py
BOARD_PINS = boards/$(BOARD)/pins.csv
PREFIX_FILE = boards/mimxrt105x_prefix.c
PINMAP_FILE = boards/mimxrt105x_pinmap.csv
GEN_PINS_SRC = $(BUILD)/pins_$(BOARD).c
GEN_PINS_HDR = $(HEADER_BUILD)/pins.h
GEN_PINS_QSTR = $(BUILD)/pins_qstr.h
GEN_PINS_AF_CONST = $(HEADER_BUILD)/pins_af_const.h
GEN_PINS_AF_PY = $(BUILD)/pins_af.py

INSERT_USB_IDS = $(TOP)/tools/insert-usb-ids.py
FILE2H = $(TOP)/tools/file2h.py

USB_IDS_FILE = usb_app.h
CDCINF_TEMPLATE = pybcdc.inf_template
GEN_CDCINF_FILE = $(HEADER_BUILD)/pybcdc.inf
GEN_CDCINF_HEADER = $(HEADER_BUILD)/pybcdc_inf.h

# List of sources for qstr extraction
SRC_QSTR += $(SRC_PY) $(SRC_C) $(SRC_MOD) $(SRC_LIB)
# Append any auto-generated sources that are needed by sources listed in
# SRC_QSTR
SRC_QSTR_AUTO_DEPS += $(GEN_CDCINF_HEADER)

# Additional qstr definitions for OpenMV
OMV_QSTR_DEFS = ./omv/py/qstrdefsomv.h

# Append any auto-generated sources that are needed by sources listed in
# SRC_QSTR
QSTR_DEFS += $(OMV_QSTR_DEFS)

# Making OBJ use an order-only depenedency on the generated pins.h file
# has the side effect of making the pins.h file before we actually compile
# any of the objects. The normal dependency generation will deal with the
# case when pins.h is modified. But when it doesn't exist, we don't know
# which source files might need it.
$(OBJ): | $(HEADER_BUILD)/pins.h

# With conditional pins, we may need to regenerate qstrdefs.h when config
# options change.
$(HEADER_BUILD)/qstrdefs.generated.h: boards/$(BOARD)/mpconfigboard.h

# main.c can't be even preprocessed without $(GEN_CDCINF_HEADER)
main.c: $(GEN_CDCINF_HEADER)

# Use a pattern rule here so that make will only call make-pins.py once to make
# both pins_$(BOARD).c and pins.h
$(BUILD)/%_$(BOARD).c $(HEADER_BUILD)/%.h $(HEADER_BUILD)/%_af_const.h $(BUILD)/%_qstr.h: boards/$(BOARD)/%.csv $(MAKE_PINS) $(AF_FILE) $(PREFIX_FILE) | $(HEADER_BUILD)
	$(ECHO) "Create $@"
	$(Q)$(PYTHON) $(MAKE_PINS) --board $(BOARD_PINS) --af $(AF_FILE) --prefix $(PREFIX_FILE) --hdr $(GEN_PINS_HDR) --qstr $(GEN_PINS_QSTR) --af-const $(GEN_PINS_AF_CONST) --pinmap $(PINMAP_FILE) --af-py $(GEN_PINS_AF_PY) > $(GEN_PINS_SRC)

$(BUILD)/pins_$(BOARD).o: $(BUILD)/pins_$(BOARD).c
	$(call compile_c)

GEN_MCUCONST_HDR = $(HEADER_BUILD)/modmcu_const.h
GEN_MCUCONST_QSTR = $(BUILD)/modmcu_qstr.h
GEN_MCUCONST_MPZ = $(HEADER_BUILD)/modmcu_mpz.h
CMSIS_MCU_UPPER = $(shell echo $(CMSIS_MCU) | tr '[:lower:]' '[:upper:]')
CMSIS_MCU_HDR = mcusdk/$(CMSIS_MCU_UPPER).h

$(BUILD)/modmcu_qstr.h: $(CMSIS_MCU_HDR) make-mcuconst.py | $(HEADER_BUILD)
	$(ECHO) "Rocky's create modmcu_qstr.h"
	$(Q)$(PYTHON) make-mcuconst.py --qstr $(GEN_MCUCONST_QSTR) --mpz $(GEN_MCUCONST_MPZ) $(CMSIS_MCU_HDR) > $(GEN_MCUCONST_HDR)
	
$(BUILD)/modmcu.o: $(GEN_MCUCONST_HDR)
# Use a pattern rule here so that make will only call make-mcuconst.py once to
# make both modmcu_const.h and modmcu_qstr.h
$(HEADER_BUILD)/%_const.h $(BUILD)/%_qstr.h: $(CMSIS_MCU_HDR) make-mcuconst.py | $(HEADER_BUILD)
	$(ECHO) "Create mcuconst $@"
	$(Q)$(PYTHON) make-mcuconst.py --qstr $(GEN_MCUCONST_QSTR) --mpz $(GEN_MCUCONST_MPZ) $(CMSIS_MCU_HDR) > $(GEN_MCUCONST_HDR)

$(GEN_CDCINF_HEADER): $(GEN_CDCINF_FILE) $(FILE2H) | $(HEADER_BUILD)
	$(ECHO) "Create $@"
	$(Q)$(PYTHON) $(FILE2H) $< > $@

$(GEN_CDCINF_FILE): $(CDCINF_TEMPLATE) $(INSERT_USB_IDS) $(USB_IDS_FILE) | $(HEADER_BUILD)
	$(ECHO) "Create $@"
	$(Q)$(PYTHON) $(INSERT_USB_IDS) $(USB_IDS_FILE) $< > $@

include $(TOP)/py/mkrules.mk

