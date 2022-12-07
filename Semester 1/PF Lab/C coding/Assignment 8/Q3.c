#include <stdio.h>
int main()
{
	int c, d, swap, s1, s2, n, m, i, j, sumarr[100];
	printf("Input the size of the first array: ");
	scanf("%d", &n);
	int arr1[n];
	
	for(i=0; i<n; i++ )
	{
		printf("Input the elements: ");
		scanf("%d", &arr1[s1]);
		sumarr[m]=arr1[s1];
		m++;
	}
	printf("Input the size of the second array: ");
	scanf("%d", &n);
	int arr2[n];
	for(j=0; j<n; j++)
	{
	printf("Input the elements: ");
		scanf("%d", &arr2[s2]);
		sumarr[m]=arr2[s2];
		m++;
	}

	for(c=0; c<m-1; c++)
	{
		for(d=0; d<m-c-1; d++)
		{
			if(sumarr[d]>sumarr[d+1])
			{
				swap=sumarr[d];
				sumarr[d]=sumarr[d+1];
				sumarr[d+1]=swap;
			}
		}
	}
	printf("Ascending Order\n");

	for(i=0; i<m; i++)
	{
		printf("%d\n", sumarr[i]);
	}
	for(c=0; c<m-1; c++)
	{
		for(d=0; d<m-c-1; d++)
		{
			if(sumarr[d]<sumarr[d+1])
			{
				swap=sumarr[d];
				sumarr[d]=sumarr[d+1];
				sumarr[d+1]=swap;
			}
		}
	}
	printf("\nDescending Order\n");
	for(c=0; c<m; c++)
	{
		printf("%d\n", sumarr[c]);
	}

}
