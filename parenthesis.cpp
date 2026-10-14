#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    char c;
    bool flag = false;
    int counter = 0;
    while (cin >> c && !flag)
    {
        if (c == '(')
            counter++;
        else
            counter--;

        if (counter < 0)
        {
            flag = true;
        }
    }
    if (counter != 0 || flag)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}