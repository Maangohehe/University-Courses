#include <stdio.h>
int main()
{
	int num=1234, i=0, mod[4]={0};
	while(num!=0)
	{
		mod[i]=num%10;
		num/=10;
		i++; 
	}
	for(i=0; i<4; i++)
	printf("%d", mod[i]);
}
