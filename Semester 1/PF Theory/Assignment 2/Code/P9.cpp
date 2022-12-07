#include <stdio.h>
#include <math.h>

int main()
{
	int roll, cal, binary1, binary2, binary3, binary4, binary5, binary6, binary7, dec;
	printf("Input the last two digits of your roll number(Must be an integer)\nInput:");
	scanf("%d", &roll);
	
	
	if(roll>99)
	{
		printf("Integer should not be greater than 2 digits nor less than 2 digits.");
		return 0;
	}
	
	//For dec to binary.
	else
	{
		cal=roll;
		binary1=cal%2;
		cal=cal/2;
		binary2=cal%2;
		cal=cal/2;
		binary3=cal%2;
		cal=cal/2;
		binary4=cal%2;
		cal=cal/2;
		binary5=cal%2;
		cal=cal/2;
		binary6=cal%2;
		cal=cal/2;
		binary7=cal%2;
		
		printf("Binary equivalent of %d is %d%d%d%d%d%d%d\n", roll, binary7, binary6, binary5, binary4, binary3, binary2, binary1);
	}
	//For binary to decimal.
	
	
	dec=(binary7*pow(2, 6))+(binary6*pow(2, 5))+(binary5*pow(2, 4))+(binary4*pow(2, 3))+(binary3*pow(2, 2))+(binary2*pow(2, 1))+(binary1*pow(2, 0));
	printf("Decimal equivalent of %d%d%d%d%d%d%d is %d\n", binary7, binary6, binary5, binary4, binary3, binary2, binary1, dec);


	if(dec==roll)
	{
		printf("Hurrah! Your program is correct.");
	}
	else
	{
		printf("Your program is wrong.");
	}
}
