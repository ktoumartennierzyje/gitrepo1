/*
 * tablica.cpp
 *
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void pobierzOceny(float t[],int r){
    for(int i=0;i<r;i++){

    cin>>t[i];
}
}
void srednia(float t[],int r,float s){
    for(int i=0;i<r;i++){
    s+=t[i]/r;
}
cout<<"Twoja srednia to: ";
    cout<<s;
}

int main(int argc, char **argv)
{
    cout <<"Ile podasz ocen? ";
    int r;
    cin>>r;
    float t[r];
    float s=0;

    pobierzOceny(t,r);
    srednia(t,r,s);

    return 0;
}

