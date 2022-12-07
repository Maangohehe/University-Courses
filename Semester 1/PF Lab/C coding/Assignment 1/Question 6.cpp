#include <stdio.h>

int main()
{
	float number_1=0, number_2=0, total;
	//For addition
	printf("Input number 1 = ");
	scanf("%f", &number_1);
	printf("Input number 2 = ");
	scanf("%f", &number_2);
	total= number_1+number_2;
	printf("\nThe total is = %f", total);
	//For subtraction
	printf("\nFor subtraction");
	printf("\nInput number 1 = ");
	scanf("%f", &number_1);
	printf("\nInput number 2 = ");
	scanf("%f", &number_2);
	total=number_1-number_2;
	printf("\nThe total is = %f", total);
	//For Multiplication
	printf("\nFor multiplaciton");
	printf("\nInput number 1 = ");
	scanf("%f", &number_1);
	printf("\nInput number 2 = ");
	scanf("%f", &number_2);
	total=number_1*number_2;
	printf("\nThe total is = %f", total);
	//For Division
	printf("\nFor division");
	printf("\nInput number 1 = ");
	scanf("%f", &number_1);
	printf("\nInput number 2 = ");
	scanf("%f", &number_2);
	total=number_1/number_2;
	printf("\nThe total is = %f", total);
	//For mod
	{
		int number_1=0, number_2=0;
		
		printf("\nFor mod");
	printf("\nInput number 1 = ");
	scanf("%f", &number_1);
	printf("\nInput number 2 = ");
	scanf("%f", &number_2);
	total= number_1%number_2;
	printf("\nThe total is = %f", total);
	}
}
