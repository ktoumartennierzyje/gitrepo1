/*
 * tab1.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int tab1[5];
    int tab2[5];
    int i = 0;
    int j = 0;
    cout<<"Podaj 5-cio cyfrową liczbe: "<<endl;
    for (i = 0; i < 5; i++){
        cin >> tab1[i];
        }
    cout<<"Podaj 5-cio cyfrową liczbe: "<<endl;
    for (j = 0; j < 5; j++){
        cin >> tab2[j];
        }
    int suma = tab1[5] + tab2[5];
    cout << suma;
    if (tab1[5]>tab2[5]){
        cout << "Pierwsza liczba jest większa";
        }
    else if (tab1[5]>tab2[5]){
        cout << "Druga liczba jest większa";
        }
    else {
        cout << "Liczby są równe";
        }
    return 0;
}

