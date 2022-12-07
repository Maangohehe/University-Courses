#include <stdio.h>                                                              
#include <stdlib.h>                                                             
                                                                                
int main()                                                                     
{                                                                               
    float n;                                                                    
    int ch, i, j, row, col;                                                                     
                                                                                
//    printf("\nRandom numbers between 0 to 1");
printf("Input the rows: ");
scanf("%d", &row);
printf("Input the columns: ");
scanf("%d", &col);
int mat1[row][col];                                  
    do                                                                          
    {                                                                           
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
              mat1[i][j] = (float)rand()/RAND_MAX;                                             
              printf("\nRandom number: %f", mat1[i][j]); 
				
			}
		}
	                                      
        printf("\nDo you want to generate again (1/0): ");                      
        scanf("%d", &ch);                                                       
    } while(ch == 1);   
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%.2f ", mat1[i][j]);
		}
		printf("\n");
	}


}


