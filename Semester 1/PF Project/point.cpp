#include <stdio.h>
int main()
{
	int *ptr, y;
	ptr=&y;
	*ptr=2;
	printf("The address is %x", ptr);
	printf("the value is %d", *ptr);
}
