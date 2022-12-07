#include <stdio.h>
#include <math.h>
int main()
{
	char a[100], i;
	int e=17, n=77;
	unsigned long int h[100], m[100];
	for(i=0; i<5; i++)
	{
		scanf("%s", &a[i]);
		h[i]=a[i]-65;
		m[i]=pow(h[i],e);
		m[i]=m[i]%n;
	}
	for(i=0; i<5; i++)
	printf("%llu\n", m[i]);
}
