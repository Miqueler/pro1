#include <iostream>
using namespace std;

int main()
{
    int current, last, next;
    bool flag = false;
    cin >> last;
    cin >> current;
    while (cin >> next && !flag)
    {
        if (next != 0)
        {
            if (current > last && next < current)
            {
                if (current > 3143)
                {
                    flag = true;
                }
            }
            last = current;
            current = next;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}