#include <stdio.h>

int main()
{
	//take salary
	float salary= 0;
	float net_salary=0;
	float tax_rate=0;
	float tax=0;
	float provident_fund_distribution=0;
	float total_tax=0;
	
	printf("What is the salary? = ");
	scanf("%f", &salary);
	printf("What is the current provident fund distribution in %?= ");
	scanf("%f", &provident_fund_distribution);
	printf("\n What is the current tax rate in percent? = ");
	scanf("%f", &tax_rate);
	total_tax= provident_fund_distribution+tax_rate;
	printf("\nThe Tax taken from salary is = %f", salary*total_tax/100);
	printf("\nThe Net Salary is = %f", salary-(salary*total_tax/100));	
	

	
}

