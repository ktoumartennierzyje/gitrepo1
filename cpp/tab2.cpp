/*
 * tab2.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

#define W   5
#define K   10

int main(int argc, char **argv)
{
    int n = 0;
    int tab[W][K];
    cout<<"Podaj zakres losowania liczb: ";
    cin>>n;
    srand(time(NULL));
    for(int i = 0; i<W;i++){
        for(int j = 0; j < K; j++){
            tab[i][j] = rand()%n+1;
            cout<<tab[i][j];
            }
            cout<<endl;
        }
    return 0;
}

