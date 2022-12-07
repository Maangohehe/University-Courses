#include <stdio.h>


int main()
{
	int a=0, b=0;
	printf("Input value of a and b= ");
	scanf("%d%d", &a, &b);
	printf("\nthe values of a before swap is:%d\n", a);
	printf("\nthe values of b before swap is:%d\n", b);
	a= a+b;
	//after swap
	printf("\nThe value of a after swapping: %d\n",a);
	//swapping value of b
	b= a-b;
	printf("\n The value of b after swap = %d\n", b );
	
	
	

	
}

