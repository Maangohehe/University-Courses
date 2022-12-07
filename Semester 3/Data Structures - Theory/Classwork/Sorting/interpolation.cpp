#include <iostream>
#include <cmath>
using namespace std;

int interpolation(int arr[], int key, int low, int high)
{
    int prediction = low + (((key - arr[low]) * (high - low)) / (arr[high] - arr[low]));
    int result;
    if (arr[prediction] == key)
        return prediction;
    if (arr[prediction] < key)
        result = interpolation(arr, key, low+2, high);
    if (arr[prediction] > key)
        result = interpolation(arr, key, low-2, high);
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
    int mid = interpolation(arr, key, 0, n);
    cout << "Element Found at index: " << mid << endl;
    
    delete[] arr;
}