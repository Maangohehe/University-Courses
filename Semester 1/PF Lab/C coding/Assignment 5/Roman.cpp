#include <stdio.h>
int main()
{
	int I=1, V=5, X=10, L=50, C=100, D=500, M=1000, input; 
	int i=1, n, decimal, sum[7]; 
	char roman;
	
		printf("How many Roman characters would you like to input?\nInput: ");
		scanf("%d", &input);
		while(i<=input)
		{
		
		printf("Input only 1 character of the roman number.\nInput: ");
		scanf("%s", &roman);
		if(roman=='I')
		{
			sum[n]=I;
			decimal+=sum[n];
			n++;
		}
		if(roman=='V')
		{
			sum[n]=V;
			decimal+=sum[n];
			n++;
		}
		if(roman=='X')
		{
			sum[n]=X;
			decimal+=sum[n];
			n++;
		}
		if(roman=='L')
		{
			sum[n]=L;
			decimal+=sum[n];
			n++;
		}
		if(roman=='C')
		{
			sum[n]=C;
			decimal+=sum[n];
			n++;
		}
		if(roman=='D')
		{
			sum[n]=D;
			decimal+=sum[n];
			n++;
		}
		if(roman=='M')
		{
			sum[n]=M;
			decimal+=sum[n];
			n++;
		}
		
		i++;
	    }
	
	printf("%d", decimal);
	
	
	
}
