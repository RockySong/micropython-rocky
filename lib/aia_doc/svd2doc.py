import argparse
import sys
import copy
import xml.etree.ElementTree as ET


def iter_clusters(ptag):
    registers = ptag.find('registers')
    if registers is None:
        return []
    else:
        return registers.findall('cluster')


def iter_registers(ptag):
    registers = ptag.find('registers')
    if registers is None:
        return []
    else:
        return registers.findall('register')


def iter_fields(rtag):
    fields = rtag.find('fields')
    if fields is None:
        return []
    else:
        return fields.findall('field')


def iter_enumerated_values(rtag):
    enumVals = rtag.find('enumeratedValues')
    if enumVals is None:
        return []
    else:
        return enumVals.findall('enumeratedValue')


ACCESS = {
    "read-only": "ro",
    "read-write": "rw",
    "write-only": "wo",
}


def get_access(tag):
    """
    Reads and formats the access attribute of the tag.
    If possible it is shortened to ro/rw/wo, and then
    returned inside brackets with a leading space.
    """
    access = get_string(tag, 'access')
    if access is not None:
        return " (" + ACCESS.get(access, access) + ")"
    else:
        return ""


def get_string(node, tag, default=None):
    text = node.findtext(tag, default=default)
    if text == default:
        return text
    return " ".join(text.split())


def get_int(node, tag, default=None):
    text = get_string(node, tag, default=default)
    if text == default:
        return text
    text = text.lower().strip()
    if text == "true":
        return 1
    elif text == "false":
        return 0
    elif text[:2] == "0x":
        return int(text[2:], 16)
    elif text[:2] == "0b":
        return int(text[2:], 2)
    else:
        return int(text, 10)


def expand_dim(node):
    """
    Given a node (a cluster or a register) which may have a `dim` child,
    returns an expanded list of all such nodes with '%s' in the name replaced
    by the appropriate index. If there is no `dim` child, a list containing
    just the original node is returned.
    """
    dim = node.findtext('dim')
    if dim is None:
        return [node]
    inc = get_int(node, 'dimIncrement')
    idxs = get_string(node, 'dimIndex')
    if idxs is None:
        if isinstance(dim, str):
            dim = int(dim) if dim.isdigit() else 0
        idxs = list(range(dim))
    else:
        if "," in idxs:
            idxs = idxs.split(",")
        elif "-" in idxs:
            li, ri = idxs.split("-")
            idxs = list(range(int(li), int(ri)+1))
        else:
            raise ValueError(f"Unknown dimIndex: '{idxs}'")
    nodes = []
    for cnt, idx in enumerate(idxs):
        name = get_string(node, 'name').replace("%s", str(idx))
        dim_node = copy.deepcopy(node)
        dim_node.find('name').text = name
        addr = get_int(dim_node, 'addressOffset') + cnt * inc
        dim_node.find('addressOffset').text = f"0x{addr:08x}"
        dim_node.attrib['dim_index'] = idx
        nodes.append(dim_node)
    return nodes


def expand_cluster(node):
    """
    Given a cluster, returns a list of all registers inside the cluster,
    with their names updated to include the cluster index and their address
    offsets updated to include the cluster address offset.
    The returned register nodes are as though they were never in a cluster.
    """
    if node.attrib.get('dim_index') is None:
        raise ValueError("Can't process cluster without dim_index")
    cluster_idx = node.attrib['dim_index']
    cluster_addr = get_int(node, 'addressOffset')
    nodes = []
    for rtag in node.findall('register'):
        addr = cluster_addr + get_int(rtag, 'addressOffset')
        name = get_string(rtag, 'name') + str(cluster_idx)
        new_rtag = copy.deepcopy(rtag)
        new_rtag.find('addressOffset').text = f"0x{addr:08x}"
        new_rtag.find('name').text = name
        nodes.append(new_rtag)
    return nodes


def parse_register(rtag):
    """
    Extract register and field information from a register node into a dict.
    """
    fields = {}
    rname = get_string(rtag, 'name')
    rDispName = get_string(rtag, 'displayName')
    rdesc = get_string(rtag, 'description')
    if rDispName != None:
        rdesc = rname + ', ' + rdesc
    if rDispName != None:
        rname = rDispName
    raccess = get_access(rtag)
    roffset = get_int(rtag, 'addressOffset')
    for ftag in iter_fields(rtag):
        fname = get_string(ftag, 'name')
        foffset = get_int(ftag, 'bitOffset')
        fwidth = get_int(ftag, 'bitWidth')
        fdesc = get_string(ftag, 'description')
        faccess = get_access(ftag)

        dictEnumVals = {}
        for etag in iter_enumerated_values(ftag):
            dictEnumVals[get_string(etag, 'name')] = (get_string(etag, 'description') , get_string(etag, 'value'))

        fields[fname] = {"name": fname, "offset": foffset,
                         "width": fwidth, "description": fdesc,
                         "access": faccess, 'enumVals' : dictEnumVals}
    return {"name": rname, "offset": roffset, "description": rdesc,
            "access": raccess, "fields": fields}



