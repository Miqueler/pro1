#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    int n, n_copy, pow_10;
    long total;
    while (cin >> n)
    {
        total = 0;
        n_copy = n;
        pow_10 = 1;
        // Afegim a la dreta tots els nombres parells excloent el 0 ja que compleix el criteri de paritat però no l'acceptem al problema
        while (n != 0)
        {
            if ((n % 10) % 2 == 0 && n % 10 != 0)
            {
                total += (n % 10) * pow_10;
                pow_10 *= 10;
            }
            n /= 10;
        }
        // Afegim a la esquerra dels parells tots els nombres senars
        while (n_copy != 0)
        {
            if ((n_copy % 10) % 2 == 1)
            {
                total += (n_copy % 10) * pow_10;
                pow_10 *= 10;
            }
            n_copy /= 10;
        }
        cout << total << ' ' << 2 * total << endl;
    }
}