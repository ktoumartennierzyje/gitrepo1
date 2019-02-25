#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  napisy.py


def pobierz_dane1():
    imie = input('Podaj imie: ').strip()
    nazwisko = input('Podaj nazwisko: ').strip()
    print('Witaj {} {}'.format(imie.strip().capitalize(),
                               nazwisko.strip().capitalize()))
    if len(imie) > len(nazwisko):
        print('imie > nazwisko')
    elif len(imie) < len(nazwisko):
        print('imie < nazwisko')
    else:
        print('imie = nazwisko')
    if imie[-1] == 'a':
        print('kobieta')


def pobierz_dane2():
    nazwa = input('imie i nazwisko: ').strip()
    while nazwa.count(' ') != 1:
        nazwa = input('imie i nazwisko: ').strip()
    samogloski = set(['a', 'o', 'u', 'i', 'e', 'y', 'ą', 'ę'])
    
    ileSa = 0
    for nazwa in samogloski:
        if znak in samogloski:
            ileSa += 1
    print(ileSa)


def pobierz_dane3():
    napis1= input('Tekst: ').strip()
    napis2 = ''
    inne = set(['.',',','!' ])
    for znak in napis1:
        if znak not in inne and not znak.isdigit():
            if znak.islower():
                napis2 += znak.upper()
            else:
                napis2 += znak.lower()
        print(napis2)


def main(args):
    #pobierz_dane1()
    #pobierz_dane2()
    pobierz_dane3()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
