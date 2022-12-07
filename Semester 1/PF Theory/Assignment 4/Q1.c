#include <stdio.h>
float perc(float mark1, float mark2, float mark3);
float avg(float mark1, float mark2, float mark3 );
int main()
{
	float mark1, mark2, mark3, result, result1;
	printf("Input your marks out of 100: \n");
	scanf("%f %f %f", &mark1, &mark2, &mark3);
	result=perc(mark1, mark2, mark3);
	printf("Percentage is %.2f percent.\n", result);
	result1=avg(mark1,mark2,mark3);
	printf("The average is %.2f.", result1);
}
float perc(float mark1, float mark2, float mark3)
{
	float sum;
	float result;
	sum=mark1+mark2+mark3;
	result=(sum/300.0)*100;
	return result;
}
float avg(float mark1, float mark2, float mark3)
{
	float sum, result1;
	sum=mark1+mark2+mark3;
	result1=sum/3;
	return result1;
}
