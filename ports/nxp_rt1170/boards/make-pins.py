#!/usr/bin/env python
"""Creates the pin file for i.MX rt1170."""

from __future__ import print_function

import argparse
import sys
import csv

SUPPORTED_FN = {
    #'GPIO'  : ['PIN'],
    'TMR': ['TIMER0',  'TIMER1',  'TIMER2', 'TIMER3'],
    'GPT'   : ['CLK', 'CAPTURE1', 'CAPTURE2', 'COMPARE1', 'COMPARE2', 'COMPARE3'],
    'LPI2C' : ['SDA', 'SCL'],
    'LPUART': ['RX', 'TX', 'CTS_B', 'RTS_B'],
    'LPSPI' : ['PCS0', 'SCK', 'SDI', 'SDO'],
    'SAI'   : ['TX_BCLK', 'TX_SYNC', 'TX_DATA', 'TX_DATA0', 'TX_DATA1', 'TX_DATA2', 'TX_DATA3',
            'RX_BCLK', 'RX_SYNC', 'RX_DATA', 'RX_DATA0', 'MCLK'],
	# 'FLEXPWM' : ['PWMX3'],'PWMX1', 'PWMX2', 'PWMX3'], #function, pin_name, in the csv, style is function?_pin_name, ?is any number, we list all pwm function, no need this line,
	# also add a new line on 144, our RT's pwm named in a peculiar way for its reg is PWM1 not FLEXPWM1 just the same as the fun-name, so need to modify
}

CONDITIONAL_VAR = {
    #'SAI'   : 'MICROPY_HW_ENABLE_SAI{num}',
    #'LPSPI'   : 'MICROPY_HW_LPSPI{num}_PCS',
}

def parse_port_pin(gpio_str):
    """Parses a string and returns a (port-num, pin-num) tuple."""
    
    
    
    if len(gpio_str) < 3:
        raise ValueError("Expecting pin name to be at least 3 charcters.")
    
    if gpio_str[0] != 'O':
        raise ValueError("Expecting pin name to start with O")
    if gpio_str[1] < '0' or gpio_str[1] > '9':
        raise ValueError("Expecting pin port to be between 0 and 9")
    port = ord(gpio_str[1]) - ord('0')
    pinNumStrNdx = 6
    if gpio_str[2].isdigit():
        port = port * 10 + int(gpio_str[2])
        pinNumStrNdx = 7
    pin_str = gpio_str[pinNumStrNdx:]
    if not pin_str.isdigit():
        raise ValueError("Expecting numeric pin number.")
    return (port, int(pin_str))

def split_name_num(name_num):
    num = None
    for num_idx in range(len(name_num) - 1, -1, -1):
        if not name_num[num_idx].isdigit():
            name = name_num[0:num_idx + 1]
            num_str = name_num[num_idx + 1:]
            if len(num_str) > 0:
                num = int(num_str)
            break
    return name, num

def conditional_var(name_num):
    # Try the specific instance first. For example, if name_num is UART4_RX
    # then try UART4 first, and then try UART second.
    name, num = split_name_num(name_num)
    var = []
    if name in CONDITIONAL_VAR:
        var.append(CONDITIONAL_VAR[name].format(num=num))
    if name_num in CONDITIONAL_VAR:
        var.append(CONDITIONAL_VAR[name_num])
    return var

def print_conditional_if(cond_var, file=None):
    if cond_var:
        cond_str = []
        for var in cond_var:
            if var.find('ENABLE') >= 0:
                cond_str.append('(defined({0}) && {0})'.format(var))
            else:
                cond_str.append('defined({0})'.format(var))
        print('#if ' + ' || '.join(cond_str), file=file)

def print_conditional_endif(cond_var, file=None):
    if cond_var:
        print('#endif', file=file)


