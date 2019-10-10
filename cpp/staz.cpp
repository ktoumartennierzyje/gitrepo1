/*
 * staz.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>

using namespace std;

void awans (float staz, float &zarobek, int &lata)
{
    for(lata; staz <= lata; staz ++)
        {
            zarobek += 0.1 * zarobek;
        }
}

void drukuj(int lata, float zarobek)
{
    cout<<"Pracujesz "<<zarobek<<" lat  i zarabiasz "<<lata;
}

int main(int argc, char **argv)
{
    float staz = 1;
    float zarobek = 1000;
    int lata = 0;
    cout << "Ile lat Pracujesz?"<<endl;
    cin >> lata;
    awans(staz, zarobek, lata);
    drukuj(zarobek, lata);
    return 0;
}

