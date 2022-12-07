#include <stdio.h>
int main()
{
	//print prime numbers only;
	int x=0, i=0;
	printf("Input the rows: ");
	scanf("%d", &x);
	for(i=1; i<=x; i++)
	{
		for(int j=(i+x)-1; j>=(x+1)-1; j--)
		{
			printf("x");
		}
		printf("\n");
	}
}
