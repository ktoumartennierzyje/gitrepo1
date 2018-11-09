#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  trojkat.py  


def main(args):
    a, b, c = eval(input('podaj boki oddzielone przecinkiem: '))
    # ~if a + b > c:
        # ~print('prawda')
        # ~if a + c > b:
            # ~print('prawda')
            # ~if b + c > a:
                # ~print ('trojkat')
            # ~else:
                # ~print('nie trojkat')
        # ~else:
            # ~print('nie trojkat')
    if a + b > c and a + c > b and b + c > a:
        print('trojkat')
    else:
        print('nie trojkat')
                 
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
