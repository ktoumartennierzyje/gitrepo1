#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-suma.py


def main(args):
    
    suma = 0
    for i in range(1, 101, 2):
        print(suma)
        suma += i
    print()
    print("suma liczb <o, 100>", suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
