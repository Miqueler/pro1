#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int main()
{
    int n, girth, side, start_spacing;
    string row;

    while (cin >> n)
    {
        girth = 1 + (n / 2);
        side = n + 2 * (4 * girth - 1);
        start_spacing = (side - n) / 2;

        for (int i = 0; i < 4 * girth; i++)
        {
            // Afegim els espais inicials
            for (int j = 0; j < start_spacing - i; j++)
            {
                row += ' ';
            }
            // Escribim la part superior de la A
            if (i < girth)
            {
                for (int j = 0; j < n + 2 * i; j++)
                {
                    row += 'A';
                }
            }
            // Escribim la part mitja de la A
            else if (i < 2 * girth)
            {
                for (int j = 0; j < n; j++)
                {
                    row += 'A';
                }
                for (int j = 0; j < (side - 2 * n - 2 * (start_spacing - i)); j++)
                {
                    row += ' ';
                }
                for (int j = 0; j < n; j++)
                {
                    row += 'A';
                }
            }
            // Escribim la meitat baixa de la A
            else if (i < 3 * girth)
            {
                for (int j = 0; j < side - 2 * (start_spacing - i); j++)
                {
                    row += 'A';
                }
            }
            // Escribim la part final de la A
            else
            {
                for (int j = 0; j < n; j++)
                {
                    row += 'A';
                }
                for (int j = 0; j < (side - 2 * n - 2 * (start_spacing - i)); j++)
                {
                    row += ' ';
                }
                for (int j = 0; j < n; j++)
                {
                    row += 'A';
                }
            }
            cout << row << endl;
            row = "";
        }
        cout << endl;
    }
}