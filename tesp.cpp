#include <iostream>
using namespace std;

int main()
{
    char c;
    while (true)
    {
        cin >> c;
        cout << int(c - '0') << endl;
    }
}