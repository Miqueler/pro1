#include <iostream>
using namespace std;

int suma_digits(int x)
{
    if (x / 10 == 0)
        return x;
    else
        return x % 10 + suma_digits(x / 10);
}

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i += 1)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool es_primer_perfecte(int n)
{
    if (!is_prime(n) || n == 0)
        return false;
    else if (n / 10 == 0)
        return true;
    else
        return es_primer_perfecte(suma_digits(n));
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << es_primer_perfecte(n) << endl;
    }
}