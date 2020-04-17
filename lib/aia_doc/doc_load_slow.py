import time
def process_item(sLine, state):
    pass

def modmain():
    state = 0
    t0 = time.ticks()
    fd = open('/aia_doc/doc_file.txt', 'r')
    s = fd.read(8192)
    lnNum = 0
    langEndStr = ""
    sHelp = ''    
    while len(s) > 1:
        subLen = len(s)
        t = 0    # t is the index of current string segment
        try:
            import doc
            blob = doc.doc()  # get the (key, lang) tuple
        except:
            blob = ('welcome', 'chs')
        key = blob[0]
        lang = blob[1]
        # search in a segment of data
        while True:
            t2 = s.find('\n', t)
            if t2 < 0:
                rem = subLen - t
                if rem > 0:
                    fd.seek(-(subLen-t),1)
                break
            lineLen = t2 - t
            #-------------------------------------
            if state != 0:
                sLine = s[t:t2-1]
            lnNum += 1
            if lnNum % 1000 == 0:
                print('.', end='')
            if state == 0 and s[t:t+5] == '<key>' and s[t+5:t2-1] == key:  # searching key
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
                    state = 0
                    #restart from doc
                    fd.seek(0)
                    break
            elif state == 3:
                if sLine == '</lang>':
                    state = 2
            elif state == 4:
                if sLine == '</lang>':
                    doc.get(sHelp)
                    break
                print(sLine)
                sHelp = sHelp + sLine + '\n'
            #-------------------------------------
            t += lineLen + 1
        if len(sHelp) > 0:
            break
        s = fd.read(8192)
    t1 = time.ticks()
    print('ticks = %d' % (t1 - t0))
    fd.close()

if __name__ == '__main__':
    #help()
    modmain()
