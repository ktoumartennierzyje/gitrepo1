#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    a = input('podaj bok a:')
    b = input('podaj bok b:')

    obwod = 2 * (int(a) + int(b))
    print(obwod)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
