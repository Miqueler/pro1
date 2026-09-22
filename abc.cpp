#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    string ord;
    cin >> a >> b >> c;
    cin >> ord;
    int ord_ind[3] = {int(ord[0] - 'A'), int(ord[1] - 'A'), int(ord[2] - 'A')};
    int max[3];
    if (a > b)
    {
        if (c > a)
        {
            // c, a, b
            max[0] = c;
            max[1] = a;
            max[2] = b;

            cout << max[ord[0]] << ' ' << max[ord[1]] << ' ' << max[ord[2]] << endl;
        }
        else if (c > b)
        {
            // a, c, b
            max[0] = a;
            max[1] = c;
            max[2] = b;

            cout << max[ord[0]] << ' ' << max[ord[1]] << ' ' << max[ord[2]] << endl;
        }
        else
        {
            // a, b, c
            max[0] = a;
            max[1] = b;
            max[2] = c;

            cout << max[ord[0]] << ' ' << max[ord[1]] << ' ' << max[ord[2]] << endl;
        }
    }
    else if (c > b)
    {
        // c, b, a
        max[0] = c;
        max[1] = b;
        max[2] = a;
        cout << c << b << a << endl;
        cout << max[ord[0]] << ' ' << max[ord[1]] << ' ' << max[ord[2]] << endl;
    }
    else if (c > a)
    {
        // b, c, a
        max[0] = b;
        max[1] = c;
        max[2] = a;

        cout << max[ord[0]] << ' ' << max[ord[1]] << ' ' << max[ord[2]] << endl;
    }
    else
    {
        // b, a, c
        max[0] = b;
        max[1] = a;
        max[2] = c;

        cout << max[ord[0]] << ' ' << max[ord[1]] << ' ' << max[ord[2]] << endl;
    }
}