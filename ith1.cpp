#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    int pos, current, irr;
    cin >> pos;
    for (int i = 1; i <= pos; i++)
    {
        cin >> current;
    }
    cout << "At the position " << pos << " there is a(n) " << current << '.' << endl;
}