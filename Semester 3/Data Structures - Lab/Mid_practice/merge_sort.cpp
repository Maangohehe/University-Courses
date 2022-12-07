#include <iostream>
using namespace std;

void merge_sort(int *arr, int low, int high);
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
}
int main(void)
{
    int *arr = nullptr, size = 0;
    cout << "Input size of array: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Before sorting\n";
    print(arr, size);
    cout << "After sorting\n";
    merge_sort(arr, 0, size - 1);
    print(arr, size);
}

void merge(int *arr, int low, int mid, int high)
{
  int i, j, k, temp[50];
  i = low, j = mid + 1, k = low;
  while (i <= mid && j <= high)
  {
    if (arr[i] < arr[j])
    {
      temp[k] = arr[i];
      k++; i++;
    }
    else
    {
      temp[k] = arr[j];
      j++; k++;
    }
  }
  while (i <= mid)
  {
    temp[k] = arr[i];
    k++; i++;
  }
  while (j <= high)
  {
    temp[k] = arr[j];
    k++; j++;
  }
  for (int z = 0; z < k; z++)
  {
    arr[z] = temp[z];
  }
}
void merge_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        merge_sort(arr, low, mid);      // sort left half
        merge_sort(arr, mid + 1, high); // sort right half
        merge(arr, low, mid, high);     // merge
    }
}
