#include <stdio.h>
#include <string.h>
int main()
{
	int n, i;
	printf("Input the size of arr: ");
	scanf("%d", &n);
	char clr[n];
	for(i=0; i<n; i++)
	{
		printf("Input a color: ");
	scanf("%s", &clr[i]);
		
	}
	
	for(i=0; i<n; i++)
	{
	printf("%s", clr[i]);
	}
	
}
