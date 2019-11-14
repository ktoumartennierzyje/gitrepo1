/*
 * palindrom.cpp
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

bool czy_palindrom(char tab[]){
    int rozmiar = strlen(tab) - 1;
    for(int i = 0; i<rozmiar/2; i++){
        if(tab[i]==tab[rozmiar-i-1]) continue;
        else{
            return false;
            }
        }
    return true;
    }

void removeSpaces(char tab1[], char tab2[]){
    int rozmiar = strlen(tab1);
    for(int i = 0; i<rozmiar; i++){
        if (tab1[i] != ' '){
            tab2[i] = tab1[i];
            }
        }
    }

int main(int argc, char **argv)
{
    int r = 20;
    char napis[r];
    char napis2[r];
    cin.getline(napis, 20);
    removeSpaces(napis, napis2);
    cout<<napis2[r]<<endl;
    cout<<strlen(napis2)<<endl;
    if(czy_palindrom(napis2)) {
        cout << "To palindrom"<<endl;
        }
    else{
        cout <<"Nie palindrom"<<endl;
        }
    return 0;
}

