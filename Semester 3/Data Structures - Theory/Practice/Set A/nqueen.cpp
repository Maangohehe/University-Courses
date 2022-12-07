#include <iostream>
using namespace std;
#define N 4

//print function to print the board
void print(bool board[N][N])
{
    for (int i = 0 ; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkRow(bool board[N][N], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    return true;
}

bool checkDiagonal(bool board[N][N], int row, int col)
{
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if(board[i][j])
			return false;
	}

	// check for lower left diagonal
	for(int i = row, j = col; i < 4 && j >= 0; i++, j--)
	{
		if(board[i][j])
			return false;
	}
    return true;
}

bool isSafe(bool board[N][N], int row, int col)
{
    //First we have to check the entire row
    if (checkRow(board, row, col) && checkDiagonal(board, row, col))
        return true;
    return false;
}

bool solveNqueen(bool board[N][N], int col)
{
    if (col >= 4)
        return true; //Finished
    //Before placing queen, we want to make sure that it is safe to put 
    //it on the box
    for (int row = 0; row < N; row++)
    {

        if (isSafe(board, row, col))
        {
            board[row][col] = 1;

            if (solveNqueen(board, col + 1))
                return true;
            
            //Try again
            board[row][col] = 0;
        }
    }
    return false;
}

int main(void)
{
    bool board[N][N] = { { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 } };

    if(solveNqueen(board, 0))
    {
        print(board);
    }
}