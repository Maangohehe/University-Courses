#include<stdio.h>

int main()
{
	int num1, cong1, cong2, mod, num2;
	printf("Welcome to cryptographic algorithm.\a\n");
	printf("Please Input the first number.\nInput: ");
	scanf("%d", &num1);
	printf("Please input the second number\nInput: ");
	scanf("%d", &num2);
	printf("Please input the number with which you like it to mod with\nInput: ");
	scanf("%d", &mod);
	cong1=num1%mod;
	cong2=num2%mod;

	if(cong1==cong2)
	{
		printf("%d mod %d and %d mod %d are congruent.", num1, mod, num2, mod);
	}
	else
	{
		printf("%d mod %d and %d mod %d are not congruent.\n", num1, mod, num2, mod);
	}
	
	
	
	
	
}
