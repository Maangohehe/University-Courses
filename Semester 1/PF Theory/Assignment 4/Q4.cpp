#include <stdio.h>
int function_2(int num[]);
int function_3(int num[]);
int function(int num[]);
int main()
{
	int num[100], i=0, result=0, sum=0, res2=0;
	for(i=0; i<10; i++)
	{
		printf("element: ");
		scanf("%d", &num[i]);
	}
	result=function(num);
	res2=function_2(num);

	printf("The sum is %d.\n\n", result);
	printf("The max number is %d.", res2);
	
}

int function_2(int num[])
{
	int max=0, i, j, swap[100];
	
	for(i=0; i<10; i++)
	{
		
			if(num[i]>num[i+1]);
			{
				swap[100] = num[i];
				
			}
			
	}
	 
	return swap[100];
}
int function(int num[])
{
	int sum=0, i;
	for(i=0; i<10; i++)
	{
		sum=sum+num[i];
	}
	
	return sum;
}

