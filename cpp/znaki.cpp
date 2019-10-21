/*
 * oblicz.cpp
 * Copyright 2019  <>
 * znakiem konczącym tablice znakową jest \0
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znak = 'a';
    char napis[11] = "moj_napis";
    cout << napis[0] << endl;
    cout << "Podaj znak: " <<endl;
    cin >> znak;
    cout << znak <<endl;
    cout << "Podaj napis: "<<endl;
    cin >> napis;
    cout << napis <<endl;
    return 0;
}

