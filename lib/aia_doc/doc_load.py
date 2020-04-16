import time
def load():
    d0 = time.ticks()
    try:
        fd = open('/doc_file.txt', 'r', encodeing='utf-8')
    except:
        fd = open('doc_file.txt', 'r', encoding='utf-8')
    try:
        import doc
        blob = doc.doc()  # get the (key, lang) tuple
    except:
        blob = ('help', 'chs')
    key = blob[0]
    lang = blob[1]
    # 0 = searching key ; 1 = type ; 2 = find lang ; 3 = skip content; 4 = content
    state = 0
    lnNum = 0
    langEndStr = ""
    sHelp = ''
    for sLine in fd:
        if state != 0:
            sLine = sLine[:-2]  # strip \r\n
        lnNum += 1
        if lnNum % 1000 == 0:
            print('.', end='')
        if state == 0:  # searching key
            if sLine[:5] != '<key>':
                continue
            if sLine[5:-2] != key:
                continue
            state = 2 # found
        elif state == 2: # search lang
            if sLine[:6] == '<lang=' and sLine[-1] == '>':
                foundLang = sLine[6:-1]
                state = 3
                if foundLang == lang:
                    if lnNum >= 1000:
                        print('\r')
                    state = 4
            elif sLine[:6] == '<link=' and sLine[-1] == '>':
                key = sLine[6:-1]
                print('-->', key)
                fd.seek(0)
                state = 0
                continue
        elif state == 3:
            if sLine == '</lang>':
                state = 2
        elif state == 4:
            if sLine == '</lang>':
                doc.get(sHelp)
                break
            print(sLine)
            sHelp = sHelp + sLine + '\n'
    fd.close()
    d1 = time.ticks()
    print('%d ticks' % (d1-d0))
    return lnNum

if __name__ == '__main__':
    load()
