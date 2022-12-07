#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high)
{
    int i = low - 1, pivot = high;
    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[high]);
    return i;
}

void q_sort(int arr[], int low, int high)
{
    if (high <= low) return;    
    int parti = partition(arr, low, high);
    q_sort(arr, low, parti-1);
    q_sort(arr, parti + 1, high);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int *arr = nullptr, size;
    cout << "Input the size of the array: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Before sorting" << endl;
    print(arr, size);
    cout << "After sorting" << endl;
    q_sort(arr, 0, size - 1);
    print(arr, size);
}