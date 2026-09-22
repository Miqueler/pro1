#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    double total;
    for (int i = 1; i <= n; i++)
    {
        total += 1.0 / i;
    }
    cout << total << endl;
}