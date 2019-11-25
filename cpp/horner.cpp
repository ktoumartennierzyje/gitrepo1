/*
 * horner.cpp
 *
 * Copyright 2019  <>
 */

#include <iostream>
using namespace std;

void drukujw(int n, float tbwsp[]){

for(int i = 0 ; i<n ; i++){
    cout<<tbwsp[i]<<"*x^"<<n-i<<" + ";
    }
    cout<<tbwsp[n]<<endl;
}
float horner_it(int n, float tbwsp[], float x){
    int i;
    float wynik = tbwsp[0];
    for (i=1; i<n+1; i++){
        wynik = wynik * x + tbwsp[i];
    }
    return wynik;
}

int main(int argc, char **argv)
{
    int n = 0;//stopień wielomianu
    float *tbwsp;//tablica współczynników
    float x;//argument
    cout<<"Podaj stopień wielomianu: "; cin>>n;
    tbwsp = new float [n + 1];
    cout<<"Podaj argument wielomianu: "; cin>>x;

    for (int i=0; i<n+1; i++){
        cout <<"Współczynnik przy potędze "<<n-i<<": ";
        cin>>tbwsp[i];
    }
    cout << "wartość wielomianu o postaci: ";
    drukujw(n, tbwsp);
    cout << horner_it(n, tbwsp, x)<<endl;
    return 0;
}

