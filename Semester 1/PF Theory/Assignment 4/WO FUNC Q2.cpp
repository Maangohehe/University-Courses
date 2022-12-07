#include <stdio.h>
int main()
{
	int dig=11111, sum, i;
    while(dig!=0)
	{
		i=dig%10;
		sum=sum+i;
		dig/=10;
	}
	printf("%d", sum);
}
