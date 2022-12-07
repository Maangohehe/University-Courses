#include <iostream>
using namespace std;

int main(void)
{
    int **arr = nullptr, row, col;
    cout << "Input rows of array: ";
    cin >> row; 
    cout << "Input columns of array: ";
    cin >> col;
    if (row != col)
    {
        cout << "Rows and columns must be same\n";
        return 1;
    }
    // Dynamically allocate memory for 2d array
    arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    //populate array
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Element[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j && arr[i][j] == 1)
            {
                continue;
            }
            else if (i != j && arr[i][j] == 0)
            {
                continue;
            }
            else{
                cout << "Not an identity matrix\n";
                return 1;
            }
        }
    }

    cout << "An identity matrix\n";
    //deallocate memory
    for(int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}