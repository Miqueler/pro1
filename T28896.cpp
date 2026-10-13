#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    int current_n, next_n, counter, first_num;
    bool mid_flag = false;
    bool flag = false;

    cin >> current_n;
    first_num = current_n;
    counter = 0;
    while (cin >> next_n && !flag)
    {
        flag = true;
        // Comprovem si hem passat el pivot del mitj
        if (!mid_flag)
        {
            if (next_n >= current_n)
            {
                counter++;
                flag = false;
            }
            // Aqui arribem al mitj
            else if (next_n < current_n)
            {
                mid_flag = true;
                counter--;
                flag = false;
            }
        }
        // Comprovem les condicions passat el mitj
        else if (next_n <= current_n)
        {
            counter--;
            flag = false;
        }
        if (counter < 0 || next_n < first_num)
        {
            flag = true;
        }

        current_n = next_n;
    }
    if (first_num != next_n)
    {
        flag = true;
    }
    if (flag || counter != 0)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "si" << endl;
    }
}