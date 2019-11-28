/*
 * reszta.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int nominaly[100];
int LiczbaNominalow;

void wczytajNominaly(){
    cout<<"Podaj liczbe nominałów: ";
    cin>>LiczbaNominalow;
    cout<<"Podaj nominały w kolejności malejącej"<<endl;
    int i = 0;
    int nominal = 0;
    nominaly[i] = nominal;
    i++ ;
    while(i<LiczbaNominalow){
        cin>>nominal;
        if(nominal>nominaly[i]){
            cout<<"Nominał większy od poprzedniego!"<<endl;
            continue;
            }
        nominaly[i] = nominal;
        i++;
    };

    for(int i=0; i<LiczbaNominalow; i++){
        cout<<nominaly[i]<<" ";
    }
    cout<<endl;
}

int znajdzReszte(int reszta){
    cout<<"Wpłacone nominały: "<<endl;
    int aktualnyNominal = 0;
    while(reszta>0 && aktualnyNominal<liczbaNominalow){
        cout<<"reszta = "<<reszta<<endl;
        znajdź największy dostepny nominał mniejszy od reszty
        cout<<"aktualnyn nominał: "<<nominaly[aktualnyNominal];
        oblicz wymaną liczbe nominałów
        pomniejsz reszte
    }
}

int main(int argc, char **argv)
{
    wczytajNominaly();
    int cena;
    int wplata;
    cout<<"Podaj cene";
    cin>>cena;

    do{
        cout<<"Podaj wpłatę: ";
        cin>>wplata;
    }while(wplata<ceny);

    znajdzReszte(wplata - cena);

    return 0;
}


