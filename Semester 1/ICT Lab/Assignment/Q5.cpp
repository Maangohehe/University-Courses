#include <stdio.h>
#include <math.h>
int main()
{
	int i, n, res;
	printf("Input the number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		res=pow(i,3);
		printf("Cube root of %d = %d\n", i, res);
	}
	
	
}
