/*
 * trojkat.cpp
 *
 * Copyright 2019  <>
 */

using namespace std;

#include <cmath>

#include <iostream>

int main(int argc, char **argv)
{
    float a, b, c;
    cout<<"Podaj trzy liczby: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a + b <= c)
    {
            cout<<"Nie mozna skonstruować trójkąta";
    }
    else if (a + c <= b)
    {
            cout<<"Nie mozna skonstruować trójkąta";
    }
    else if (c + b <= a)
    {
            cout<<"Nie mozna skonstruować trójkąta";
    }
    else
    {
            cout<<"Mozna skonstruowac trójkąt";
            if (sqrt(a^2+b^2)=c){
                cout<<"Masz trójkąt prostokątny"}
            else if (sqrt(a^2+c^2)=b){
                cout<<"Masz trójkąt prostokątny"}
            else if (sqrt(b^2+c^2)=a){
                cout<<"Masz trójkąt prostokątny"}
            else{
                cout<<"Nie masz trójkątu prostokątnego"}
    }
    return 0;
}

