#include <iostream>
using namespace std;

int main(void)
{
    int **arr = nullptr, size;
    cin >> size;
    int arr_size[size];
    arr = new int*[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Size of row" << i + 1 << ": ";
        cin >> arr_size[i];
        arr[i] = new int[arr_size[i]];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr_size[i]; j++)
        {
            *(*(arr + i) + j) = 9898977;
        }
    }
    for (int i = 0; i < size; i++)
    {
        delete[] *(arr + i);
    }
    delete[] arr;
}