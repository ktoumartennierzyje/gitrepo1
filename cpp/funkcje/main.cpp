#include <iostream>

using namespace std;

void sumuj(int a, int b)
{
    cout << "Suma: " << a + b <<endl;
}

void podziel(int a, int b)
{
    if (b == 0)
    {
        cout << "Nie można dzielić przez zero";
    }
    else
    {
        cout << "Iloraz: " << float(a) / float(b) <<endl;
    }
}

int pomnoz(int a, int b)
{
    return a*b;
}
int odejmij(int a, int b)
{
    return a-b;
}

int main()
{
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
//    sumuj(a, b);
//    sumuj(b, a);
//    podziel(a, b);
    cout << "Iloczyn: " << pomnoz(a, b) <<endl;
//    int wynik;
//    wynik = pomnoz(a, b);
//    cout << "Iloczyn: " <<wynik;
    cout << "Różnica: " << odejmij(a, b) <<endl;
    return 0;
}
