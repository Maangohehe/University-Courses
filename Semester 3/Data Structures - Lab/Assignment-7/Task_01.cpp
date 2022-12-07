/*
    Roll Number: 21K-3584
    Task_01
    Completed on WSL Ubuntu on vscode
*/
#include <iostream>
using namespace std;
void q_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
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

void q_sort(int arr[], int low, int high)
{
    if (high <= low)
        return;
    int pivot = partition(arr, low, high);
    q_sort(arr, low, pivot - 1);
    q_sort(arr, pivot + 1, high);
}

int partition(int arr[], int low, int high)
{
    int mid = (low+high)/2, left = low, right = high; // set i before j
    int pivot = arr[mid];                    // selects mid for pivot
    for (left, right; right > left; )
    {
        if (arr[left] >= pivot && arr[right] <= pivot)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
        if(arr[right] >= pivot)
        {
            right--;
        }
        if(arr[left] <= pivot)
        {
            left++;
        }
    }
    return right;
}