#include <stdio.h>
int main()
{
	int n, n1, n2, n3 i, j, d, sum;
	printf("Input the rows of mat1: ");
	scanf("%d", &n);
	printf("Input the columns of mat1: ");
	scanf("%d", &n1);
	int mat1[n][n1];
	int res[n][n1];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n1; j++)
		{
			printf("Input the elements: ");
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("Input the rows of mat2: ");
	scanf("%d", &n2);
	printf("Input the columns of mat2: ");
	scanf("%d", &n3);
	int mat2[n2][n3];
	for(i=0; i<n2; i++)
	{
	    for(j=0; j<n3; j++)
	    {
			printf("Input the elements: ");
			scanf("%d", &mat2[i][j]);
	    }
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n1; j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n1; j++)
		{
		   for(d=0; d<n2; d++)
		   {
		    	sum=sum+mat[i][j]*
		   }
	}
}
	
}
