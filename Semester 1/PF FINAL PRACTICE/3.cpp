#include<stdio.h>
int main()
{
	int i =3, *j;
	j=&i;
	printf("The address is %x.\nthe value is %d", &i, j);
}
