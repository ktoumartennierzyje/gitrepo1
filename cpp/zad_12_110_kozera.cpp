/*
 * tekst11.cpp
 *
 * Copyright 2020  <>
 */
#include <iostream>
using namespace std;

void zamien(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void boubble_sort(int tab[], int p){
    for (int i=p-1; i>0; i--){
        for (int k = 0; k<i; k++){
            if (tab[k] < tab[k + 1]){
                zamien(tab[k], tab[k+1]);
            }
        }
    }

}

int main(int argc, char **argv)
{
    int j = 0;
    int rozmiar = 1;
    int tab[rozmiar];
    int p = 0;
    cout<<"Podaj liczbe całkowitą: ";
    cin>>p;
    for(int i = 1; i<=p ;i++){
        if(p%i == 0){
            tab[j] = i;
            j++;
            rozmiar++;
            }
        }

    boubble_sort(tab,p);
    for(int i=0;i<j;i++){
        cout<<tab[i]<<", ";
        }
    return 0;
}