class AlternateFunction(object):
    """Holds the information associated with a pins alternate function."""

    def __init__(self, idx, af_str):
        self.idx = idx
        # Special case. We change I2S2ext_SD into I2S2_EXTSD so that it parses
        # the same way the other peripherals do.
        af_str = af_str.replace('ext_', '_EXT')

        self.af_str = af_str

        self.func = ''
        self.fn_num = None
        self.pin_type = ''
        # >>> i.mx rt pin map
        self.inSelReg = ''
        self.inSelVal = ''
        # <<<
        self.supported = False

        af_words = af_str.split('_', 1)
        self.func, self.fn_num = split_name_num(af_words[0])
        if len(af_words) > 1:
            self.pin_type = af_words[1]
        # for pwm, we use below code to wildcard match signals (PWMX1,PWMX2,PWMA1,PWMA2,PWMB1....)
        if self.func == 'FLEXPWM':
            if self.pin_type[:3] == 'PWM' and self.pin_type[4:].isdigit():
                self.supported = True
		# for GPIO, we use below code to wildcard match signals (PIN0 to PIN31)
        if self.func == 'GPIO':
            if self.pin_type[:3] == 'PIN' and self.pin_type[3:].isdigit():
                self.supported = True
        elif self.func in SUPPORTED_FN:
            pin_types = SUPPORTED_FN[self.func]
            if self.pin_type in pin_types:
                self.supported = True

    def is_supported(self):
        return self.supported

    def ptr(self):
        """Returns the numbered function (i.e. USART6) for this AF."""
        if self.fn_num is None:
            return self.func
        return '{:s}{:d}'.format(self.func, self.fn_num)

    def mux_name(self):
        return 'AF{:d}_{:s}'.format(self.idx, self.ptr())

    def print(self):
        """Prints the C representation of this AF."""
        cond_var = None
        if self.supported:
            cond_var = conditional_var('{}{}'.format(self.func, self.fn_num))
            print_conditional_if(cond_var)
            print('  AF',  end='')
        else:
            print('  //', end='')
        fn_num = self.fn_num
        if fn_num is None:
            fn_num = 0
        if self.func in ['FLEXPWM']:
            self.func = self.func[4:]
        print('({:2d}, {:8s}, {:2d}, {:16s}, {:11s}, {:11s}, {:4s}), // {:s}'.format(self.idx,
              self.func, fn_num, self.pin_type, self.ptr(), self.inSelReg, self.inSelVal, self.af_str))
        print_conditional_endif(cond_var)

    def qstr_list(self):
        return [self.mux_name()]


