#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string fraction;
    char current_char;
    double pow_10 = 1;
    int max, numerador, current_num;
    long division;
    current_num = 0;

    while (cin >> current_char)
    {
        if (current_char == ' ')
        {

            division = numerador / current_num;

            if (division > max)
            {
                max = division;
                // S'ha de generar la fracció reduïda de la fraccio original (gcd -> num/gcd den/gcd -> construeixes string amb moduls)
                //  Es pot calcular cada cop que es fa un nou max o al final convertint decimal a fracció tot i que hi ha errors de precisio
                if (gcd(numerador, current_num) == 1)
                    fraction = "";
            }

            current_num = 0;
            pow_10 = 1;
        }
        else if (current_char == '/')
        {
            numerador = current_num;
            current_num = 0;
            pow_10 = 1;
        }
        else
        {
            current_num *= pow_10;
            current_num += int('0' - int(current_char));
        }
    }
}