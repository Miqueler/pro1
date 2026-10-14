#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int n, max, current;
    while (cin >> n)
    {
        cin >> current;
        max = current;
        for (int i = 1; i < n; i++)
        {
            cin >> current;
            if (current > max)
            {
                max = current;
            }
        }
        cout << max << endl;
    }
}