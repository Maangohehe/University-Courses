#include <iostream>
using namespace std;
void printSolution(int board[4][4])
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << " " << board[i][j] << " ";
        printf("\n");
    }
}

bool Checking(int board[4][4], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++) // left side
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < col; i++, j--)
        if (board[i][j])
            return false;
    return true;
}
bool solveNQUtil(int board[4][4], int col)
{
    /* base case: If all queens are placed
      then return true /
    if (col >= 4)
        return true;

    / Consider this column and try placing
       this queen in all rows one by one /
    for (int i = 0; i < 4; i++) {
        / Check if the queen can be placed on
          board[i][col] /
        if (Checking(board, i, col)) {
            / Place this queen in board[i][col] /
            board[i][col] = 1;

            / recur to place rest of the queens /
            if (solveNQUtil(board, col + 1))
                return true;

            / If placing queen in board[i][col]
               doesn't lead to a solution, then
               remove queen from board[i][col] */
    board[i][col] = 0; // BACKTRACK
}
    }
    return false;
}
bool solveNQ()
{
    int board[4][4] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };

    if (solveNQUtil(board, 0) == false) {
        cout << "Solution does not exist";
        return false;
    }

    printSolution(board);
    return true;
}
int main()
{
    solveNQ();
    return 0;
}