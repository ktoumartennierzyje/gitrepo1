#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
#  
# zdefiniuj kase samochód
# markia np fiat
# model np tipo
# rok produkcji np 2002
# metoda wiek 
from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    def __init__(self, imie, nazwisko, kategoria):
        super()__init__(imie, nazwisko)
        self.kategoria = kategoria

class Samochud:
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        self.kierowca = kierowca
        
    def wiek(self):
        dziś = date_today()
        return dziś.year - self.rok


def main(args):
    s1 = Samochud('Fiat', 'Tipo', 2002)
    s2 = Samochud('Peugeot', '308', 2007)
    print(s1.model, s1.wiek())
    print(s2.model ,s2.wiek()) 
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
