#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y)
{
    bool is_leap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));

    if (m < 1 || m > 12)
        return false;
    if (d < 1 || d > 31)
        return false;

    if (m == 2)
        return d < 29 || (is_leap && d == 29);

    bool has_31 = (m % 2 == 1) == (m <= 7);
    return has_31 || d <= 30;
}

int main()
{
    cout << is_valid_date(29, 2, 3000) << endl; // 0 (3000 is not leap)
    cout << is_valid_date(29, 2, 2000) << endl; // 1 (2000 is leap)
    cout << is_valid_date(31, 8, 2024) << endl; // 1 (August has 31)
    cout << is_valid_date(31, 9, 2024) << endl; // 0 (September has 30)
    cout << is_valid_date(0, 1, 2024) << endl;  // 0 (no day 0)
}