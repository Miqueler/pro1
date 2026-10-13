#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
    int width, height;
    while (cin >> height >> width)
    {

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                // Genera la diagonal cap a endevant
                if (i % width <= width / 2)
                {
                    if (j - (i % width) < width / 2 && j >= i % width)
                    {
                        cout << '#';
                    }
                    else
                    {
                        cout << '*';
                    }
                }
                // Genera la diagonal cap a enderrere
                else
                {
                    if (j >= (width / 2) - (i % (width / 2)) && j < width - (i % (width / 2)))
                    {
                        cout << '#';
                    }
                    else
                    {
                        cout << '*';
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}