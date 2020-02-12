/*
 * zamiana.cpp
 * Copyright 2020  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

void tabprint(char tab[4]){
    for(int i=0; i<4; i++){
        cout<<tab[i];
    }
}

int hex2dec(char tab[4]){
    int dlugosc = strlen(tab);
    int h = 1;
    int z = 0;
    for(int i=dlugosc-1;i>=0;i--){
        if(tab[i]>='0'&&tab[i]<='9'){
            z+=(tab[i]-48)*h;
            h=h*16;}
        else if(tab[i]>='A'&&tab[i]<='F'){
            z+=(tab[i]-55)*h;
            h=h*16;
            }
        else if(tab[i]>='a'&&tab[i]<='f'){
            z+=(tab[i]-87)*h;
            h=h*16;
        }
    }
}
int main(int argc, char **argv)
{
    char tab[4];
    cout<<"Podaj liczbe szesnastkową(wielkie litery): ";
    for(int i=0; i<4; i++){
        cin>>tab[i];
    }
    cout<<hex2dec(tab);
    return 0;
}

