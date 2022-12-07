#include <iostream>
using namespace std;

int main()
{
    unsigned long long int **arr = new unsigned long long int*[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new unsigned long long int[5];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 100000000000000;
        }
    }
    for (int i = 0; i < 5; i++)
        delete[] arr[i];
    delete[] arr;
    return 0;
}