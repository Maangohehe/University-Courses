#include <stdio.h>
int main()
{
	char arr[5]={'a','b','c','d','e'}, x;
	printf("Enter a num to search: ");
	scanf("%c", &x);
	for(int i=0; i<5; i++)
	{
		if(arr[i]==x)
		{
			printf("Element %c found at %d index of array.", x, i);
			break;
		}
		
	}
	
}
