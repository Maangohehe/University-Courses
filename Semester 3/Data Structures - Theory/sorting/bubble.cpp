#include <iostream>
using namespace std;

int* sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    return arr;
}

int main(void)
{
    int arr[4] = {4, 5, 3, 2};
    int *new_arr = sort(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << new_arr[i] << " ";
    }
    printf("\n");

}