#include <iostream>
using namespace std;

int **returnSubGrid(int board[4][4], int subgrid)
{
    //0 based indexing
    int **output = new int*[2];
    for (int i = 0 ; i < 2; i++)
    {
        output[i] = new int[2];
    }
    subgrid--;
    int row = 2 * (subgrid / 2);
    int col = 2 * (subgrid % 2);
    for (int i = row; i < row + 2; i++)
    {
        for (int j = col; j < col + 2; j++)
        {
            output[i][j] = board[i][j];
        }
    }

    
    return output;
}

int main(void)
{
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **board = returnSubGrid(arr, 2);
}