#include <iostream>
#include <algorithm>
using namespace std;
//lets modify the program a little, sort according to sum of digits
int sumOfDigits(int x)
{
    int sum = 0;
    while (x != 0)
    {
        int rem = x % 10;
        sum += rem;
        x = x/10;
    }
    return sum;
}
void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int sum_of_digits = sumOfDigits(arr[i]);
        int j = i;
        j--;
        while (sum_of_digits < sumOfDigits(arr[j]) && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "Before sorting" << endl;
    print(arr, size);
    cout << "After sorting" << endl;
    insertion_sort(arr, size);
    print(arr, size);
}