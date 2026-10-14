#include <iostream>
using namespace std;

/**
 * @brief Passa un valor en base 64 a un caràcter.
 * @pre Precondició: `d` >= 0 i `d` <= 63
 */
char base64_to_char(int d)
{
    if (d < 26)
    {
        return char(int('A') + d);
    }
    else if (d < 52)
    {
        return char(int('a') + d - 26);
    }
    else if (d < 62)
    {
        return char(int('0') + d - 52);
    }
    else if (d == 62)
    {
        return '+';
    }
    else
    {
        return '/';
    }
}

int main()
{
    int n;
    cin >> n;
    cout << base64_to_char(n) << endl;
}