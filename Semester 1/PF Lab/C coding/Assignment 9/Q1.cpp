#include <stdio.h>
int main()
{
	int i, j, row, col, cnt=0, den=0, density=0, sparse=0;
	printf("Input the rows of the matrix: ");
	scanf("%d", &row);
	printf("Input the columns of the matrix: ");
	scanf("%d", &col);
	int mat[row][col];
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Input the elements of the matrix, disp[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			if(mat[i][j]==0)
			{
				cnt++;
			}
			else{
				den++;
			}
		}
	}
	printf("Number of zeroes %d.\n", cnt);
	
	sparse=(cnt*100)/(row*col);
	
	printf("The sparsity of the matrix is %d percent.\n", sparse);
	
	density=(den*100)/(row*col);
	
	printf("Number of non zero elements is %d.", density);
	
	
	
}
