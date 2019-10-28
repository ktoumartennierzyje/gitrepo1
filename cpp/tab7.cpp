/*
 * tab7.cpp
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int tab[20];
    srand(time(NULL));
    for (int i = 0; i<21; i++){
        tab[i] = rand()%11;
    }
    return 0;
}

