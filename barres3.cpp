#include <iostream>
#include <string>
using namespace std;

string barres(int n)
{
    string current = "";
    if (n == 1)
    {
        return "*\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            current += '*';
        }
        current += '\n';
        return barres(n - 1) + barres(n - 1) + current;
    }
}
int main()
{
    int n;
    string out;
    cin >> n;
    out = barres(n);
    cout << out;
}