def parse(svdfile):
    """
    Parse SVD file into dict of peripherals, registers, and fields.
    """
    tree = ET.parse(svdfile)
    peripherals = {}
    device_interrupts = {}
    grps_maybe = tree.find('Groups')
    if grps_maybe == None:
        gtag = []
    else:
        gtag = grps_maybe.findall('Group')
    if len(gtag) == 0:
        gtag = [tree]
    for tree in gtag:
        perips_maybe = tree.find('peripherals')
        if perips_maybe == None:
            continue
        for ptag in perips_maybe.findall('peripheral'):
            interrupts = {}
            registers = {}
            clusters = {}
            pname = get_string(ptag, 'name')
            pbase = get_int(ptag, 'baseAddress')
            for itag in ptag.findall('interrupt'):
                iname = get_string(itag, 'name')
                idesc = get_string(itag, 'description')
                ival = get_int(itag, 'value')
                interrupt = {"name": iname, "description": idesc, "value": ival,
                             "pname": pname}
                interrupts[iname] = device_interrupts[ival] = interrupt
            for ctag in iter_clusters(ptag):
                for ctag in expand_dim(ctag):
                    cname = get_string(ctag, 'name')
                    cdesc = get_string(ctag, 'description')
                    coff = get_int(ctag, 'addressOffset')
                    for rtag in expand_cluster(ctag):
                        register = parse_register(rtag)
                        registers[register['name']] = register
                    clusters[cname] = {"name": cname, "description": cdesc,
                                       "offset": coff}
            for rtag in iter_registers(ptag):
                for rtag in expand_dim(rtag):
                    register = parse_register(rtag)
                    registers[register['name']] = register
            peripherals[pname] = {"name": pname, "base": pbase,
                                  "interrupts": interrupts, "registers": registers,
                                  "clusters": clusters}
            if 'derivedFrom' in ptag.attrib:
                peripherals[pname]["derives"] = ptag.attrib["derivedFrom"]
    for pname, periph in list(peripherals.items()):
        if 'derives' in periph:
            peripherals[pname]['registers'] = \
                peripherals[periph['derives']]['registers']
    return {"name": svdfile.split(".")[0], "peripherals": peripherals,
            "interrupts": device_interrupts}

def to_text(device):
    """
    Output sorted text of every peripheral, register, field, and interrupt
    in the device, such that automated diffing is possible.
    """
    mmap = []
    for i in device['interrupts'].values():
        mmap.append(f"INTERRUPT {i['value']:03d}: "
                    + f"{i['name']} ({i['pname']}): {i['description']}")
    for p in device['peripherals'].values():
        mmap.append(f"0x{p['base']:08X} A PERIPHERAL {p['name']}")
        for c in p['clusters'].values():
            addr = p['base'] + c['offset']
            mmap.append(f"0x{addr:08X} B  CLUSTER {c['name']}: "
                        + f"{c['description']}")
        for r in p['registers'].values():
            addr = p['base'] + r['offset']
            mmap.append(f"0x{addr:08X} B  REGISTER {r['name']}{r['access']}: "
                        + f"{r['description']}")
            for f in r['fields'].values():
                offset, width = f['offset'], f['width']
                mmap.append(f"0x{addr:08X} C   FIELD {offset:02d}w{width:02d} "
                            + f"{f['name']}{f['access']}: "
                            + f"{f['description']}")
    return "\n".join(sorted(mmap))

def _gen_lines_from_keys(dict, isSort = True):
    ndx = 0
    sLine = ''
    lst = []
    if isSort:
        keys = sorted(dict.keys())
    else:
        keys = dict.keys()
    for key in keys:
        ndx += 1
        sLine += key + ('  ' if len(key) > 15 else ' ' * (16 - len(key)))
        if ndx % 4 == 0 or len(sLine) >= 64:
            lst.append(sLine)
            ndx = 0
            sLine = ''
    if len(sLine) > 0:
        lst.append(sLine)
    return lst

def indentify(sIn = '', maxLen = 80, indent = 4):
    sOut = ''
    inLen = len(sIn)
    ndx = 0
    maxLen -= indent
    while ndx < inLen:
        sOut += ' ' * indent
        lineLen = maxLen if ndx+maxLen < inLen else inLen - ndx
        sOut += sIn[ndx:ndx+lineLen] + ('' if ndx+lineLen>=inLen else '\n')
        ndx += lineLen
    return sOut


