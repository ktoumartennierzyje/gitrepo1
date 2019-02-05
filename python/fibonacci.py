#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  fibonacci.py


def czy_naturalna(n):
    if n.isdigit():
        return True
    return False

def main(args):
    n = input('Który wyraz ciągu? ')
    while not czy_naturalna(n):
        print('Błędne dane')
        n = input('Który wyraz ciągu? ')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
