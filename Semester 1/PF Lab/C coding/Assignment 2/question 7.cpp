#include <stdio.h>

int main()
{
	unsigned char x= 4, y= 10;
	printf("x = %d, y = %d\n", x, y); 
	printf("x&y = %d\n", x&y); // Bitwise operator AND is used, here the output is 0 because 1 of the value is false.
	printf("x|y= %d\n", x|y); // Bitwise operator OR, output is 1 if any 1 of the input is true.
	printf("x^y= %d\n", x^y); // Bitwise operator XOR, output is 1 if both the inputs are different.
	printf("~x= %d\n", x= ~x); // Bitwise operator NOT, takes input and inverts all the bits of the number.
	printf("y<<1= %d\n", y<<1); // Left shift, shift the bits of the number to the left side.
	printf("y>>1= %d\n", y>>1); // Right shift, shits the bits of the operator to the right side.
	
	
}
