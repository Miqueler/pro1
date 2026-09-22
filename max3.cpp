#include <iostream>
using namespace std;

/**
 * @pre c1, c2, c3 in {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Returns "Trio of Aces!", "Trio", "Pair", or
 *       "All cards different" according to c1, c2, and c3.
 */
string poker_hand(char c1, char c2, char c3);

int main()
{
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    cout << poker_hand(c1, c2, c3);
}
string poker_hand(char c1, char c2, char c3)
{
    if (c1 == c2 && c2 == c3)
    {
        if (c1 == 'A')
        {
            return "Trio of Aces!\n";
        }
        return "Trio\n";
    }
    if (c1 == c2 || c2 == c3 || c1 == c3)
    {
        return "Pair\n";
    }
    return "All cards different\n";
}