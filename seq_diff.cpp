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
    int last, current, diff, last_diff = -1;
    bool es_creixent = true;
    cin >> last;
    while (cin >> current and es_creixent)
    {
        diff = diferencia(current, last);
        if (diff < last_diff)
        {
            es_creixent = false;
        }
        last_diff = diff;
        last = current;
    }
    if (es_creixent)
    {
        cout << "SI" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}