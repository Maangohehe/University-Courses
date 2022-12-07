#include <stdio.h>
#include <time.h>
int main()
{
    int security[10], x, res[10], hash[10]={0, 0, 0 ,0 ,0 ,0 ,0 ,0, 0, 0}, i, mod, cnt=1;
    clock_t start, end;
     double cpu_time_used;
     
     start = clock();
	for(i=0; i<=9; i++, cnt++)
	{
		printf("Input the Social Security number of your employees:  ");
		scanf("%d", &security[i]);
		res[i]=security[i];
		if(security[i]<99999999 )
		{
			printf("Digits are less or greater than 10.");
			return 0;
		}
		
			
			hash[i]=res[i]%10;
			printf("The Hashed value is %d\n", hash[i]);
		
		
	}
	printf("Enter the hashed social security number to find it's respective social security number: ");
	scanf("%d", &x);
	for(i=0; i<10; i++)
	{
		if(hash[i]==x)
		{
			break;
		}
	}
	if(i<10)
	{
		printf("The social security num is %d\n", security[i]);
	}
	else{
		printf("Element not found.\n");
	}
	end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf("Time takes in %.3f", cpu_time_used);
}
