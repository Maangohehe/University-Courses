#include<stdio.h>

int main()
{
	float units, units2, ttl, ttl1, ttl2, tax;
	printf("Welcome to the electricity bill calculator,\n");
	printf("Please input the total units used by the customer\nInput: ");
	scanf("%f", &units);
	if (units<300)
	{
		ttl=units*8;
		tax=ttl*0.10;
		ttl=tax+ttl;
		printf("The total bill is %.2fRs\n", ttl);
	}
	else if(units>300 && units<600)
	{
		units2=units-300;
		ttl1=units*8;
		tax=ttl1*0.12;
		ttl1=tax+ttl1;
		ttl2=units2*12;
		tax=ttl2*0.12;
		ttl2=tax+ttl2;
		printf("The total bill is %.2fRs\n", ttl=ttl1+ttl2);
	}
	else if(units>=600)
	{
		ttl1=units*15;
		tax=ttl1*0.15;
		printf("The total bill is %.2fRs\n", ttl1=ttl1+tax);
	}
	
	
	
	
	
	
}
