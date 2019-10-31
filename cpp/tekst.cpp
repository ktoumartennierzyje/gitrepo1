/*
 * tekst.cpp
 * Copyright 2019  <>
 */


#include <iostream>

using namespace std;

#define ROZMIAR 100

int main(int argc, char **argv)
{
    char tekst[ROZMIAR];
    int i;
    int j;
    cout<<"Podaj zdanie: "<<endl;
    cin.getline(tekst, ROZMIAR);
    for (i = 0; i < ROZMIAR ; i++){
        cout << tekst[i];
        }

    return 0;
}

