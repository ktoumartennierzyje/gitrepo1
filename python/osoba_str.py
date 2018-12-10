#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  osoba_str.py

def zapisz_dane(imie, nazwisko):
    osoba = [imie, nazwisko]
    return osoba
    
def zapisz_dane2(imie, nazwisko):
    osoba = {'imie,':imie, 'nazwisko,': nazwisko}
    return osoba    



def main(args):
    ol = zapisz_dane('Adam', 'Stodowy')
    print(ol[0], ol[1])
    
    o2 = zapisz_dane2('Eva', 'Kos')
    print (o2['imie,'], o2['nazwisko,'])
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
