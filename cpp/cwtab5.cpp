/*
 * cwtab5.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
    int rozmiar = 50;
    char tekst[rozmiar];
    int i=0;
    cout<<"Podaj wyraz: "<<endl;
    cin.getline(tekst, rozmiar);
    for(i=0;i<strlen(tekst);i++){
        if(tekst[i]>95 && tekst[i] != '\0'){
            cout<<(char)(tekst[i]-32);
            }
        else if(tekst[i] == 32){
            cout<<(char)(tekst[i]);
            }
        else if(tekst[i]<95 && tekst[i]>64){
            cout<<(char)(tekst[i]+32);
            }
        }
    return 0;
}

