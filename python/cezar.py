#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  cezar.py
def szyfruj(t, k):
    szyfr = ''
    for z in t.lower():
        kod = ord(z) + k
        if kod > 122:
            kod -= 26
        szyfr += cht(kod)
    return szyfr

def main(args):
    tekst = input("Podaj tekst: ")
    klucz = input("Podaj klucz: ")
    klucz = klucz%26
    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
