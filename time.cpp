#include <iostream>
using namespace std;

int main(void)
{
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    d += y * 365;
    h += d * 24;
    m += h * 60;
    s += m * 60;
    cout << s << endl;
}