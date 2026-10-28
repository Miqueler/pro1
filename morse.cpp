#include <iostream>
using namespace std;

int main()
{
    char current_in;
    int current_num = 0, current_sum, count = 0;
    while (cin >> current_in)
    {
        if (current_in == '*')
        {
            cout << char(current_num);
            current_num = 0;
            count = 0;
        }
        else
        {
            if (current_in == '1')
            {
                current_sum = 1;
                for (int i = 0; i < count; i++)
                {
                    current_sum *= 2;
                }
                current_num += current_sum;
            }
            count++;
        }
    }
    cout << endl;
}