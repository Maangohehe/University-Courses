#include <stdio.h>
int main()
{
	int i, j, c, r1, r2, c1, c2, n=0;
	printf("Input rows and columns of First Matrix: ");
	scanf("%d %d", &r1, &c1);
	int m[r1][c1]={0};
	printf("Input the rows and columns of the second Matrix: ");
	scanf("%d %d", &r2, &c2);
	int m1[r2][c2]={0};
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			printf("Matrix 1: ");
			scanf("%d", &m[i][j]);
		}
	}
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("Matrix 2: ");
			scanf("%d", &m1[i][j]);
		}
	}
	int sum[r1][c2];
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			sum[i][j]= 0;
		}
	}
	
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			for(c=0; c<c1; c++)
			{
				sum[i][j]+=m[i][c]*m1[c][j];
			}
		}
	}
	printf("The resultant Matrix: \n");
	for (int i = 0; i < r1; ++i) 
	{
      for (int j = 0; j < c2; ++j) 
	  {
         printf("%d  ", sum[i][j]);
      }
      printf("\n");
   }
	
}
