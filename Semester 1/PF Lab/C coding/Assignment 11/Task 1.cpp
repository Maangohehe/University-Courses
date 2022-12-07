#include <stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr);
int main()
{
	int a=5, b=10, c=15;
	printf("Before the values are\na = %d\nb = %d\nc = %d\n", a,b,c);
	swaped(&a,&b,&c);
	printf("Values after function call\na = %d \nb = %d\nc = %d\n", a,b,c);
}
void swaped(int *aPtr, int *bPtr, int *cPtr)
{
	int temp;
	temp=*aPtr;
	*aPtr=*bPtr;
	*bPtr=*cPtr;
	*cPtr=temp;
	printf("The values in function\n a = %d\n b = %d\n c = %d", *aPtr, *bPtr, *cPtr);
	
	
}
