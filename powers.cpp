#include <iostream>
using namespace std;

int main()
{
    int base, power;
    int total;
    while (cin >> base >> power)
    {
        total = 1;
        if (base == power && base == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < power; i++)
            {
                total *= base;
            }
            cout << total << endl;
        }
    }
}