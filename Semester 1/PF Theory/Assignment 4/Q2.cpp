#include <stdio.h>
int sum_of_digits(int digits, int sum);
int main()
{
	int result, sum, digits, a;
	printf("Input the 5 digit integer: ");
	scanf("%d", &digits);
	if(digits<9999)
	{
		return 0;
	}
	result=sum_of_digits(digits, sum);
	printf("%d", result);
}
int sum_of_digits(int digits, int sum)
{

	int result=digits%10;
	sum=sum+result;
	digits/=10;
	if(digits!=0)
	{
		sum_of_digits(digits,sum);
	}
	else{
		
	return sum;
	}
	

}
