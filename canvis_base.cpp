#include <iostream>
#include <string>
using namespace std;

void to_base(int n, int base)
{
    if (n < base)
    {
        cout << n;
    }
    else
    {
        to_base(n / base, base);
        cout << n % base;
    }
}

void to_hex(int n)
{
    if (n < 10)
    {
        cout << n;
    }
    else if (n < 16)
    {
        cout << char('A' + (n - 10));
    }
    else
    {

        to_hex(n / 16);
        n = n % 16;
        if (n < 10)
        {
            cout << n;
        }
        else if (n < 16)
        {
            cout << char('A' + (n - 10));
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << n << " = ";
        to_base(n, 2);
        cout << ", ";
        to_base(n, 8);
        cout << ", ";
        to_hex(n);
        cout << endl;
    }
}