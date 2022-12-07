#include <stdio.h>

main()

{
	int result, choice;
	float num;
	printf("Write 0 for floor and 1 for ceil: ");
	scanf("%d", &choice);
	
	printf("Enter a number: ");
	scanf("%f", &num);
	result=num;
	
	if(choice==1&&num>result)
	{
		result++;
		printf("Value of ceil: %d", result);
	}
	else if(choice==1, num==result)
	{
		printf("Value of ceil: %d", result);
	}
	else
	{
		printf("Value of floor: %d", result);
	}
	
}

