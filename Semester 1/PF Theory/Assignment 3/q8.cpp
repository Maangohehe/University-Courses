#include <stdio.h>
int main()
{
	char situation;
	int i, j, k;
	printf("Is the situation normal(y,n)?\nInput: ");
	scanf("%s", &situation);
	if(situation=='y')
	{
		for(i=1;i<=8;i++)
		{
			printf("#");
		}
		printf("\n");

			for(k=1; k<=36; k++)
			{
				if(k==1 || k==7 || k==13 || k==19 || k==25 || k==31)
				{
					printf("#");
				}
				printf("NormalSituation");
				if(k==6 || k==12 || k==18 || k==24 || k==30 || k==36)
				{
					
                    printf("#");
					printf("\n");
					}
					
					if(k==36)
					{
					 for(i=1;i<=8;i++)
	               	{
			           printf("#");
	                	}    	
					}
			}

	}
	
	else if(situation=='n')
	{
		for(i=1;i<=8;i++)
		{
			printf("*");
		}
		printf("\n");

			for(k=1; k<=36; k++)
			{
				if(k==1 || k==7 || k==13 || k==19 || k==25 || k==31)
				{
					printf("*");
				}
				printf("AbnormalSituation");
				if(k==6 || k==12 || k==18 || k==24 || k==30 || k==36)
				{
					
                    printf("*");
					printf("\n");
					}
					
					if(k==36)
					{
					 for(i=1;i<=8;i++)
	               	{
			           printf("*");
	                	}    	
					}
			}

	}
}
