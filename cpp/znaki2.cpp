/*
 * oblicz.cpp
 * Copyright 2019  <>
 * znakiem konczącym tablice znakową jest \0
 */


#include <iostream>

using namespace std;

void ascii(){
    int i = 0;
    for (i = 65; i<91; i++){
        cout << i <<" - "<<char(i) << endl;
    }
}

void litery2liczby(char tabzn[], int rozmiar){
    int i = 0;
    for (i = 0; i<rozmiar; i++){
        cout << tabzn[i] <<" - "<<(int)tabzn[i] << endl;
    }
    }

void koduj(char tabzn[], int rozmiar = 11){
    int i = 0;
    for (i = 0; i<20; i++){
        cout << tabzn[i] <<" - "<<(int)tabzn[i] << endl;
    }
    }

void odkoduj (int tabli[], int rozmiar=20){
    int i = 0;
    for (i = 0; i<15; i++){
        cout << tabli[i] <<" - "<<(char)tabli[i] << endl;
    }
    }

int main(int argc, char **argv)
{
    int rozmiar = 20;
    //char napis[rozmiar] = "Ala ma kota!";
    //ascii();
    //cout << endl;
    //litery2liczby(napis, rozmiar);
    char napis2[25] = "Marian pijany pod mostem";
    koduj(napis2, rozmiar);
    cout<< endl;
    int napis3[20] = {112, 111, 103, 99, 122, 109, 101, 110, 105, 107, 0};
    odkoduj(napis3, rozmiar);
    return 0;
}

