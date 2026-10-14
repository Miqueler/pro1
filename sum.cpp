#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    int n, current, sum;
    cin >> n;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        sum += current;
    }
    cout << sum << endl;
}