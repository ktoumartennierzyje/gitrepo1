/*
 * kompresja.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    float Vnk, Vk;
    cout<<"Podaj objętość nie skompresowaną: "<<endl;
    cin>>Vnk;
    cout<<"Podaj objętość skompresowaną: "<<endl;
    cin>>Vk;
    float Rc = Vk/Vnk *100;
    float Rcb = (1-(Vk/Vnk))*100;
    cout<<"Współczynnik kompresji wynosi: "<<Rc<<"%"<<endl;
    cout<<"Współczynnik kompresji` wynosi: "<<Rcb<<"%";
    return 0;
}

