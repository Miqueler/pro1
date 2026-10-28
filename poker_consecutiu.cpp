#include <iostream>
using namespace std;

int main()
{
    int n, counter = 1;
    char current_card, last_card;
    bool is_n_poker = false;

    cin >> n;
    cin >> last_card;
    if (n == 1)
    {
        is_n_poker = true;
    }
    while (cin >> current_card and not is_n_poker)
    {

        if (current_card == last_card)
        {
            ++counter;
        }
        else
        {
            counter = 1;
        }
        last_card = current_card;
        if (counter == n)
        {
            is_n_poker = true;
        }
    }
    if (is_n_poker)
    {
        cout << n << "-Poker de " << last_card << '!' << endl;
    }
    else
    {
        cout << "No hi ha " << n << "-Poker" << endl;
    }
}
