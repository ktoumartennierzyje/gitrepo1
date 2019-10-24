/*
 * tablica2w.cpp
 * Copyright 2019  <>
 */

#include <iostream>
#include <iomanip>

using namespace std;

#define N   10//stała
#define M   10//stała

int main(int argc, char **argv)
{
    int tab2w[N][M];
    int i, j;
    srand(time(NULL)); //inicjacja generatora liczb pseudolosowych

    for (i=0; i<N; i++){
        cout << "===========Tablica=========" << i << endl;
        for (j=0; j<M; j++){
            tab2w[i][j] = i*j;
            cout <<tab2w[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}

