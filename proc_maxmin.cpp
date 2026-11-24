#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int &maxim, int &minim)
{
    if (n < 10)
    {
        maxim = n;
        minim = n;
    }
    else
        digit_maxim_i_minim(n / 10, maxim, minim);
    int d = n % 10;
    if (maxim < d)
        maxim = d;
    if (minim > d)
        minim = d;
}

int main()
{
    int maxim, minim, n;

    cin >> n;
    digit_maxim_i_minim(n, maxim, minim);
    cout << maxim << ' ' << minim << endl;
}