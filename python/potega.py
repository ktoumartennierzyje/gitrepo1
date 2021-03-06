#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def czy_naturalna(a):
    if a.isdigit():
        return True
    return False
    
    
def potega_it(a, n):
    wynik = 1
    for i in range(n):
        wynik = a * wynik
    return wynik
    
def potega_rek(a, n):
    if n == 0:
        return 1
    if a == 0:
        return 0
    return potega_rek(a^(n-1)*a)

def main(args):
    assert potega_rek(2, 0) == 1
    assert potega_rek(2, 1) == 2
    assert potega_rek(0, 2) == 0
    assert potega_rek(1, 2) == 1
    assert potega_rek(3, 3) == 27
    
    a = input('Podaj podstawe : ')
    n = input('Podaj wykładnik: ')
    if not czy_naturalna(a) or not czy_naturalna(n):
        print('Błądne dane!')
        return 0
    print('{} do potęgi {} = {}'.format(a, n, potega_it(int(a), int(n))))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
