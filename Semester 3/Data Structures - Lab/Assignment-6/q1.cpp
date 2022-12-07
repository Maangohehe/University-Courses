#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void printArr(string *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
}

void bubbleSort(string *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                string temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            } 
        }
    }
}
int main(void)
{
    string *arr;
    int size;
    cout << "Input size of array: ";
    cin >> size;
    arr = new string[size];
    for (int i = 0 ; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array before sorting: \n";
    printArr(arr, size);
    bubbleSort(arr, size);
    cout << "Array after sorting: \n";
    printArr(arr, size);
    return 0;
}