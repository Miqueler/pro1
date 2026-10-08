#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    double angle;
    while (cin >> angle)
    {
        angle *= M_PI / 180;
        cout << sin(angle) << ' ' << cos(angle) << endl;
    }
}