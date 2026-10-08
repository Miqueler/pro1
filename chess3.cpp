#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    char num;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (i == j || n - j == i + 1)
            {
                sum += int(num - '0');
            }
        }
    }
    cout << sum << endl;
}
