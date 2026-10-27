#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    double pow_10, word_num, last_word_num;
    last_word_num = 0;
    char current;
    bool flag = false;
    bool flag2 = false;
    int counter = 0;
    while (cin >> n && !flag2)
    {

        pow_10 = 1;
        word_num = 0;
        counter++;
        for (int i = 0; i < n && !flag; i++)
        {
            cin >> current;
            word_num += pow_10 * int(current);
        }
        if (word_num > last_word_num)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "La primera linia ordenada creixentment es la" << counter << endl;
    }
}