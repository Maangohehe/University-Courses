#include <stdio.h>
int main()
{
	int n;
	printf("Input the number of elements in the array: ");
	scanf("%d", &n);
	int arr[n]={0};
	int i, j, k, l;
	for(i=0; i<n; i++)
	{
		printf("Input the number of elements: ");
		scanf("%d", &arr[i]);
	}
	printf("The largest element in the array is: \n");
		int swap;
	for(i=0; i<n; i++)
	{
		
		
			if(arr[i]>arr[0])
			{
				arr[0]=arr[i];
			}
		
	 } 
	 printf("%d\n", arr[0]);
		
}
