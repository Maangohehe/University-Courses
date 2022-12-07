#include <stdio.h>
int main()
{
	unsigned long long int i, fac=1, lim, j;
	printf("Enter the limit: \n");
	scanf("%llu", &lim);
	for(i=1; i<=lim; i++)
	{
		j=i;
		fac=1;
		while(j!=1)
		{
			fac=fac*j;
			j--;
		}
			printf("The factorial of %llu = %llu\n", i, fac);
	}
}
