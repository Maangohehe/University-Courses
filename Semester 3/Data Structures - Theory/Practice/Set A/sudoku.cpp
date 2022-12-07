#include <iostream>
using namespace std;
/*We need to make functions to check for safety of our board
1. First check if the current cell is empty
    *If it is empty then check the whole row and column and search for the value to be put, return true if possible
2. If cell is not empty then check for other cells

*/
bool isUnassigned(int board[4][4], int &row, int &col)
{
    //Check for empty boxes
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            if (board[row][col] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

bool checkRow(int board[4][4], int row, int num)
{
    for (int i = 0; i < 4; i++)
    {
        if (board[row][i] == num)
            return true;
    }
    return false;
}

bool checkCol(int board[4][4], int col, int num)
{
    for (int i = 0; i < 4; i++)
    {
        if (board[i][col] == num)
            return true;
    }
    return false;
}

bool checkGrid(int board[4][4], int row, int col, int num)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (board[i + row][j + col] == num)
                return true;
        }
    }
    return false;
}

bool isSafe(int board[4][4], int row, int col, int num)
{
    //we have to check row, col and the sub grid
    if (!checkRow(board, row, num) && !checkCol(board, col, num) && board[row][col] == 0)
    {
        if (!checkGrid(board, row - row % 2, col - col % 2, num))   
        return true;
    }
    
    return false;
}

bool populate(int board[4][4])
{
    //This function will populate our board
    int row, col;
    if (!isUnassigned(board, row, col))
    {
        return true;
    }
    //if there are empty boxes left check if we can assign them a number from our set
    for (int i = 1; i <= 4; i++)
    {
        //First check if it is safe to assign this number to our box
        if(isSafe(board, row, col, i))
        {
            board[row][col] = i;
            //Recursively call again
            if (populate(board))
            {
                return true;
            }

            board[row][col] = 0;
        }

    }
    cout << "No solution exist";
    return false;
}

int main(void)
{
    int board[4][4];
    //populate the board
    for (int i = 0; i < 2 * 2; i++)
    {
        for (int j = 0; j < 2 * 2; j++)
        {
            board[i][j] = 0;
        }
    }
    populate(board);
    
}