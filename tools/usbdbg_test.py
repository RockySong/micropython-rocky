import serial
import serial.tools.list_ports
import struct

def DetectCOM(comKey = ''):
    """Detects the first COM port that contains comKey in its descriptor, does not match case"""
    plist = list(serial.tools.list_ports.comports())
    if len(plist) <= 0:
        return None
    for cp in plist:
        lstCP = list(cp)  # [0]: ConNdx, [1]: strDesc [2]: VID,PID
        sDesc = lstCP[1].lower()
        if sDesc.find(comKey.lower()) >= 0:
            return lstCP

def main():
    lstCP = DetectCOM('openmv')
    if lstCP is None:
        print('not found openmv com port')
        return -1
    
    print(lstCP[0])

if __name__ == '__main__':
    main()