class Pin(object):
    """Holds the information associated with a pin."""

    def __init__(self, port, pin, port_m4, pin_m4, cpuName = '', isAllPinsAreBoardPins = 'False'):
        self.port = port
        self.pin = pin
        self.port_m4 = port_m4
        self.pin_m4 = pin_m4
        self.cpuName = cpuName
        self.alt_fn = []
        self.alt_fn_count = 0
        self.adc_num = 0
        self.adc_channel = 0
        self.acmp_num = 0
        self.acmp_channel = 0
        self.board_pin = isAllPinsAreBoardPins # False #rocky: True if you want to print all pins
        self.board_name = cpuName
        self.afReg = ''
        self.padCfgReg = ''
    def port_letter(self):
        return chr(self.port + ord('0'))

    def cpu_pin_name(self):
        return self.cpuName #'{:s}{:d}'.format(self.port_letter(), self.pin)

    def is_board_pin(self):
        return self.board_pin

    def set_is_board_pin(self):
        self.board_pin = True

    def parse_adc(self, adc_str):
        if (adc_str[:3] != 'ADC'):
            return
        (adc,channel) = adc_str.split('_')
        for idx in range(3, len(adc)):
            adc_num = int(adc[idx]) # 0, 1, 2, ...
            self.adc_num |= (1 << adc_num)
        self.adc_channel = int(channel[1:]) * 2 + ord(channel[0]) - ord('A') + 1

    def parse_acmp(self, acmp_str):
        if (acmp_str[:4] != 'ACMP'):
            return
        (acmp,channel) = acmp_str.split('_')
        for idx in range(4, len(acmp)):
            if acmp[idx] == 'X':
                self.acmp_num = 0xF << 1
            else:
                acmp_num = int(acmp[idx]) # 0, 1, 2, ...
                self.acmp_num |= (1 << acmp_num)
        self.acmp_channel = int(channel[2:])

    def parse_af(self, af_idx, af_strs_in):
        if len(af_strs_in) == 0:
            return
        # If there is a slash, then the slash separates 2 aliases for the
        # same alternate function.
        af_strs = af_strs_in.split('/')
        for af_str in af_strs:
            alt_fn = AlternateFunction(af_idx, af_str)
            self.alt_fn.append(alt_fn)
            if alt_fn.is_supported():
                self.alt_fn_count += 1

    def alt_fn_name(self, null_if_0=False):
        if null_if_0 and self.alt_fn_count == 0:
            return 'NULL'
        return 'pin_{:s}_af'.format(self.cpu_pin_name())

    def adc_num_str(self):
        str = ''
        for adc_num in range(1,4):
            if self.adc_num & (1 << (adc_num)):
                if len(str) > 0:
                    str += ' | '
                str += 'PIN_ADC'
                str += chr(ord('0') + adc_num)
        if len(str) == 0:
            str = '0'
        return str

    def print(self):
        if self.alt_fn_count == 0:
            print("// ",  end='')
        print('const pin_af_obj_t {:s}[] = {{'.format(self.alt_fn_name()))
        for alt_fn in self.alt_fn:
            alt_fn.print()
        if self.alt_fn_count == 0:
            print("// ",  end='')
        print('};')
        print('')
        print('const pin_obj_t pin_{:s} = PIN({:s}, {:s}, {:d}, {:d}, {:d}, {:d}, {:s}, {:s}, {:d}, {:s}, {:s});'.format(
            self.cpu_pin_name(), self.cpu_pin_name(),  self.board_name, self.port, self.pin, self.port_m4, self.pin_m4,
            self.alt_fn_name(null_if_0=True),
            self.adc_num_str(), self.adc_channel,
            self.afReg, self.padCfgReg))
        print('')

    def print_header(self, hdr_file):
        hdr_file.write('extern const pin_obj_t pin_{:s};\n'.
                       format(self.cpu_pin_name()))
        if self.alt_fn_count > 0:
            hdr_file.write('extern const pin_af_obj_t pin_{:s}_af[];\n'.
                           format(self.cpu_pin_name()))

    def qstr_list(self):
        result = []
        for alt_fn in self.alt_fn:
            if alt_fn.is_supported():
                result += alt_fn.qstr_list()
        return result


class NamedPin(object):

    def __init__(self, name, pin):
        self._name = name
        self._pin = pin

    def pin(self):
        return self._pin

    def name(self):
        return self._name


