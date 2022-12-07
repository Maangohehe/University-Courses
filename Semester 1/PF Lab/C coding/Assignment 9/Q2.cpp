#include <stdio.h>
int main()
{
	int row, col, i, j, swap;
	printf("Input the number of rows: ");
	scanf("%d", &row);
	printf("Input the number of columns: ");
	scanf("%d", &col);
	if(i==j)
	{
	int mat[row][col];
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Input the number of elements disp[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
		
	}
	else{
		int mat[row][col];
		swap=row;
		row=col;
		col=swap;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
		printf("Input the number of elements disp[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
		
	}
	printf("The transposed matrix is:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
		
	}
	//for transpose.
//	for(i=0; i<row; i++)
//	{
//		for(j=0; j<col; j++)
//		{
//			trans[i][j]=mat[i][j];
//		}
//	}
	
}
