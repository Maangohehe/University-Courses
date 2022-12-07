#include <stdio.h>
int main()
{
	int i, j, *var, arr[5]={0}, c, d, swap;
	var=arr;
	for(i=0; i<5; i++)
	{
		printf("Input the element: ");
		scanf("%d", &arr[i]);
	}
	for(c=0; c<5; c++)
	{
		for(d=0; d<5-1; d++)
		{
			if(*(var+d)<*(var+d+1))
			{
				swap=*(var+d+1);
				*(var+d+1)=*(var+d);
				*(var+d)=swap;
			}
		}
	}
	printf("The second highest is: %d", *(var+1));
}
