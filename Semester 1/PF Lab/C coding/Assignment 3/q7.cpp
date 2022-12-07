#include <stdio.h>

int main(void)

{
	char clr = 'R';
	switch(clr)
	{
		case 'R':
			printf("Color is Red");
			break;
		case 'B':
			printf("Color is Blue");
			break;
		case 'G':
			printf("Color is green");
			break;
		default:
			printf("Undefined color");
			break;
	}
}
