#include <stdio.h>
#include <math.h>
float add(float res);
float sub(float res);
float div(float res);
float mult(float res);
float power(float res);
int main()
{
	char choice;
	float res;
	printf("Input the choice (+, -, *, /, p): ");
	scanf("%c", &choice);
	switch(choice)
	{
		case '+':
			res=add(res);
			printf("The result is = %.2f", res);
			break;
		case '-':
			res=sub(res);
			printf("The result is = %.2f", res);
			break;
		case '*':
			res=mult(res);
			printf("The result is = %.2f", res);
			break;
		case '/':
			res=div(res);
			printf("The result is = %f", res);
			break; 
		case 'p':
			res=power(res);
			printf("The result is = %.1f", res);
			break;
		default:
			printf("Enter a valid choice.");
			return 0;
		break;
			
	}
}
float power(float res)
{
	float num1, num2;
	printf("Enter the number: ");
	scanf("%f", &num1);
	printf("Enter the superscript: ");
	scanf("%f", &num2);
	res=pow(num1,num2);
	return res;
}

float div(float res)
{
	float num1, num2;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);
	res=num1/num2;
	return res;
}
float mult(float res)
{
	float num1, num2;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);
	res=num1*num2;
	return res;
}

float sub(float res)
{
	float num1, num2;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);
	res=num1-num2;
	return res;
}

float add(float res)
{
	float num1, num2;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);
	res=num1+num2;
	return res;
}
