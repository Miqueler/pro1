#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char num;
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        while (cin >> num)
        {
            sum += int(num - '0');
        }
    }
    cout << sum << endl;
}