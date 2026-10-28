#include <iostream>
using namespace std;

int max_prime_factor(int n)
{
    int max_div = 2;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            max_div = i;
        }
    }
    if (max_div > n)
    {
        return max_div;
    }
    else
    {
        return n;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << max_prime_factor(n) << endl;
}