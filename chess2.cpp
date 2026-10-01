#include <iostream>
using namespace std;

int main()
{
    int r, w;
    cin >> r >> w;
    int sum = 0;
    char num;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> num;
            if ((i + j) % 2 == 0)
            {
                sum += int(num - '0');
            }
        }
    }
    cout << sum << endl;
}
