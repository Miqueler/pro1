#include <iostream>
using namespace std;

/**
 * @pre  n >= 0
 * @post retorna cert si n és bicolor, fals en cas contrari
 */
bool is_bicolor(int n)
{
    int first_num, second_num = -1, current_num;
    bool have_second_num = false;
    first_num = n % 10;
    n /= 10;
    while (n)
    {
        current_num = n % 10;
        n /= 10;
        if (current_num != first_num and not have_second_num)
        {
            second_num = current_num;
            have_second_num = true;
        }
        else if (have_second_num and second_num != current_num)
        {
            return false;
        }
    }
    if (second_num != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << is_bicolor(n) << endl;
}