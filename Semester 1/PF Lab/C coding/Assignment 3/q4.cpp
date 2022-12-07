#include <stdio.h>

int main(void)

{
    int num, result;
	char operatorr;
	printf("What kind of operator would you like to use? (* or /): " );
	scanf("%s", &operatorr);

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Number is: %d\n",num);
		if(operatorr=='/')
	{
		result=num>>2;
		
		printf("The result for %d is: %d",num, result);
	}
    else if(operatorr=='*')
	{
		result=num<<2;
		
	    printf("The result is: %d", result);
	}
}
