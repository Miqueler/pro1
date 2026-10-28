#include <iostream>
using namespace std;

int main()
{
    int max_p = 0, max_i = 0, current_count = 1, current_n;
    bool is_eaven;
    cin >> current_n;
    if (current_n % 2 == 0)
    {
        is_eaven = true;
    }
    else
    {
        is_eaven = false;
    }

    while (cin >> current_n)
    {
        if (current_n % 2 == 0)
        {
            if (is_eaven)
            {
                current_count++;
            }
            else
            {
                is_eaven = true;
                if (max_i < current_count)
                {
                    max_i = current_count;
                }
                current_count = 1;
            }
        }
        else
        {
            if (!is_eaven)
            {
                current_count++;
            }
            else
            {
                is_eaven = false;
                if (max_p < current_count)
                {
                    max_p = current_count;
                }
                current_count = 1;
            }
        }
    }
    if (is_eaven and max_p < current_count)
    {
        max_p = current_count;
    }
    else if (not is_eaven and max_i < current_count)
    {
        max_i = current_count;
    }
    cout << "PARELL: " << max_p << endl;
    cout << "SENAR: " << max_i << endl;
}