class Pins(object):

    def __init__(self):
        self.cpu_pins = []   # list of NamedPin objects
        self.board_pins = [] # list of NamedPin objects

    def find_pin(self, cpuName):
        for named_pin in self.cpu_pins:
            pin = named_pin.pin()
            if pin.cpuName == cpuName:
                return pin

    def parse_af_file(self, filename, pinname_col, af_col, gpio_col = 7, gpio_col_m4=12, isAllPinsAreBoardPins=False):
        with open(filename, 'r') as csvfile:
            rows = csv.reader(csvfile)
            for row in rows:
                i = 0
                for token in row:
                    row[i] = token.upper()
                    i += 1
                try:
                    (port_num, pin_num) = parse_port_pin(row[gpio_col][3:])
                    port_num_m4 = -1
                    pin_num_m4 = -1
                    if len(row[gpio_col_m4][3:]) > 3:
                        (port_num_m4, pin_num_m4) = parse_port_pin(row[gpio_col_m4][3:])
                except:
                    continue
                pin = Pin(port_num, pin_num, port_num_m4, pin_num_m4, row[pinname_col], isAllPinsAreBoardPins)
                len_row = len(row)
                for af_idx in range(af_col, len_row):
                    if af_idx < af_col + 16:
                        pin.parse_af(af_idx - af_col, row[af_idx])
                    elif af_idx == af_col + 16 or af_idx == af_col + 17:
                        pin.parse_adc(row[af_idx])
                    elif af_idx == af_col + 19:
                        pin.parse_acmp(row[af_idx])
                self.cpu_pins.append(NamedPin(pin.cpu_pin_name(), pin))

    def parse_pinmap_file(self, filename):
        with open(filename, 'r') as csvfile:
            #rocky: below dict key is the first two letters of a IOMUXC item, and its value must be after pin ord
            # e.g., for "EMC_B1_03_SEMC_DATA03", value is len(EMC_B1_03) = 9

            # AD=AD, EM=EMC, DI=DISP, SD=SD, SN=SNVS, LP=LPSR
            dictPinNameLen = {'AD':5 ,'EM':9 ,'DI':10, 'SD':8 , 'ON':6 , 'SN':7, 'LP':7}
            rows = csv.reader(csvfile)
            n = 0
            for row in rows:
                n += 1
                if n == 1:
                    continue
                s = row[0]
                if s.find('PMIC_ON') == 0:
                    nameLen = 11    # PMIC_ON_REQ
                elif s.find('PMIC_STBY') == 0:
                    nameLen = 13 # PMIC_STBY_REQ
                else:
                    
                    nameLen = dictPinNameLen[s[:2]]
                sPinName = s[0: nameLen]
                sAfName = s[nameLen+1:]
                myPin = self.find_pin(sPinName)
                if myPin == None:
                    continue
                myPin.afReg = row[1]
                myPin.padCfgReg = row[5]
                if row[2][2].isdigit():
                    afNdx = int(row[2][2])
                else:
                    afNdx = ord(row[2][2]) - ord('A') + 10
                #print(myPin.cpuName, sAfName, row[1], row[5], afNdx)
                #todo: add InSelReg

                for af in myPin.alt_fn:
                    if af.idx == afNdx:
                        #if sAfName == 'LPSPI2_SDO':
                        #    i = 3
                        if af.af_str != sAfName:
                            pass
                           # print('warning: mux naming inconsistent: {:s} != {:s}'.format(af.af_str, sAfName))
                        if sAfName[:4] == 'GPIO' and len(row[3]) > 1:
                            print (sAfName)
                        af.inSelReg = row[3]
                        af.inSelVal = row[4]
        return 0
    def parse_board_file(self, filename):
        with open(filename, 'r') as csvfile:
            rows = csv.reader(csvfile)
            for row in rows:
                try:
                    cpuName = row[1]
                except:
                    continue
                pin = self.find_pin(cpuName)
                if pin:
                    pin.board_name = row[0]
                    pin.set_is_board_pin()
                    self.board_pins.append(NamedPin(row[0], pin))

    def print_named(self, label, named_pins):
        print('STATIC const mp_rom_map_elem_t pin_{:s}_pins_locals_dict_table[] = {{'.format(label))
        for named_pin in named_pins:
            pin = named_pin.pin()
            if pin.is_board_pin():
                print('  {{ MP_ROM_QSTR(MP_QSTR_{:s}), MP_ROM_PTR(&pin_{:s}) }},'.format(named_pin.name(),  pin.cpu_pin_name()))
        print('};')
        print('MP_DEFINE_CONST_DICT(pin_{:s}_pins_locals_dict, pin_{:s}_pins_locals_dict_table);'.format(label, label));

    def print(self):
        for named_pin in self.cpu_pins:
            pin = named_pin.pin()
            if pin.is_board_pin():
                pin.print()
        self.print_named('cpu', self.cpu_pins)
        print('')
        self.print_named('board', self.board_pins)

    def print_adc(self, adc_num):
        print('');
        print('const pin_obj_t * const pin_adc{:d}[] = {{'.format(adc_num))
        for channel in range(17):
            adc_found = False
            for named_pin in self.cpu_pins:
                pin = named_pin.pin()
                if (pin.is_board_pin() and
                    (pin.adc_num & (1 << (adc_num))) and (pin.adc_channel == channel)):
                    print('  &pin_{:s}, // {:d}'.format(pin.cpu_pin_name(), channel))
                    adc_found = True
                    break
            if not adc_found:
                print('  NULL,    // {:d}'.format(channel))
        print('};')

    def print_acmp(self, acmp_num):
        print('');
        print('const pin_obj_t * const pin_acmp{:d}[] = {{'.format(acmp_num))
        for channel in range(5):
            acmp_found = False
            for named_pin in self.cpu_pins:
                pin = named_pin.pin()
                if (pin.is_board_pin() and
                    (pin.acmp_num & (1 << (acmp_num))) and (pin.acmp_channel == channel)):
                    print('  &pin_{:s}, // {:d}'.format(pin.cpu_pin_name(), channel))
                    acmp_found = True
                    break
            if not acmp_found:
                print('  NULL,    // {:d}'.format(channel))
        print('};')

    

    def print_header(self, hdr_filename):
        with open(hdr_filename, 'wt') as hdr_file:
            hdr_file.write('// Generated by make-pins.py, do NOT edit!\n')
            for named_pin in self.cpu_pins:
                pin = named_pin.pin()
                if pin.is_board_pin():
                    pin.print_header(hdr_file)            
            hdr_file.write('extern const pin_obj_t * const pin_adc1[];\n')
            hdr_file.write('extern const pin_obj_t * const pin_adc2[];\n')
            hdr_file.write('extern const pin_obj_t * const pin_adc3[];\n')
            # provide #define's mapping board to cpu name
            for named_pin in self.board_pins:
                hdr_file.write("#define pyb_pin_{:s} pin_{:s}\n".format(named_pin.name(), named_pin.pin().cpu_pin_name()))

    def print_qstr(self, qstr_filename):
        with open(qstr_filename, 'wt') as qstr_file:
            qstr_set = set([])
            qstr_file.write('// Generated by make-pins.py, do NOT edit!\n')
            for named_pin in self.cpu_pins:
                pin = named_pin.pin()
                if pin.is_board_pin():
                    qstr_set |= set(pin.qstr_list())
                    qstr_set |= set([named_pin.name()])
            for named_pin in self.board_pins:
                qstr_set |= set([named_pin.name()])
            for qstr in sorted(qstr_set):
                cond_var = None
                if qstr.startswith('AF'):
                    af_words = qstr.split('_')
                    cond_var = conditional_var(af_words[1])
                    print_conditional_if(cond_var, file=qstr_file)
                print('Q({})'.format(qstr), file=qstr_file)
                print_conditional_endif(cond_var, file=qstr_file)

    def print_af_hdr(self, af_const_filename):
        with open(af_const_filename,  'wt') as af_const_file:
            af_const_file.write('// Generated by make-pins.py, do NOT edit!\n')
            af_hdr_set = set([])
            mux_name_width = 0
            for named_pin in self.cpu_pins:
                pin = named_pin.pin()
                if pin.is_board_pin():
                    for af in pin.alt_fn:
                        if af.is_supported():
                            mux_name = af.mux_name()
                            af_hdr_set |= set([mux_name])
                            if len(mux_name) > mux_name_width:
                                mux_name_width = len(mux_name)
            for mux_name in sorted(af_hdr_set):
                af_words = mux_name.split('_')  # ex mux_name: AF9_I2C2
                cond_var = conditional_var(af_words[1])
                print_conditional_if(cond_var, file=af_const_file)
                key = 'MP_OBJ_NEW_QSTR(MP_QSTR_{}),'.format(mux_name)
                val = 'MP_OBJ_NEW_SMALL_INT(GPIO_{})'.format(mux_name)
                print('    { %-*s %s },' % (mux_name_width + 26, key, val),
                      file=af_const_file)
                print_conditional_endif(cond_var, file=af_const_file)

    def print_af_py(self, af_py_filename):
        with open(af_py_filename,  'wt') as af_py_file:
            af_py_file.write('# Generated by make-pins.py, do NOT edit!\n')
            print('PINS_AF = (', file=af_py_file);
            for named_pin in self.board_pins:
                print("  ('%s', " % named_pin.name(), end='', file=af_py_file)
                for af in named_pin.pin().alt_fn:
                    if af.is_supported():
                        print("(%d, '%s'), " % (af.idx, af.af_str), end='', file=af_py_file)
                print('),', file=af_py_file)
            print(')',  file=af_py_file)


