#include <iostream>
using namespace std;

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

int calc_expression()
{
    char c;
    char op;
    cin >> c;
    if (c != '(')
    {
        return c - '0';
    }

    int a, b;
    a = calc_expression();
    cin >> op;
    b = calc_expression();
    cin >> c;

    return (operation(a, b, op));
}

int main()
{
    cout << calc_expression() << endl;
}