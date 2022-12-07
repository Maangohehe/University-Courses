#include <stdio.h>
int ascend(int *arr, int n);
int desc(int *arr, int n);
int main()
{
	int ch, n;
	printf("Input the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter the elements: ");
		scanf("%d", &*(arr+i));
	}
	printf("What kind sorting would you like to perform \n1) Ascending\n2) Descending\nInput: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			ascend(arr,n);
		case 2:
			desc(arr,n);
	}
}

int ascend(int *arr, int n)
{
	int c, d, temp;
	for(c=0; c<n; c++)
	{
		for(d=0; d<n-1; d++)
		{
			if(*(arr)>*(arr+d+1))
			{
				temp=*(arr);
				*(arr)=*(arr+d+1);
				*(arr+d+1)=temp;
			}
		}
	}
	return *(arr);

}

int desc(int *arr, int n)
{
	int c, d, temp;
	for(c=0; c<n; c++)
	{
		for(d=0; d<n-1; d++)
		{
			if(*(arr)<*(arr+d+1))
			{
				temp=*(arr);
				*(arr)=*(arr+d+1);
				*(arr+d+1)=temp;
			}
		}
	}
	printf("Sorted arr:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\n", *(arr+i));
	}
	return *(arr);
	
}
