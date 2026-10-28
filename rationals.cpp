#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    char c;
    int numerador, denominador, pow_10_num = 1, pow_10_den = 1;
    float max = 0;
    string max_str;

    bool is_num = true;
    while (cin >> c)
    {
        if (c == '/')
        {
            is_num = false;
            pow_10_num = 1;
            pow_10_den = 1;
        }
        else if (c == ' ')
        {
            is_num = true;

            if (numerador / float(denominador) > max)
            {
                numerador = numerador / gcd(numerador, denominador);
                denominador = denominador / gcd(numerador, denominador);
                max = numerador / denominador;
                while (pow_10_num != 0)
                {
                    max_str += char(numerador)
                }
                pow_10_num = 1;
                pow_10_den = 1;
            }
        }
        else
        {
            if (is_num)
            {
                numerador += int(c - '0') * pow_10_num;
                pow_10_num *= 10;
            }
            else if (!is_num)
            {
                denominador += int(c - '0') * pow_10_den;
                pow_10_den *= 10;
            }
        }
    }
}