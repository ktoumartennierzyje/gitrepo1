#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kozera_petle.py

def CW1():
    suma = 0
    liczba = int(input('Podaj liczbe: '))
    while suma < 75:
        print(suma)
        suma += liczba
        liczba = int(input("podaj liczbe: "))
    print()
    print("suma liczb: ", suma)
    return 0
    

def CW2():
    n = int(input("Podaj zakres dolny: "))
    m = int(input("Podaj zakres górny: "))
    liczby = 0
    for liczby in range(n, m, 1):
        liczby = liczby + 1
        print(1)
    return 0
def CW3():
    n = 0
    m = int(input('podaj ostatnią liczbe: '))
    kwadrat = 0
    for kwadraty in range (n, m +1):
        kwadrat = kwadrat**2
    print('kwadraty')
    return 0
def main(args):
    CW1(suma, liczba)
    CW2()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
