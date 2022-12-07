#include <stdio.h>
int f(int i, int fac);
int main()
{
	int n, fac=1, i, res;
	printf("Input a limit: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		res=f(i, fac);
		printf("The factorial of %d is %d\n", i, res);
	}
	
}

int f(int i, int fac)
{
	if(i==1)
	{
		return fac;
	}
	else
	{
		fac=fac*i;
		i--;
		f(i,fac);
	}
}
