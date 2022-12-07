#include <stdio.h>
#include <stdlib.h> //for exit
int main(void)
{
    //We have a knight and we ask user to input
    //co-ordinates on a 8x8 board with the starting index
    //0 and ending index 7
    /*
        0 1 2 3 4 5 6 7
        1             1
        2             2
        3             3
        4             4
        5             5
        6             6
        7 1 2 3 4 5 6 7
    */
   //ask for x and y co-ordinates
   int x, y;
   int init_1 = -1, init_2 = -1; //initial position
   while (1) //for infinite loop
   {
        if (init_1 == -1 && init_2 == -1)
        {
            printf("Input the initial position of knight: (x,y)\n: ");
            scanf("%d %d", &init_1, &init_2);
            if (init_1 > 7 || init_1 < 0 || init_2 > 7 || init_2 < 0)
            {
                printf("Cannot place knight outside of board\n");
                exit(1);
            }
        }
        printf("Input the x and y co-ordinates respectively: (x,y)\n: ");
        scanf("%d %d", &x, &y);
        if (x < 0 || x > 7 || y < 0 || y > 7)
        {
            printf("Invalid co-ordinates\n");
            exit(1);
        }
        /*
            A knight can either move
            1. 2 Right, 1 Up
            2. 2 Right, 1 Down
            3. 2 Down, 1 Right
            4. 2 Down, 1 Left
            5. 2 Left, 1 Down
            6. 2 Left, 1 Up
            7. 2 Up, 1 Left
            8. 2 Up, 1 Right 
        */
       //We have 8 conditions to check
       //also check if calculations are causeing under/overflow on the board
       if ((init_1 + 2 == x && init_2 + 1 == y) || (init_1 + 2 == x && init_2 - 1 == y) || (init_1 - 2 == x && init_2 + 1 == y) || (init_1 - 2 == x && init_2 - 1 == y)
       || (init_2 + 2 == y && init_1 + 1 == x) || (init_2 + 2 == y && init_1 - 1 == x) || (init_2 - 2 == y && init_1 + 1 == x) || (init_2 - 2 == y && init_1 - 1 == x))
       {
            printf("(%d,%d) is a valid position\n", x, y);
            init_1 = x;
            init_2 = y;
            printf("New co-ordinates are (%d,%d)\n", x, y);
       }
       else
       {
            printf("(%d,%d) is not a valid position\n", x, y);
       }
   }
   //Now we need to check if the user input is valid or not
}