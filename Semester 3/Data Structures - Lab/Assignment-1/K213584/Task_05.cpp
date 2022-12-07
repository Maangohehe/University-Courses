#include <iostream>
#include <limits.h>
using namespace std;
void MinMax(int arr[], int *smallest, int *greatest);
int main(void)
{
    int small = INT_MAX, largest = -INT_MAX;
    int arr[5] = {0};
    //populate the array
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    MinMax(arr, &small, &largest);
    cout << "Largest: " << largest << endl << "Smallest: " << small << endl;
    return 0;
}

void MinMax(int arr[], int *smallest, int *greatest)
{
    for (int i = 0; i < 5; i++)
    {
        // For largest
        if (arr[i] > *greatest)
        {
            *greatest = arr[i];
        }
        // For smallest
        if (arr[i] < *smallest)
        {
            *smallest = arr[i];
        }
    }
}