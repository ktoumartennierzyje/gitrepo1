/*
 * euklides.cpp
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void euklides1(int a, int b, int i){
    while (a>0){
        i++;
        a = a%b;
        b = b-a;
        }
    cout<<"NWD: " << b<<endl;
    cout<<"Powtórzenia: " << i << endl;
    }
void euklides(int a, int b, int i){
        while(a!=b){
        i ++;
        if(a>b){
            a -= b;
            }
        else {
            b -= a;
            }
        }
    cout<<"NWD: " << a<<endl;
    cout<<"Powtórzenia: " << i<< endl;
    }
int main(int argc, char **argv)
{
    int a, b, i;
    a = b = i = 0;
    cout << "Podaj dwie liczby całkowite: "<<endl;
    cin >> a >> b;
    euklides(a, b, i);
    cout << "zoptymalizowany"<<endl;
    euklides1(a, b, i);
    return 0;
}

