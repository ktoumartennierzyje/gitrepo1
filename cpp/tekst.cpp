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
    int j = 1;
    cout<<"Podaj zdanie: "<<endl;
    cin.getline(tekst, ROZMIAR);
    for (i = 0; i < ROZMIAR ; i++){
        if(int(tekst[i])== 32){
            j +=1;
        }
        }
    cout<<"Liczba slow tym zdaniu: "<<j;
    return 0;
}

