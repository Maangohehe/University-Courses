#include <iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i;
        j--;
        while (key < arr[j] && j > -1)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
}

int main(void)
{
    int *arr = nullptr, size;
    cout << "Input size of the array: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Input elements: ";
        cin >> arr[i];
    }
    cout << "Before sorting: \n";
    printArr(arr, size);
    insertionSort(arr, size);
    cout << "After sorting: \n";
    printArr(arr, size);
}