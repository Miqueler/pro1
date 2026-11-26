// Igual a l'últim
// jutge://problems/P14130_ca
// P14130_ca:std:none:G++17
// Created on 11/24/2026, 6:02:42 PM by Miquel Parisi Saura

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int c = -1;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (l[i] == l[n - 1])
            c++;
    }
    cout << c << endl;
}
