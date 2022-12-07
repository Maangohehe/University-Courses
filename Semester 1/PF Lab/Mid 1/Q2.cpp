#include <stdio.h>
int main()
{
	int toys, choice, bill, totaltime;
	float days, hours;
	printf("How long would you like the plant to run in hours?(8 or 16).\nInput: ");
	scanf("%d", &choice);
	if(choice==8)
	{
		printf("How many toys would you like to order.\nInput: ");
		scanf("%d", &toys);
		bill=toys*60;
		totaltime=toys*360;   //the time here is converted into seconds i.e. 1 toy created every 360 seconds.
		hours=(totaltime/60)/60;
		if(hours>=24)
		{
			days=hours/24;
		}
		printf("The bill is %dRs and it took %.2f day(s) or %.2f hour(s) to create the toys.", bill, days, hours);
			
		
	}
	if(choice==16)
	{
		printf("How many toys would you like to order.\nInput: ");
		scanf("%d", &toys);
		bill=toys*120;
		totaltime=toys*360;   //the time here is converted into seconds i.e. 1 toy created every 360 seconds.
		hours=(totaltime/60)/60;
		if(hours>=24)
		{
			days=hours/24;
		}
		printf("The bill is %dRs and it took %.2f day(s) or %.2f hour(s) to create the toys.", bill, days, hours);
			
		
	}
	else
	{
		printf("The factory can run either 8 hours or 16 hours.");
	}
	
}
