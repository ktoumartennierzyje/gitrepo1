/*
 * cwtab7.cpp
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    char znak;
    float a, b, c;
    c = 0;
    cout<<"Podaj znak działań: ";
    cin>>znak;
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    if(znak == '+'){
        c = a + b;
        }
    else if(znak == '-'){
        c = a - b;
        }
    else if(znak == '*'){
        c = a * b;
        }
    else if(znak == '/'){
        c = a / b;
        }
    else{
        cout<<"Niepoprawny znak";
        }
    cout<<c;
    return 0;
}

