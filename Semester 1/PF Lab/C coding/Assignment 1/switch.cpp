#include <stdio.h>

int main()
{
	float n1, n2, n3, n4, n5, n6, n7;
	unsigned char op;
	printf("What kind of operation would you like to perform? (+,-,/,*,%)\n");
	scanf("%c", &op);
	printf("Please enter two values for which you would like to perform the operation.\n");
	scanf("%f%f", &n1, &n2);
	
	switch(op)
	{
	
	case '+' :
	printf("Answer = %f", n1+n2);
	break;
	default:
	printf("Please enter the correct operation.");
}


}
