#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, i, m=4, n, age; // Where C is the hyypotenuse.
	printf("Input your age.\nInput: ");
	scanf("%d", &age);
	// formula for pythagorean triples is,
	// a=m^2-n^2
	// b=2nm
	//c=n^2+m^2
	
	for(n=2; n<=age; n++)
	{
		a=m*m-n*n;
		b=2*n*m;
		c=m*m+n*n;
		m++;
		if(a>age)
		{
			break;
		}
		printf("The generated pythagorean triple is:\n%d %d %d\n", a, b, c);
	}
	
}