def main():
    parser = argparse.ArgumentParser(
        prog="make-pins.py",
        usage="%(prog)s [options] [command]",
        description="Generate board specific pin file"
    )

    parser.add_argument(
        "-a", "--af",
        dest="af_filename",
        help="Specifies the alternate function file for the chip",
        default="./1170_af.csv"
    )
    parser.add_argument(
        "-m", "--pinmap",
        dest="pinmap_filename",
        help="Specifies the pinmap file for the i.mx rt105x, as its pin name is not regular, and has 2 level muxing, unlike normal MCUs!",
        default='../rt1170_fsl_iomuxc.csv'
    )

    parser.add_argument(
        "--af-const",
        dest="af_const_filename",
        help="Specifies header file for alternate function constants.",
        default="../build-rt1170evk/pins_af_const.h"
    )
    parser.add_argument(
        "--af-py",
        dest="af_py_filename",
        help="Specifies the filename for the python alternate function mappings.",
        default="../build-rt1170evk/genhdr/pins_af.py"
    )
    parser.add_argument(
        "-b", "--board",
        dest="board_filename",
        help="Specifies the board file",
    )
    parser.add_argument(
        "-p", "--prefix",
        dest="prefix_filename",
        help="Specifies beginning portion of generated pins file",
        default="./mimxrt117x_prefix.c"
    )
    parser.add_argument(
        "-q", "--qstr",
        dest="qstr_filename",
        help="Specifies name of generated qstr header file",
        default="../build-rt1170evk/pins_qstr.h"
    )
    parser.add_argument(
        "-r", "--hdr",
        dest="hdr_filename",
        help="Specifies name of generated pin header file",
        default="../build-rt1170evk/genhdr/pins.h"
    )
    
    parser.add_argument('-x', '--print_all',dest="all_pins", 
        help='print all pins, even if it is not defined in current board', action='store_true')

    if len(sys.argv) < 2:
        sys.argv = ['./make-pins.py', '--board', './rt1170evk/pins.csv', '--af', './1170_af.csv',
        '--pinmap', '../rt1170_fsl_iomuxc.csv', '--prefix', './mimxrt117x_prefix.c', '--hdr', '../build-rt1170evk/genhdr/pins.h',
        '--qstr', '../build-rt1170evk/pins_qstr.h', '--af-const', '../build-rt1170evk/genhdr/pins_af_const.h', 
        '--af-py', '../build-rt1170evk/pins_af.py', '-x']
    args = parser.parse_args(sys.argv[1:])
    print("// args=", sys.argv)
    pins = Pins()

    print('// This file was automatically generated by make-pins.py')
    print('//')
    if args.af_filename:
        print('// --af {:s}'.format(args.af_filename))
        pins.parse_af_file(args.af_filename, 1, 2, 7, 12, args.all_pins)
    if args.pinmap_filename:
        print('// --pinmap {:s}'.format(args.pinmap_filename))
        pins.parse_pinmap_file(args.pinmap_filename)
    if args.board_filename:
        print('// --board {:s}'.format(args.board_filename))
        pins.parse_board_file(args.board_filename)

    if args.prefix_filename:
        print('// --prefix {:s}'.format(args.prefix_filename))
        print('')
        with open(args.prefix_filename, 'r') as prefix_file:
            print(prefix_file.read())
    pins.print()
    pins.print_adc(1)
    pins.print_adc(2)
    for i in range(4):
        pins.print_acmp(i + 1)
    #pins.print_adc(3)1
    pins.print_header(args.hdr_filename)
    pins.print_qstr(args.qstr_filename)
    pins.print_af_hdr(args.af_const_filename)
    pins.print_af_py(args.af_py_filename)


if __name__ == "__main__":
    main()
