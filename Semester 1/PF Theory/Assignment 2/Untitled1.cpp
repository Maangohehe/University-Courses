#include <stdio.h>

int main()

{
	char two;
	int choice, one, I=1, V=5, X=10, L=50, C=100, D=500, M=1000;
	printf("How many character(s) would be in there in your roman number?\nInput: ");
	scanf("%d", &choice);
	if(choice>2||choice==0)
	{
		printf("Input cannot be greater than 2 nor 0. Run the program again.");
	}
	if(choice==1)
    {
    	printf("What is the first character of your roman number\nInput: ");
    	scanf("%s", &one);
    	if(one=='M')
    	{
    		printf("Decimal equivalent is %d", M);
		}
		else if(one=='I')
		{
			printf("Decimal equivalent is %d", I);
		}
		else if(one=='L')
		{
			printf("Decimal equivalent is %d", L);
		}
		else if(one=='X')
		{
			printf("Decimal equivalent is %d", X);
		}
		else if(one=='C')
		{
			printf("Decimal equivalent is %d", C);
		}
		else if(one=='D')
		{
			printf("Decimal equivalent is %d", D);
		}
		else if(one=='V')
		{
			printf("Decimal equivalent is %d", V);
		}
	}
	if(choice==2)
	{
		printf("What is the first character of your roman number?\nInput: ");
		scanf("%s", &one);
		printf("What is the second character of your roman number?\nInput: ");
		scanf("%s", &two);
		
		
	}


}	
