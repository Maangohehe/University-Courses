#include <iostream>
using namespace std;
bool check(int grid[4][4], int pattern[4][4], int row, int col)
{
    //Check if we can go down
    if (grid[row++][col])
        return true;
    //check if we can go forward
    if (grid[row][col++])
        return true;
    //if cant go forward or down
    return false;
}

int maze(int grid[4][4], int pattern[4][4], int row, int col)
{
    if (row >= 4 && col >= 4)
        return;
    //check if rat can go this path
    if (check(grid, pattern, row, col))
    {
        if (pattern[row][col] == true && row >= 0 && col >= 0 && row <= 4 && col <= 4)
            return false;

        pattern[row][col] = 1;

        //recursive call
        if (maze(grid, pattern, row + 1, col))
            pattern[row][col] = 1;

        if (maze(grid, pattern, row, col + 1))
            pattern[row][col] = 1;
    }


}

int main(void)
{
    int pattern[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int grid[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {1, 1, 1, 1}};
    maze(grid, pattern, 0, 0);
}