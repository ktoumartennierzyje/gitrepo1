/*
 * szyfr_cezara.cpp
 */


#include <iostream>
#include <cstring>
using namespace std;

void zamien(char tekst[30]){
    for(int i=0;i<strlen(tekst);i++){
        if(tekst[i]<95 && tekst[i]>64){
            cout<<(char)(tekst[i]+32);
        }
        else if(tekst[i]>95 && tekst[i] != '\0'){
            cout<<(char)(tekst[i]);
        }
    }
}

void koduj(char tekst[30], int y){
    for(int i=0;i<strlen(tekst);i++){
        if(tekst[i]+y>123){
            cout<<(char)((tekst[i])+y-26);
        }
        else if(tekst[i]+y<95){
            cout<<(char)((tekst[i])+y+26);
        }
        else{
            cout<<(char)((tekst[i])+y);
        }
    }
}
void deszyfruj(char tekst[30], int y){
        for(int i=0;i<strlen(tekst);i++){
        if(tekst[i]+y>123){
            cout<<(char)((tekst[i])-y-26);
        }
        else if(tekst[i]+y<95){
            cout<<(char)((tekst[i])-y+26);
        }
        else{
            cout<<(char)((tekst[i])-y);
        }
    }
}



int main(int argc, char **argv)
{
    char tekst[30];
    int rozmiar=0;
    cout<<"Podaj tekst: "<<endl;
    cin.getline(tekst, 30);
    zamien(tekst);
    cout<<endl<<"Podaj przesuniecie: "<<endl;
    cin>>rozmiar;
    int y = rozmiar%26;
    koduj(tekst,y);
    cout<<endl;
    deszyfruj(tekst, y);
    return 0;
}

