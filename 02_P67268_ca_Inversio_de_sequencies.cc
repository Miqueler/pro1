// Inversió de seqüències
// jutge://problems/P67268_ca
// P67268_ca:std:none:G++17
// Created on 11/24/2026, 6:14:38 PM by Miquel Parisi Saura

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n != 0)
        {
            vector<int> v(n);

            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
            }
            for (int i = n - 1; i > 0; i--)
            {
                cout << v[i] << ' ';
            }
            cout << v[0];
        }
        cout << endl;
    }
}
