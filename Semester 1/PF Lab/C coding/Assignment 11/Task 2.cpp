#include <stdio.h>
int main()
{
	int i, sum, *p, arr[5]={1,2,3,4,5};
	p=arr;
	for(i=0; i<5; i++)
	{
		sum=sum+*(p+i);
	}
	printf("%d", sum);
}
