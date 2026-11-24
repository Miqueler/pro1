#include <iostream>
using namespace std;

int max_digit(int n)
{
    int max = 0;
    while (n != 0)
    {
        if (n % 10 > max)
            max = n % 10;
        n /= 10;
    }
    return max;
}

int engreixa(int x)
{
    if (x / 10 == 0)
        return x;

    else
        return engreixa(x / 10) * 10 + max_digit(x);
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << engreixa(n) << endl;
    }
}