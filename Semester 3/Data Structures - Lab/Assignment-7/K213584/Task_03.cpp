#include <iostream>
#include <string.h>
using namespace std;

int interpol_search(int *arr, int size, int key)
{
    int low = 0;
    while(key >= arr[low] && key <= arr[size] && low <= size)
    {
        int pos = low + ((key-arr[low])*((size-1)-low))/(arr[size-1] - arr[low]);
        if (arr[pos] == key)
            return pos;
        else if (arr[pos] < key)
        {
            low = pos + 1;
        }
        else
        {
            size = pos - 1;
        }
    }
    return 0;
}

int binary_search(int *arr, int size, int key)
{
    int mid = size / 2;
    if(arr[mid] > key)
    {
        for (int i = mid; i > -1; i--)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
    }
    else if(arr[mid] < key)
    {
        for (int i = mid; i < size; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
    }
    return 0;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        cout << "Usage: <binary,interpolation>\n";
    }
    int *arr = nullptr, size;
    cout << "Input size of array: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element" << i + 1 << ": ";
        cin >> arr[i];
    }
    int key;
    cout << "Element to find: ";
    cin >> key;
    if (!strcmp(argv[1], "binary"))
    {
       cout << "Element " << key << " found at index " << binary_search(arr, size-1, key) << " using interpolation search" << endl;
    }
    else if(!strcmp(argv[1],"interpolation"))
    {
       cout << "Element " << key << " found at index " << interpol_search(arr, size-1, key) << " using interpolation search" << endl;
    }
    else
    {
        cout << "Invalid args\n";
    }
}