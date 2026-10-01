#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    int n;
    string shape;
    double w, h;
    double r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> shape;
        if (shape == "rectangle")
        {
            cin >> w >> h;
            cout << w * h << endl;
        }
        else
        {
            cin >> r;
            cout << M_PI * r * r << endl;
        }
    }
}