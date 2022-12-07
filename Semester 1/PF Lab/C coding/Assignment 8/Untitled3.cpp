#include <stdio.h>
int main()
{
	int i, j, k, n;
	printf(" Enter the number of rows: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(k=7; k>=(n-i)+1; k--)
		{
			printf(" ");
		}
		for(j=i; j<=n; j++)
		{
			if(i==1 || i==n || j==i || j==n)
			{
				printf("*");
				printf(" ");
				
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}
