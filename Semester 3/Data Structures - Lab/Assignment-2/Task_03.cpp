#include <iostream>
#include <limits>
using namespace std;

void MaxMin(int arr[], int size)
{
    int low_index = 0, high_index = size - 1, temp[size];
    bool alter = true;

    for (int i = 0; i < size; i++)
        temp[i] = arr[i];
    for (int i = 0; i < size; i++)
    {
        if (alter)
        {
            arr[i] = temp[high_index--];
        }
        else
        {
            arr[i] = temp[low_index++];
        }
        alter = !alter;
    }
}

int main(void)
{
    int *arr = nullptr, size;
    cout << "Input size of array: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
    MaxMin(arr, size);
    cout << "Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i == size - 1)
        {
            break;
        }
        cout << ", ";
    }
    cout << endl;
    delete[] arr;
    return 0;
} 