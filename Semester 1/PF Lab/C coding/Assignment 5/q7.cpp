#include <stdio.h>

int main()
{
	int a, i, exh, b, g;
    
    printf("Input value of a.\nInput: ");
    scanf("%d", &a);
    printf("Input the value of b.\nInput: ");
    scanf("%d", &b);
    if(b>a)
    {
    	exh=a;
    	a=b;
    	b=exh;
	}
	while(b!=0)
	{
		g=a%b;
		a=b;
		b=g;
	}
	if(a==1)
	{
	    printf("a and b are relatively prime because GCD is %d.\n", a);
	}
	else 
	{
		printf("a and b are not relatively prime because GCD is %d.\n", a);
	}
}
