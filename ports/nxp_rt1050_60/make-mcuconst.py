"""
Read in the MCU file header, extract relevant constants,
and create modmcuconst.c.

This is not part of the automatic build process because MCU header file isn't
expected to change.  After generating the file, some manual intervention is
needed to copy the new qstr definitions to qstrdefsport.h.
"""

from __future__ import print_function

import argparse
import re

# Python 2/3 compatibility
import platform
if platform.python_version_tuple()[0] == '2':
    def convert_bytes_to_str(b):
        return b
elif platform.python_version_tuple()[0] == '3':
    def convert_bytes_to_str(b):
        try:
            return str(b, 'utf8')
        except ValueError:
            # some files have invalid utf8 bytes, so filter them out
            return ''.join(chr(l) for l in b if l <= 126)
# end compatibility code

# given a list of (name,regex) pairs, find the first one that matches the given line
def re_match_first(regexs, line):
    for name, regex in regexs:
        match = re.match(regex, line)
        if match:
            return name, match
    return None, None

class LexerError(Exception):
    def __init__(self, line):
        self.line = line

class Lexer:
    re_io_reg = r'__[IOM]+\s+uint(?P<bits>8|16|32)_t\s+(?P<reg>[A-Z0-9_]+)'
    re_comment = r'(?P<comment>[A-Za-z0-9 \-/_()&]+)'
    re_addr_offset = r'Address offset: (?P<offset>0x[0-9A-Z]{2,3})'
    regexs = (
        ('#define bf', re.compile(r'#define\s+(?P<id>[A-Z0-9_]+)_MASK\s+\(*(?P<hex>0x[0-9A-F]+)\)*')),
        ('#define X',   re.compile(r'#define\s+(?P<id>[A-Z0-9_]+)\s+(?P<id2>[A-Z0-9_]+)($| +/\*)')),
        ('#define hex', re.compile(r'#define\s+(?P<id>[A-Z0-9_]+)\s+\(*(?P<hex>0x[0-9A-F]+)\)*')),
        ('#define X+hex', re.compile(r'#define +(?P<id>[A-Za-z0-9_]+) +\((?P<id2>[A-Z0-9_]+) \+ (?P<hex>0x[0-9A-F]+)U?\)($| +/\*)')),
        ('#define typedef', re.compile(r'#define\s+(?P<id>[A-Z0-9_]+)\s+\(\([A-Za-z0-9_]+_Type\s*\*\)\s*(?P<id2>[A-Za-z0-9_]+)\)')),
        ('typedef struct {', re.compile(r'typedef struct {$')),
        ('{', re.compile(r'{$')),
        ('}', re.compile(r'}$')),
        ('} Type', re.compile(r'} *(?P<id>[A-Z][A-Za-z0-9_]+)_(?P<global>([A-Za-z0-9_]+)?)Type;$')),
        ('IO reg', re.compile(re_io_reg + r';\s+' + re_comment)), # + r'/\*\*<' + re_comment + r'\*/')),
        ('IO reg array', re.compile(re_io_reg + r'\[(?P<array>[2-8])\]; +/\*\*<' + re_comment)),
    )

    def __init__(self, filename):
        self.file = open(filename, 'rb')
        self.line_number = 0

    def next_match(self, strictly_next=False):
        while True:
            line = self.file.readline()
            line = convert_bytes_to_str(line)
            self.line_number += 1
            if len(line) == 0:
                return ('EOF', None)
            match = re_match_first(Lexer.regexs, line.strip())
            if strictly_next or match[0] is not None:
                return match

    def must_match(self, kind):
        match = self.next_match(strictly_next=True)
        if match[0] != kind:
            raise LexerError(self.line_number)
        return match

