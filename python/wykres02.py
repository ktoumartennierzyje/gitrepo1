#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wykres02.py
import matplotlib.pyplot as plt
from matplotlib.mlab import frange

def main(args):
    x = range(-10, 11)
    y = [a * i + b for i in x]
    
    plt.plot(x, y)
    plt.title('Wykres f(x) = {}*x + {}'.format(a, b))
    plt.grid(True)
    plt.show()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
