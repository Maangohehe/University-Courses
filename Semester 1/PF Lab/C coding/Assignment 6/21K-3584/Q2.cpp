#include <stdio.h>
int main()
{
	int day1, day2, month, i;
	int name, j=1;
	
	printf("Input the month: ");
	scanf("%d", &month);
	printf("Input the starting day of the month: ");
	scanf("%d", &day1);
	if(day1>7)
	{
		printf("Error, days are not more than 7.");
		return 0;
	}

	
		switch(month)
		{
			case 1: 
			printf("\t\tJanuary [2021]\n\n");
			break;
			case 2:
				printf("\t\tFebruary [2021]\n\n");
				break;
			case 3:
				printf("\t\tMarch [2021]\n\n");
				break;
			case 4: 
			printf("\t\tApril [2021]\n\n");
			break;
			case 5:
				printf("\t\tMay [2021]\n\n");
				break;
			case 6:
				printf("\t\tJune [2021]\n\n");
				break;
				case 7: 
			printf("\t\tJuly [2021]\n\n");
			break;
			case 8:
				printf("\t\tAugust [2021]\n\n");
				break;
			case 9:
				printf("\t\tNovember [2021]\n\n");
				break;
				case 10: 
			printf("\t\tDecember [2021]\n\n");
			break;
			case 11:
				printf("\t\tFebruary [2021]\n\n");
				break;
			case 12:
				printf("\t\tMarch [2021]\n\n");
				break;
				
		}
		switch(day1)
		{
			case 1:
					printf("Monday");
					printf("\t\tTuesday");
					printf("\t\tWednesday");
					printf("\t\tThursday");
					printf("\tFriday");
					printf("\t\tSaturday");
					printf("\tSunday");	
					for()			
				
		}
			
}
	
