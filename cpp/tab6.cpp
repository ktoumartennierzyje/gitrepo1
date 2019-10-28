/*
 * tab6.cpp
 * Copyright 2019  <>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int tab[20];
    int min = tab[1];
    int max = tab[0];
    srand(time(NULL));
    for (int i = 0; i<21; i++ ){
        tab[i] = rand()%51;
        }

    for (int j = 0; j<21; j++){

        if(max<tab[j])
        {
            max = tab[j];
        }
        if (min>tab[j])
        {
            min = tab[j];
        }
    }

    cout << max << " "<< min;
    return 0;
}

