#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczba_pierwsza.py
#  
# 1 pobierz liczbe n od użytkownika
# 2 zmienej i przypisz 2
# 3 jeżeli i * i <= n przejdż do nastepnego punktu w przeciwnym razie idż dopunktu 7
# 4 jeżeli i dzielone modulo przez i równa sie 0 przejdż do nast punktu
# 5 wydrukuj komunikat "złozona" i zakończ program
# 6 zwiększ i o 1 wróć do punktu 3
# 7 wydrukuj kamunikat "liczba pierwsza"

def Liczba_Pierwsza():
    i = 2
    n = int(input("Podaj liczbe: "))
    if i * i <= n:
        while n % i ==0:
            print("Złozona")
            i += 1
    else:
        print("liczba pierwsza")
    return 0
        


def main(args):
    Liczba_Pierwsza()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
