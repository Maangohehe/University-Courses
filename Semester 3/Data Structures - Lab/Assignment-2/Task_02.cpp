#include <iostream>
using namespace std;

void sort(int original_arr[], int *ascend, int* descend)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - 1; j++)
        {
            if (original_arr[j] > original_arr[j + 1])
            {
                
            }
        }
    }
}

void print(int original[], int *asc, int *desc)
{
    cout << "Elements in ascending order: ";
    for(int i = 0; i < 10; i++)
    {
        cout << asc[i];
        if (i == 10 - 1)
        {
            break;
        }
        cout << ", ";
    }
    cout << endl;

    cout << "Original array: ";
    for(int i = 0; i < 10; i++)
    {
        cout << original[i];
        if (i == 10 - 1)
        {
            break;
        }
        cout << ", ";
    }
    cout << endl;
}

int main(void)
{
    int arr[10], *ascend = new int[10], *desc = new int[10];
    for(int i = 0; i < 10; i++)
    {
        cout << "Element [" << i+1 << "]: ";
        cin >> arr[i];
    }
    sort(arr, ascend, desc);
    print(arr, ascend, desc);
    delete[] ascend;
    delete[] desc;
}