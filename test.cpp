#include <iostream>
using namespace std;

int main()
{
    int r, w;
    cin >> r >> w;
    int sum = 0;
    char num;
    int i = 0;

    while (cin >> num)
    {
        if ((i % w + (r - i / w)) % 2 == 1)
        {
            sum += int(num - '0');
        }
        i++;
    }
    cout << sum << endl;
}