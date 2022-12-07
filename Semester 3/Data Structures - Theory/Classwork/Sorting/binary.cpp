#include <iostream>
#include <cmath>
using namespace std;

int binary_search(int arr[], int key, int low, int high)
{
    int mid = floor((low + high)/2);
    int result;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] < key)
        result = binary_search(arr, key, low+2, high);
    if (arr[mid] > key)
        result = binary_search(arr, key, low-2, high);
    return result;
}

int main()
{
    int* arr = nullptr, n;
    cout << "Elements in array: ";
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int key;
    cout << "Element to find: ";
    cin >> key;
    int mid = binary_search(arr, key, 0, n);
    cout << "Element Found at index: " << mid << endl;
    
    delete[] arr;
}