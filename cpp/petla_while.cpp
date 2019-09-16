/*
 * petla.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 0;
    while(i <= 20) {
        cout <<"Hello!"<< i <<endl;
        i +=2;
    }
    cout << "Wartość i: " <<i<<endl;
    return 0;
}

