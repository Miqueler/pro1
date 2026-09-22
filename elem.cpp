#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;
    if (a == b)
        cout << '-' << endl;
    else if ((b - a > 0 || b - a == -21) && b - a != 21)
        cout << '1' << endl;
    else
        cout << '2' << endl;
}