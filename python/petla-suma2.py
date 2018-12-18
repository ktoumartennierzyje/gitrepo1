#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-suma.py


def main(args):
    
    suma = 0
    liczba = int(input("podaj liczbe: "))
    while suma < 75:
        print(suma)
        suma += liczba
        liczba = int(input("podaj liczbe: "))
    print()
    print("suma liczb: ", suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
