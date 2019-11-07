/*
 * delta.cpp
 * Copyright 2019  <>
 */


#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char **argv)
{
    float a, b, c, d, x1, x2;
    cout<<"Podaj współczynniki a, b, c: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"F(x) = "<<a<<"x2 + "<<b<<"x + "<<c<<endl;
    d = pow(b,2)-4*a*c;
    cout<<"Delta = "<<d<<endl;
    if (d>0){
        cout<<"Funkcja ma dwa miejsca zerowe";
        x1 = (-b-sqrt(d))/2;
        x2 = (-b+sqrt(d))/2;
        cout<<x1<<" "<<x2<<endl;
        cout<<"Postać iloczynowa: ";
        cout<<"F(x) = "<<a<<"(x-"<<x1<<")(x-"<<x2<<")"<<endl;
        }
    else if (d<0){
        cout<<"Funkcja nie ma miejsc zerowych";

        }
    else{
        cout<<"Funkcja ma jedno miejsce zerowe";
        x1 = 0-b/2 * a;
        cout<<"Postać iloczynowa: ";
        cout<<"F(x) = "<<a<<"(x-"<<x1<<")"<<endl;
        }

    return 0;
}

