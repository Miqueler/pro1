#include <iostream>
using namespace std;

int main()
{
    int n, biggest_div, minus;
    while (cin >> n)
    {
        cout << "divisors de " << n << ": 1";
        if (n != 1)
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    cout << ' ' << i;
                    biggest_div = i;
                }
            }
            if (biggest_div * biggest_div == n)
            {
                minus = 1;
            }
            else
            {
                minus = 0;
            }
            for (int i = biggest_div - minus; i > 0; i--)
            {
                if (n % i == 0)
                {
                    cout << ' ' << n / i;
                }
            }
        }
        cout << endl;
    }
}