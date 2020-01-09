/*
 * zlozonosc.cpp
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int i = 0;
    int n,x;
    n = 5;
    int tab[n] = {3, 6, 8, 4, 7};
    cout<<"Podaj szukaną liczbę: ";
    cin>>x;
    while(i<n){
        if(tab[i]==x){
            cout<<i;
            return 0;
        }
        i++;
    }
    cout<<"-1";
    return 0;
}

