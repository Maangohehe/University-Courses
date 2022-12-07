#include <stdio.h>

int main()
{
	
	int n=0, i=0, swap, c, d;
	printf("Input the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
	{
	printf("Input the elements: ");
		scanf("%d", &arr[i]);
	}
	
	
	for(c=0; c<n-1; c++)
	{
		for(d=0; d<n-c-1; d++)
		{
			if(arr[d]>arr[d+1])
			{
				swap=arr[d];
				arr[d]=arr[d+1];
				arr[d+1]=swap;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
