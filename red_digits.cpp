#include <iostream>
using namespace std;

int suma_digits(int x)
{
    if (x / 10 == 0)
        return x;
    else
        return x % 10 + suma_digits(x / 10);
}
int reduccio_digits(int x)
{
    while (x / 10 != 0)
        x = suma_digits(x);
    return x;
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << reduccio_digits(n) << endl;
    }
}