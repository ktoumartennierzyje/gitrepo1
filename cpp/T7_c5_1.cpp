#include <iostream>

using namespace std;

int i, n, p1, p2, fib;

int main()
{
    cout << "Podaj n: ";
    cin >> n;
    p1=p2=1;
    if(n==1 || n==2) fib = 1;
    for(i=3; i<=n; i++)
    {
        fib=p1+p2;
        p2=p1;
        p1=fib;
    }
    cout << "F(" << n << ")=" << fib << endl;
    return 0;
}