/*
 * cwtab6.cpp
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char **argv)
{
    int rozmiar = 100;
    char tekst[rozmiar];
    int i;
    int dl=0;
    int ml=0;
    int li=0;
    int zb=0;
    cout<<"Podaj wyraz: "<<endl;
    cin.getline(tekst, rozmiar);
    for(i=0;i<strlen(tekst);i++){
        if(tekst[i]>95 && tekst[i]<124){
            ml+=1;
            }
        else if(tekst[i]<95 && tekst[i]>64){
            dl+=1;
            }
        else if(tekst[i]>47 && tekst[i]<58){
            li+=1;
            }
        else if(tekst[i] == 32){
            zb+=1;
            }
        }
        cout<<"Duże litery: "<<dl<<endl<<"Małe litery: "<<ml<<endl<<"Cyfry: "<<li<<endl<<"Znaki białe: "<<zb;
    return 0;
}

