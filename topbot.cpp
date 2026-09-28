#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    for (int i = a; i >= b; i--)
    {
        cout << i << endl;
    }
}