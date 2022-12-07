#include <stdio.h>
int main()
{
	int i, n, j, k, median, amx;
	printf("Input the array size: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<=n; i++)
	{
		printf("Enter elements: ");
		scanf("%d", &arr[i]);
	}
	printf("Elemtnts\n");
	for(i=0; i<=n; i++)
	{
		printf("%d\n\n", arr[i]);
	}
	float mean;
	for(i=0; i<=n; i++)
	{
		mean=mean+arr[i];
	}
		mean=mean/(n+1);
	printf("Mean\n\n%.3f", mean);
	printf("\nMedian\n");
	median=(n)/2;
	if(n%2!=0)
	{
		median=arr[median];
		printf("%d", median);
	}
	else{
		printf("%d", arr[median]);
	}
//	int count;
//int mode;
//for(i=0; i<n; i++)
//{
//	count=0;
//	for(j=0; j<n; j++)
//	{
//		if(arr[j]==arr[i])
//		{
//			count++;
//		}
//	}
//	
//}
//if(count>amx)
//{
//	amx=count;
//	mode=arr[i];
//}
//printf("Mode\n", mode);
//	
}
