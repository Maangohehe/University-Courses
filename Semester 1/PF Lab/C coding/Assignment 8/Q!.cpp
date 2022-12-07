#include <stdio.h>
#include <time.h>
#include <math.h>
int main(){
	int i, j, k, l, alg;
	printf("Input the test type: ");
	scanf("%d", &l);
	
     
     clock_t start, end;
     double cpu_time_used;
     
     start = clock();
     
	switch(l)
	{
	case 1:	
	for(i=2; i<=1000; i++)
	{
		k=0; 
		for(j=1; j<=i-1; j++)
		{
			alg=i%j;
			if(alg==0)
			{
				k++;
			}
		}
		if(k==1)
		{
			printf("%d\n", i);
		}
	}
	break;
	case 2:
		for(i=2; i<=1000; i++)
		{
			k=0;
			for(j=1; j<=i/2; j++)
			{
				alg=i%j;
				if(alg==0)
				{
					k++;
				}
			}
			if(k==1)
			{
				printf("%d\n", i);
			}
		}
		break;
		case 3:
			for(i=2; i<=1000; i++)
			{
				k=0;
				for(j=1; j<=sqrt(i); j++)
				{
					alg=i%j;
					if(alg==0)
					{
						k++;
					}
					
				}
				if(k==1)
				{
					printf("%d\n", i);
				}
			}
			
	}
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf("Time takes in %.3f", cpu_time_used);
}
