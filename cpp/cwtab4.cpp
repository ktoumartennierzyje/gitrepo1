/*
 * cwtab4.cpp
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
    int rozmiar = 15;
    char tekst[rozmiar];
    int i=0;
    cout<<"Podaj wyraz: "<<endl;
    cin.getline(tekst, rozmiar);
    cout<<strlen(tekst)<<endl;
    for (i=strlen(tekst); i>-1; i--){
        if(tekst[i] != '\0'){
            cout<<tekst[i];
        }
        }
    return 0;
}

