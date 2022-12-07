#include <stdio.h>

int main()
{
	int choice;
	printf("Input 1 for max and 0 for min.\nInput:");
	scanf("%d", &choice);
	printf("Input the first number.\nInput:");
    int a, b;
	scanf("%d", &a);
	printf("Input the second number.\nInput:");
	scanf("%d", &b);
	(choice==1)?(a>b)?printf("%d is max and %d is min\n", a, b):printf("%d is min and %d is max\n", a, b):printf("Both are equal");
	
	
}
