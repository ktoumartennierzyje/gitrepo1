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
    cin>>nominal;
    nominaly[i] = nominal;
    i++;
    while(i<LiczbaNominalow){
        cin>>nominal;
        if(nominal>nominaly[i-1]){
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

int policzNominal(int n){
    int ile = 0;
    for(int i=0; i<LiczbaNominalow ;i++){
        if(n>nominaly[i]){break;}
        if (nominaly[i] == n){
            ile ++;
            }
        }
    return ile;
    }

void znajdzReszte(int reszta){
    cout<<"Wpłacone nominały: "<<endl;
    int aktualnyNominal = 0;
    while(reszta > 0 && aktualnyNominal < LiczbaNominalow){
        cout<<"reszta = "<<reszta<<endl;
        while(aktualnyNominal < LiczbaNominalow && reszta < nominaly[aktualnyNominal]){
            aktualnyNominal++;
        }
        int nominal = nominaly[aktualnyNominal];
        cout<<"aktualnyn nominał: "<<nominal<<endl;
        if(aktualnyNominal < LiczbaNominalow && reszta >= nominal){
            int liczbaBanknotow = reszta / nominal;
            cout<<"Dostępnych nominałó: "<<policzNominal(nominal);
            reszta = reszta - liczbaBanknotow*nominal;
            cout<<liczbaBanknotow<<"x"<<nominal<<"zł"<<endl;
        }
    }
    if(reszta>0){
        cout<<"Brak nominalow do wydania kwoty: "<<reszta<<endl;
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
    }while(wplata<cena);

    znajdzReszte(wplata-cena);

    return 0;
}


