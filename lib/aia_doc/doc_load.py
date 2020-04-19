import time

def compute_hash(key, modulo=100):
    hash = 5381
    bKey = key.encode()
    for b in bKey:
        hash = (hash * 33) ^ b
    return hash % modulo
    
def open_helpfile(key):
    hash = compute_hash(key)
    sPath = '/aia_doc/zzhsh_%02d.md' % hash
    fd = open(sPath, 'rb')
    return fd

def modmain():
    t0 = time.ticks()
    try:
        import doc
        blob = doc.doc()  # get the (key, lang) tuple
    except:
        blob = ('welcome', 'chs')
    key = blob[0]
    lang = blob[1]
    print('='*20, key, '='*20)
    hash = compute_hash(key, 100)

    fd = open_helpfile(key)
    s = fd.read(4096)

    while len(s) > 1:
        subLen = len(s)
        ret = doc.search(s, subLen)
        if ret == 1:
            break # found
        elif ret == 2: # link
            blob = doc.doc() # get new key
            key = blob[0]
            fd.close()
            fd = open_helpfile(key)
            print('-->', key)
            fd.seek(0)
        elif ret < 0:
            fd.seek(ret,1)
        s = fd.read(4096)

    t1 = time.ticks()
    #print('ticks = %d' % (t1 - t0))
    fd.close()

if __name__ == '__main__':
    #help()
    modmain()
