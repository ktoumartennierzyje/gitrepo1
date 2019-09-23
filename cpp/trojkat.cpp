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
            cout<<"Można skonstruować trójkąt"<<endl;
    }

    if (sqrt(a*a+b*b)==c)
    {
        cout<<"To trójkąt prostokątny";
        }
    else if (sqrt(a*a+c*c)==b)
    {
        cout<<"To trójkąt prostokątny";
        }
    else if (sqrt(c*c+b*b)==a)
    {
        cout<<"To trójkąt prostokątny";
        }
    return 0;
}

