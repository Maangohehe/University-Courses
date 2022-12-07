#include <iostream>
#define N 3
using namespace std;
int fact(int indice)
{
    if (indice == 1 || indice == 0)
        return indice;
    int fact = indice;
    while (indice != 1)
    {
        indice--;
        fact = fact * indice;
    }
    return indice;
}

int main(void)
{
    int arr[N] = {2, 3, 4};
    string keypad[4][3] = {
        {"1", "ABC", "DEF"},
        {"GHI", "JKL", "MNO"},
        {"PQRS", "TUV", "XYZ"}
    };
    int permutation = 0;
    int counter = 0;
    // for (int i = 0; i < N; i++)
    // {
        for (int j = 0; j < N; j++)
        {
            counter = 0;
            if (arr[j] <= 3)
            {
                permutation = keypad[0][arr[j]-1].length();
            }
            else if (arr[j] > 3 && arr[j] <= 6)
            {
                permutation = keypad[0][arr[j]-1].length();
            }
            for (int k = 0; k < permutation; k++)
            {
                if (arr[counter] <= 3 && counter < N)
                {
                    cout << keypad[0][arr[counter]-1][j] << " ";
                    counter++;
                }
                else if (arr[counter] > 3 && arr[counter] <= 6 && counter < N)
                {
                    cout << keypad[1][arr[counter]-4][j] << " ";
                    counter++;
                }
            }
            cout << "\n";
        }
    // }
}