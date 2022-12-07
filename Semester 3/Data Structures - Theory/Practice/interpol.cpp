#include <iostream>
#include <algorithm>
using namespace std;
int interpol_search(int arr[], int key, int size)
{
    int low = 0, high = size - 1;
    int index = ((key - arr[low]) * (high - low) / (arr[high] - arr[low])); //we use the mighty interpol search formula
    if (arr[index] == key)
        return index;
    else if (arr[index] < key)
    {
        interpol_search(arr, key, index-1);
    }
    else
    {
        interpol_search(arr, key, index+1);
    }
    return index;
}
int main(void)
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
    int key;
    cout << "Input element: ";
    cin >> key;
    int index = interpol_search(arr, key, size);

}