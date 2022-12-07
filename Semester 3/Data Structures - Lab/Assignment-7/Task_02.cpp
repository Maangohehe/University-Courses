#include <iostream>
#include <cstring>
using namespace std;

int get_max(int *arr, int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void count(int *arr, int size, int decimal)
{
    int bins[10];
    int sorted[size];
    memset(bins, 0, sizeof(bins));
    //count the numbers
    for (int i = 0; i < size; i++)
    {
        bins[(arr[i] / decimal ) % 10]++;
    }
    //calculate cumultative count
    for (int i = 1; i < 10; i++)
    {
        bins[i] += bins[i - 1];
    }
    //sort
    for (int i = size-1; i >= 0 ; i--)
    {
        sorted[bins[(arr[i] / decimal) % 10] - 1] = arr[i];
        bins[(arr[i] / decimal) % 10]--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = sorted[i];
    }
}

void radix_sort(int *arr, int size)
{
    int max = get_max(arr, size);
    for (int i = 1; max / i > 0; i = i * 10)
    {
        count(arr, size, i);
    }
}


void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
}
int main(void)
{
    int *arr = nullptr, size;
    cout << "Size of array: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Before sorting\n";
    print(arr, size);
    radix_sort(arr, size);
    cout << "After sorting\n";
    print(arr, size);
}