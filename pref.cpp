#include <iostream>
using namespace std;

bool is_num(char c)
{
    if (c <= '9' && c >= '0')
    {
        return true;
    }
    return false;
}

int operation(int n1, int n2, char op)
{
    if (op == '+')
        return n1 + n2;
    if (op == '-')
        return n1 - n2;
    if (op == '*')
        return n1 * n2;
    return 0;
}

int calc_exp()
{
    char c;
    char op;
    int n1, n2;
    cin >> c;
    if (is_num(c))
        return c - '0';
    op = c;
    n1 = calc_exp();
    n2 = calc_exp();

    return operation(n1, n2, op);
}

int main()
{
    cout << calc_exp() << endl;
}