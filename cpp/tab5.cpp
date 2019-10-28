/*
 * tab5.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int tab[20];
    int b = 0;
    srand(time(NULL));
    for (int i = 0; i<21; i++ ){
        tab[i] = rand()%21;
        }
    int a = 0;
    cout<<"Podaj dowolną liczbe z tablicy: ";
    cin>>a;
    for (int j = 0; j<21; j++){
        if(a==tab[j]){
            b +=1;
        }
        }
    cout << b;
    return 0;
}

