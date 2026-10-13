#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    char letter = ' ';
    int counter = 0;
    while (letter != '.' && counter != 5)
    {
        cin >> letter;
        // Comprovem si la lletra es de la seqüencia hello i fem servir el counter per a imposar l'ordre. Es reseteja si comença una nova seqüencia o es trenca la actual.
        if (letter == 'h')
        {
            counter = 1;
        }
        else if (letter == 'e' && counter == 1)
        {
            counter = 2;
        }
        else if (letter == 'l' && counter == 2)
        {
            counter = 3;
        }
        else if (letter == 'l' && counter == 3)
        {
            counter = 4;
        }
        else if (letter == 'o' && counter == 4)
        {
            counter = 5;
            cout << "hello" << endl;
        }
        else
        {
            counter = 0;
        }
    }
    if (counter != 5)
    {
        cout << "bye" << endl;
    }
}