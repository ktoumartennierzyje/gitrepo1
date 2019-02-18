#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  fibonacci.py
def czy_naturalna(n):
    if n.isdigit():
        return True
    return False


def fib_it(n):
    if n < 2:
        return n
    a, b, wynik = 0, 1, 0
    
    for i in range(2, n + 1):
        if a > 0:
            print("{}/{} = {}".format(b, a, b / a))
        wynik = a + b
        a, b = b, wynik
    return wynik


def main(args):
    # ~assert fib_it(0) == 0
    # ~assert fib_it(1) == 1
    # ~assert fib_it(7) == 13
    assert fib_it(19) == 4181

    n = input('Który wyraz ciągu? ')
    while not czy_naturalna(n):
        print('Błędne dane!')
        n = input('Który wyraz ciągu? ')
    
    print("F_it({}) = {}".format(n, fib_it(int(n))))

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
