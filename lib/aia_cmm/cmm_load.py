from pyb import Pin
import cmm
import gc
def load():
    print('loading')
    fd = open('/cmm_cfg.csv')
    dict = {}
    for sLine in fd:
        if sLine[-2] == '\r':
            sLine = sLine[:-2]
        else:
            sLine = sLine[:-1]
        lst = sLine.split(',')
        if len(lst) < 4:
            continue
        if lst[1] == '-':
            comboName = lst[0] + '.' + lst[2]
        else:
            comboName = lst[0] + '.' + lst[1] + '.' + lst[2]
        # value格式:(hint字符串, pin字符串，pin对象，当前属主
        try:
            pin = Pin(lst[4])
            dict[comboName] = (lst[3],lst[4], Pin(lst[4]), None)
        except:
            dict[comboName] = (lst[3],lst[4], None, None)
        del(lst)
        del(comboName)
    fd.close()
    cmm.add(dict)
    return dict
if __name__ == '__main__':
    dict = load()
