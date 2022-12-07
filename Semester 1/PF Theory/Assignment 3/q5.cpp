#include <stdio.h>
int main()
{
	int age, i;
	char area;
	for(i=1; i<=10; i++)
	{
		printf("what is your area?(u/r).\nInput: ");
		scanf("%s", &area);
		printf("What is your age?\nInput: ");
		scanf("%d", &age);	
		if(age>=18 && area=='u')
		{
			printf("YOU ARE ELIGIBE FOR A VACCINATION.\n");
		}
		else if(age<18 && area=='r')
		{
			printf("YOU ARE NOT ELIGIBLE FOR A VACCINATION.\n");
		}
		else
		{
			printf("Condition Error!!!\n");
		}
	}
}
