#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfr_cezara.py


def pobierz_klucz():
    try:
        klucz = int(input('Podaj klucz:\n'))
        return klucz%26
    except ValueError:
        print('Błędny klucz')
        return 3


def szyfruj_1(tekst, klucz):
    szyfrogram = ''
    for znak in tekst:
        asci = ord(znak)
        if asci + klucz > 122:
            znak = chr(asci + klucz - 26)
        else:
            znak = chr(asci + klucz)
        szyfrogram += znak    
    print('szyfrogram:\n', szyfrogram)



def main(args):
    tekst = input('Podaj tekst:\n').lower()
    klucz = pobierz_klucz()
    szyfruj_1(tekst, klucz)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
