#include <iostream>
using namespace std;

int main()
{
    char sentence;
    int counter = 0;
    while (cin >> sentence)
    {
        if (sentence == 'a')
            counter++;
    }
    cout << counter << endl;
}