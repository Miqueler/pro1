#include <iostream>
#include <cmath>
using namespace std;

int diferencia(int x, int y)
{
    int diff = abs(x % 10 - y % 10);
    if (x / 10 != 0 or y / 10 != 0)
    {
        diff += diferencia(x / 10, y / 10);
    }
    return diff;
}

int main()
{
    int n1, n2;

    while (cin >> n1 >> n2)
    {
        cout << diferencia(n1, n2) << endl;
    }
}