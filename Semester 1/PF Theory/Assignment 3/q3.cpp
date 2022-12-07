#include <stdio.h>
#include <math.h>
int main()
{
	int n=14, x, fact=1, i=1, N;
	float tay, oldtay, newtay;
	printf("Input the value of x.\nInput: ");
	scanf("%d", &x);
//	printf("Input the value of n.\nInput: ");
//	scanf("%d", &n);
	
	while(i<=n)
	{
		N=i;
		fact=fact*N; 
		tay+=pow(x,i)/fact;
		i++;
	}
	tay=1+tay;
	printf("%.2f\n", tay);
}
