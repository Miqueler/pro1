#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int div = 100;
    cin >> n;
    sum += n % 10;
    for (int i = 1; n / div != 0; i++)
    {
        sum += (n / div) % 10;
        div *= 100;
    }
    if (sum % 2 == 0)
        cout << n << " IS COOL" << endl;

    else
        cout << n << " IS NOT COOL" << endl;
}