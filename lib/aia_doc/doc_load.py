def load():
    try:
        fd = open('I:/doc_file.txt', 'r', encodeing='utf-8')
    except:
        fd = open('doc_file.txt', 'r', encoding='utf-8')
    try:
        import doc
        blob = doc.__doc__()  # get the (key, lang) tuple
    except:
        blob = ('help', 'chs')
    key = blob[0]
    lang = 'eng'#blob[1]
    print(blob)
    # 0 = searching key ; 1 = type ; 2 = find lang ; 3 = skip content; 4 = content
    state = 0
    lnNum = 0
    langEndStr = ""
    sHelp = ''
    for sLineOri in fd:
        sLine = sLineOri[:-2]  # strip \r\n
        lnNum += 1
        ndx = sLine.find('//')
        if ndx >= 0:
            sLine = sLine[:ndx]
        if state == 0:  # searching key
            if sLine[:5] != '<-|->':
                continue
            foundKey = sLine[5:]
            if foundKey != key:
                continue
            state = 1 # found
            continue
        elif state == 1: # print type
            state = 2
        elif state == 2: # search lang
            if sLine[:6] == '<lang=' and sLine[-1] == '>':
                foundLang = sLine[6:-1]
                state = 3
                if foundLang != lang:
                    stage = 4
                    doc.get()
        elif state == 3:
            if sLine == '</lang>':
                state = 2
        elif state == 4:
            if sLine == '</lang>':
                doc.get(sHelp)
                break
            print(sLine)
            sHelp = sHelp + sLineOri
    fd.close()
    return lnNum

if __name__ == '__main__':
    load()
