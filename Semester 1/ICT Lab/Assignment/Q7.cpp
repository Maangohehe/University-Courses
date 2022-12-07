#include <stdio.h>
int main()
{
	int i=0, n=0;
	printf("Input the number of elements: ");
	scanf("%d", &n);
	int odd[n]={0}, even[n]={0}, arr[n]={0};
	for(i=0; i<n; i++)
	{
		printf("Input the element: ");
		scanf("%d", &arr[i]);
	}
	int c, d, e;
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			even[i]=arr[i];
		}
		else{
			odd[i]=arr[i];
		}
	}
	printf("Even Elements\n");
	for(i=0; i<n; i++)
	{
		if(even[i]==0)
		{
			
		continue;
		}
		printf("%d\n", even[i]);
	}
	printf("Odd Elements\n");
	for(i=0; i<n; i++)
	{
		if(odd[i]==0)
		continue;
		printf("%d\n", odd[i]);
	}
}
