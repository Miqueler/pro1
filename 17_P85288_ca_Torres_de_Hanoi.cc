// Torres de Hanoi
// jutge://problems/P85288_ca
// P85288_ca:std:none:G++17
// Created on 11/24/2026, 6:02:12 PM by Miquel Parisi Saura

#include <iostream>
using namespace std;

void hanoi(int n, char sortida, char auxiliar, char arribada)
{
    if (n == 1)
    {
        cout << sortida << " => " << arribada << endl;
    }
    else
    {
        hanoi(n - 1, sortida, arribada, auxiliar);
        cout << sortida << " => " << arribada << endl;
        hanoi(n - 1, auxiliar, sortida, arribada);
    }
}

int main()
{
    int n;
    cin >> n;

    hanoi(n, 'A', 'B', 'C');
}
