#include <stdio.h>
int main()
{
	int n=1, lim=1, i, j;
	printf("Input the number: ");
	scanf("%d", &n);
	printf("Input the limit: ");
	scanf("%d", &lim);
	for(i=1; i<=lim; i++)
	{
		printf("%d x %d = %d\n",n , i, n*i);
	}
}
