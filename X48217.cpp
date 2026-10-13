#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    // Primer for pels nombres d (primer i últim)
    for (int i = 1; i < 10; i++)
    {
        // Segon for pels nombre e (els del mitj)
        for (int k = 0; k < 10; k++)
        {
            // d ha de ser diferent a k
            if (i != k)
            {
                // Tot i haver-hi 3 for loops indentats es O(n) ja que dos d'ells son un número constant d'iteracions, es a dir, no depenen de n
                for (int j = 0; j < n; j++)
                {
                    if (j == 0 || j == n - 1)
                    {
                        cout << i;
                    }
                    else
                    {
                        cout << k;
                    }
                }
                cout << endl;
            }
        }
    }
}