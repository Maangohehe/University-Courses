#include <stdio.h>
int main()
{
int i, j, k, n, c=1, m, fact1=1, fact2=1, fact3;
printf("Input the number of rows: ");
scanf("%d", &n);
for(i=0; i<=n; i++)
{
	for(j=i; j<=n; j++)
	{
		printf(" ");
	}
	for(k=0; k<=i; k++)
	{
		if(i==0 || k==0)
		{
			c=1;
		}
		else{
			
	c=c*(i-k+1)/k;
		}
		printf("%d ", c);

	}
	printf("\n");
}
	
}
