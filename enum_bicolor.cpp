#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i != j)
            {
                for (int k = 0; k < n - 1; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (l <= k)
                        {
                            cout << i;
                        }
                        else
                        {
                            cout << j;
                        }
                    }
                    cout << endl;
                }
            }
        }
    }
}