#include <stdio.h>
int main()
{
	int n, mod, dig, ver, i, j;
	printf("Input the limit of the series. Input: ");
	scanf("%d", &n);
	ver=i;
	for(i=1; i<=n; i++)
	{
		
		ver=i;//3 remover
		dig=ver%10;
		ver=ver/10;
		// multiple remover
		mod=i%3;
		if(dig==3)
		{
			continue;
		}
	
		for(j=i; j<=i; j++)
		{
			mod=j%3;
			if(mod!=0)
			{
				printf("%d, ", j);
			}
			
			
		}

		
		
	}
	
}
