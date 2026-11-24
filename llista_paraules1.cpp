#include <iostream>
#include <string>
using namespace std;

int reverse(int n)
{
    string paraula;
    int total;
    if (cin >> paraula)
    {

        total = reverse(n + 1);
        if (n <= (total) / 2)
        {
            cout << paraula << endl;
        }
        return total;
    }
    else
    {
        return n - 1;
    }
}

int main()
{
    reverse(1);
}