#include <stdio.h>

int main()
{
	int num,j, i, a=3, b=2, c, d, n=500;
	
	while(j<4)
	{
		printf("%d, ", j);
		if(j==1)
		{
			printf("+%d, ", j);
			j++;
		}
		if(j==0)
		{
			j++;
		}
		if(j>=2)
		{
			printf("+%d, ", j);
			j++;
		}
		
	}
	for(i=1; i<n; i++)
	{
		c=a;
		d=c+b;
		b=a;
		a=d;
		if(a>=n)
		{
			break;
		}
		
		printf("+%d, ", a);
		
		
		
		
		
	}
	
}

