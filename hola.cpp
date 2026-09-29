#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;
    while (cin >> word)
    {
        if (word == "hello")
            count++;
    }
    cout << count << endl;
}