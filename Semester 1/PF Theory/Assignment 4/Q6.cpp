#include <stdio.h>
int incre(int arr[100], int n);
int main()
{
	int n, arr[100], i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Element: ");
		scanf("%d", &arr[i]);
	}
	incre(arr, n);
	for(i=0; i<n; i++)
	{
		printf("The incremented number is: %d\n", arr[i]);
	}
	
}

int incre(int arr[100], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		arr[i]=2+arr[i];
	}
	return arr[100];
}