def doc_gen_peripherals(device = {}):
    lst = ['#### p.']
    lst.append('<lang=dft>')

    dictP = device['peripherals']
    CSI_START = '\033['
    CSI_END = '\033[0m'
    NOCOLOR="\033[0m"
    BLACK="\033[0;30m"
    HL_BLACK="\033[1;30m"
    RED="\033[0;31m"
    HL_RED="\033[1;31m"
    GREEN="\033[0;32m"
    HL_GREEN="\033[1;32m"
    BROWN="\033[0;33m"
    YELLOW="\033[1;33m"
    BLUE="\033[0;34m"
    HL_BLUE="\033[1;34m"
    PURPLE="\033[0;35m"
    HL_PURPLE="\033[1;35m"
    CYAN="\033[0;36m"
    HL_CYAN="\033[1;36m"
    GRAY="\033[0;37m"
    WHITE="\033[1;37m"

    lst += _gen_lines_from_keys(dictP)

    lst.append('type help(\'p.{perip name}\') such as p.GPIO1 to check details')
    lst.append('输入help(\'p.外设名\') 例如 p.GPIO1 以查看细节')
    lst.append('#### perip')
    lst.append('<link=peripherals>')
    lst.append('#### jicunqi')
    lst.append('<link=peripherals>')
    sOut = '\n'.join(lst)

    dictRegRepeat = {}

    # gen peripherals
    for key in dictP.keys():
        lst.append('#### p.%s' % key)
        lst.append('<lang=dft>')
        dictPInfo = dictP[key]
        dictRegs = dictPInfo['registers']
        baseAddr = dictPInfo['base']
        lstCtnt = ['base: 0x%08x' % (baseAddr)]
        lstCtnt += _gen_lines_from_keys(dictRegs)
        lst += lstCtnt
        lst.append('输入 p.%s.{reg_name} 以查看寄存器的详细信息' % key)
        lst.append('type p.%s.{reg_name} to check details of registers' % key)
        lst.append('</lang>')
        lst.append('#### p.%s' % key.lower())
        lst.append('<link=p.%s>' % key)
        for regName in dictRegs.keys():
            comboRegName = dictPInfo['name'] + '.' + regName
            dictReg = dictRegs[regName]
            if regName in dictRegRepeat.keys():
                dictRegRepeat[regName] += [comboRegName]
            else:
                dictRegRepeat[regName] = [comboRegName]
            lst.append('#### p.%s' % comboRegName.upper())
            lst.append('<lang=dft>')
            lst.append('%s  %s0x%08x%s (0x%08x + 0x%04x)' %
                       (dictReg['access'], YELLOW, baseAddr + dictReg['offset'], NOCOLOR, baseAddr, dictReg['offset']))
            lst.append(dictReg['description'])
            dictBFs = dictReg['fields']
            for keyBF in dictBFs.keys():
                dictBF = dictBFs[keyBF]
                bOfs = dictBF['offset']
                bLen = dictBF['width']
                if bOfs == None or bLen == None:
                    continue
                sDesc = indentify(dictBF['description'], 80, 1)
                sBF = '%s (%02d)  %s%s%s  - [%02d:%02d] - %s' % \
                      (dictBF['access'], bLen, GREEN, keyBF, NOCOLOR, bOfs+bLen-1, bOfs, sDesc)
                lst.append(sBF)
                if not 'enumVals' in dictBF.keys():
                    continue
                dictEnum = dictBF['enumVals']
                for keyEnum in dictEnum.keys():
                    tupEnum = dictEnum[keyEnum]
                    sEV = '      %s - %s :' % (tupEnum[1], keyEnum)
                    lst.append(sEV)
                    sHelp = indentify(tupEnum[0], 80, 9)
                    lst.append((sHelp))
            lst.append('</lang>')
            lst.append('#### p.%s' % comboRegName.lower())
            lst.append('<link=p.%s>' % comboRegName.upper())
            lst.append('#### %s' % comboRegName.lower())
            lst.append('<link=p.%s>' % comboRegName.upper())
            lst.append('#### %s' % comboRegName)
            lst.append('<link=p.%s>' % comboRegName.upper())
    # generate fast registers
    for reg in dictRegRepeat.keys():
        lstVal = dictRegRepeat[reg]
        lst.append('#### %s' % reg)
        if len(lstVal) == 1:
            lst.append('<link=p.%s>' % lstVal[0])
        else:
            lst.append('<lang=dft>')
            lst.append('多个外设有这个寄存器/ multiple same names:')
            for s1 in lstVal:
                lst.append('   p.%s' % s1)
        lst.append('#### %s' % reg.lower())
        lst.append('<link=%s>' % reg)
    sOut = '\r\n'.join(lst)

    return sOut

import os.path as path
def main():

    parser = argparse.ArgumentParser()
    parser.add_argument('-v','--verbose',help='print more infos', action='store_true')

    parser.add_argument('-f', '--file', type=str, default = 'imxrt1062.svd',
                        help='svd file')
    args,unparsed = parser.parse_known_args()
    lstPath = args.file.split(path.sep)
    sOutFile = lstPath[-1][:-4] + '.md'
    device = parse(args.file)
    sOut = '''
#### mcu
<lang=chs>
i.MX RT1050/1060 系列跨界处理器
输入 help('p.') 以查看可用的外设列表
<lang=dft>
i.MX RT1050/1060 series cross-over processors
type help('p.') to list available peripherals
</lang>
'''
    sOut += doc_gen_peripherals(device)
    fd = open('I:\\aia_doc\\inputs\\%s' % sOutFile, 'wb')
    fd.write(sOut.encode())
    fd.close()

if __name__ == '__main__':
    main()

    