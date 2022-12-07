#include <stdio.h>
int main()
{
	int i, j, k, n;
	char name[19];
	gets(name);
//	printf("Input the size: ");
//	scanf("%d", &n);
	for(i=1; i<=19; i++)
	{
		for(k=i; k<=19; k++)
		{
			if(k==19)
			break;
			else
			printf(" ");
		}
		for(j=19; j>=(19-i)+1; j--)
		{
			
			printf("%c ", name[19-j]);
		
		}
		printf("\n");
	}
	
}
