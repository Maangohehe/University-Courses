#include <stdio.h>
int sort(int arr[100], int n);
int main()
{
	int n=0, i=0;
	printf("Input the size of the array: ");
	scanf("%d", &n);
	int arr[n], result[n];
	for(i=0; i<n; i++)
	{
	printf("Input the elements: ");
		scanf("%d", &arr[i]);
	}
	sort(arr, n);
	for(i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int sort(int arr[100], int n)
{
	int c=0, d=0, swap=0;
	
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
	return arr[100];
}