def parse_file(filename, wantedPerips):
    lexer = Lexer(filename)

    bfs = {}
    reg_defs = {}
    consts = {}
    periphs = []
    while True:
        m = lexer.next_match()
        if m[0] == 'EOF':
            break
        elif m[0] == '#define bf':
            d = m[1].groupdict()
            bfVal = int(d['hex'], base=16)
            msk = 3
            for lsb in range(31):
                if bfVal & msk == msk:
                    #not single bit
                    bfVal = lsb
                    d['id'] = d['id'] + '_BF'
                    break
                msk <<= 1
            lst = d['id'].split('_')
            regNdx = 1 if d['id'].find('ADC_ETC') < 0 else 2
            sKeyShort = '_'.join(lst[regNdx:])
            consts[d['id']] = bfVal
            if lst[0] in wantedPerips:
                if sKeyShort not in bfs.keys():
                    bfs[sKeyShort] = bfVal
                elif bfs[sKeyShort] != bfVal:
                    bfs[d['id']] = bfVal
        elif m[0] == '#define hex':
            d = m[1].groupdict()
            consts[d['id']] = int(d['hex'], base=16)
        elif m[0] == '#define X':
            d = m[1].groupdict()
            if d['id2'] in consts:
                consts[d['id']] = consts[d['id2']]
        elif m[0] == '#define X+hex':
            d = m[1].groupdict()
            if d['id2'] in consts:
                consts[d['id']] = consts[d['id2']] + int(d['hex'], base=16)
        elif m[0] == '#define typedef':
            d = m[1].groupdict()
            periphs.append((d['id'], consts[d['id2']]))
        elif m[0] == 'typedef struct {':
            m = lexer.next_match()
            regs = []
            while m[0] in ('IO reg', 'IO reg array'):
                d = m[1].groupdict()
                reg = d['reg']
                if reg.find('RESERVED_') == 0:
                    m = lexer.next_match()
                    continue
                bits = int(d['bits'])
                mcup = m[1].string
                ndxCmntStart = mcup.find('/**< ') + 5
                ndxCmntEnd = mcup.rfind('array offset: ')
                if ndxCmntEnd > 0:
                    isAry = True
                    ndxOfsStart = ndxCmntEnd + len('array offset: ')
                    ndxOfsEnd = ndxOfsStart + mcup[ndxOfsStart:].find(',')
                else:
                    isAry = False
                    ndxCmntEnd = mcup.rfind('offset: ')
                    ndxOfsStart = ndxCmntEnd + len('offset: ')
                    ndxOfsEnd = ndxOfsStart + mcup[ndxOfsStart:].rfind(' ')
                comment = mcup[ndxCmntStart:ndxCmntEnd - 3]
                sOfs = mcup[ndxOfsStart:ndxOfsEnd]
                offset = int(sOfs, base=16)
                if m[0] == 'IO reg':
                    regs.append((reg, offset, bits, comment))
                else:
                    for i in range(int(d['array'])):
                        regs.append((reg + str(i), offset + i * bits // 8, bits, comment))
                m = lexer.next_match()
            if m[0] == '}':
                pass
            elif m[0] == '} Type':
                reg_defs[m[1].groupdict()['id']] = regs
            else:
                raise LexerError(lexer.line_number)

    return periphs, reg_defs, bfs

def print_int_obj(val, needed_mpzs):
    if -0x40000000 <= val < 0x40000000:
        print('MP_OBJ_NEW_SMALL_INT(%#x)' % val, end='')
    else:
        print('(mp_obj_t)&mpz_%08x' % val, end='')
        needed_mpzs.add(val)

def print_bfs(bf_defs, needed_qstrs, needed_mpzs):
    for qstr in bf_defs.keys():
        print('{ MP_OBJ_NEW_QSTR(MP_QSTR_%s), ' % qstr, end='')
        print_int_obj(bf_defs[qstr], needed_mpzs)
        print(' },')
        needed_qstrs.add(qstr)

def print_periph(periph_name, periph_val, needed_qstrs, needed_mpzs):
    qstr = periph_name.upper()
    print('{ MP_OBJ_NEW_QSTR(MP_QSTR_%s), ' % qstr, end='')
    print_int_obj(periph_val, needed_mpzs)
    print(' },')
    needed_qstrs.add(qstr)

def print_regs(reg_name, reg_defs, needed_qstrs, needed_mpzs):
    reg_name = reg_name.upper()
    for r in reg_defs:
        qstr = reg_name + '_' + r[0]
        print('{ MP_OBJ_NEW_QSTR(MP_QSTR_%s), ' % qstr, end='')
        print_int_obj(r[1], needed_mpzs)
        print(' }, // %s-bits, %s' % (r[2], r[3]))
        needed_qstrs.add(qstr)

# This version of print regs groups registers together into submodules (eg GPIO submodule).
# This makes the qstrs shorter, and makes the list of constants more manageable (since
# they are not all in one big module) but it is then harder to compile the constants, and
# is more cumbersome to access.
# As such, we don't use this version.
# And for the number of constants we have, this function seems to use about the same amount
# of ROM as print_regs.
def print_regs_as_submodules(reg_name, reg_defs, modules, needed_qstrs):
    mod_name_lower = reg_name.lower() + '_'
    mod_name_upper = mod_name_lower.upper()
    modules.append((mod_name_lower, mod_name_upper))

    print("""
STATIC const mp_rom_map_elem_t mcu_%s_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_%s) },
""" % (mod_name_lower, mod_name_upper))
    needed_qstrs.add(mod_name_upper)

    for r in reg_defs:
        print('    { MP_ROM_QSTR(MP_QSTR_%s), MP_ROM_INT(%#x) }, // %s-bits, %s' % (r[0], r[1], r[2], r[3]))
        needed_qstrs.add(r[0])

    print("""};

STATIC MP_DEFINE_CONST_DICT(mcu_%s_globals, mcu_%s_globals_table);

const mp_obj_module_t mcu_%s_obj = {
    .base = { &mp_type_module },
    .name = MP_QSTR_%s,
    .globals = (mp_obj_dict_t*)&mcu_%s_globals,
};
""" % (mod_name_lower, mod_name_lower, mod_name_lower, mod_name_upper, mod_name_lower))

def main():
    cmd_parser = argparse.ArgumentParser(description='Extract MCU constants from a C header file.')
    cmd_parser.add_argument('file', nargs=1, help='input file')
    cmd_parser.add_argument('-q', '--qstr', dest='qstr_filename', default='build/mcuconst_qstr.h',
                            help='Specified the name of the generated qstr header file')
    cmd_parser.add_argument('-bf', '--bitfield', help='generate QSTRs for bitfields, costy', action='store_true')
    cmd_parser.add_argument('--mpz', dest='mpz_filename', default='build/mcuconst_mpz.h',
                            help='the destination file of the generated mpz header')
    args = cmd_parser.parse_args()

    wantedPerips = ('ADC', 'GPIO', 'TMR', 'PWM', 'LPSPI', 'LPI2C')
    periphs, reg_defs, bf_defs = parse_file(args.file[0], wantedPerips)

    modules = []
    needed_qstrs = set()
    needed_mpzs = set()

    print("// Automatically generated from %s by make-mcuconst.py" % args.file[0])
    print("")

    for periph_name, periph_val in periphs:
        print_periph(periph_name, periph_val, needed_qstrs, needed_mpzs)


    for reg in wantedPerips:
        if reg in reg_defs:
            print_regs(reg, reg_defs[reg], needed_qstrs, needed_mpzs)

    if args.bitfield == True:
        print_bfs(bf_defs, needed_qstrs, needed_mpzs)
        #print_regs_as_submodules(reg, reg_defs[reg], modules, needed_qstrs)

    #print("#define MOD_MCU_CONST_MODULES \\")
    #for mod_lower, mod_upper in modules:
    #    print("    { MP_OBJ_NEW_QSTR(MP_QSTR_%s), (mp_obj_t)&mcu_%s_obj }, \\" % (mod_upper, mod_lower))

    print("")

    with open(args.qstr_filename, 'wt') as qstr_file:
        for qstr in sorted(needed_qstrs):
            print('Q({})'.format(qstr), file=qstr_file)

    with open(args.mpz_filename, 'wt') as mpz_file:
        for mpz in sorted(needed_mpzs):
            assert 0 <= mpz <= 0xffffffff
            print('STATIC const mp_obj_int_t mpz_%08x = {{&mp_type_int}, '
                '{.neg=0, .fixed_dig=1, .alloc=2, .len=2, ' '.dig=(uint16_t[]){%#x, %#x}}};'
                % (mpz, mpz & 0xffff, (mpz >> 16) & 0xffff), file=mpz_file)

if __name__ == "__main__":
    main()
