#include <stdio.h>
int main()
{
	int i, j, k;
	for(i=1; i<=7; i++)
	{
		for(k=i; k<=7; k++)
		{
			if(k==7)
			break;
			else
			printf(" ");
		}
		for(j=7; j>=(7-i)+1; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
