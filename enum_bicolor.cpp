#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 0; j < n - 1; j++)
        {
            for (int s = 0; s < n - 1; s++)
            {
                if (i != j)
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (k < s)
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