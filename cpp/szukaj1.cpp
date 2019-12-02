/*
 * szukaj1.cpp
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int szukaj_it(int liczby[], int ile, int n){
    int index = -1;
    for(int i=0; i<ile; i++){
        if (liczby[i] == n) return i;
        }
    return index;
}

int szukaj_re(int liczby[], int lewy, int prawy, int n){
    if (lewy > prawy){
        return -1;
    }
    else{
        if(liczby[lewy] == n){
            cout<<"element znaleziono!"<<endl;
            return lewy;
        }
        else{
            szukaj_re(liczby, lewy+1, prawy, n);
        }
    }

}

int szukaj_re2(int liczby[], int lewy, int prawy, int n){
    if (lewy > prawy){
        return -1;}
    else{
        if(liczby[prawy] == n){
            cout<<"element znaleziono!"<<endl;
            return prawy;
        }
        else{
            szukaj_re(liczby, lewy, prawy-1, n);
        }
    }
}

int main(int argc, char **argv)
{
    int liczby[]= {3, 8, 3, 9, 10, 45, 37};
    int n;
    cout<<"Podaj szukany element: "<<endl;
    cin>>n;
    int index = szukaj_re2(liczby, 0, 6, n);
    if(index>-1){
        cout << liczby[index]<<endl;
    }
    return 0;
}

