#include <stdio.h> 
#include <math.h>

int main()

{
	float x, power, denominator;
	printf("Type value of x = ");
	scanf("%f", &x);
	printf("Square root of x = %.3f\n", sqrt(x));
	printf("Cube root of x= %.3f\n", cbrt(x));
	printf("Exponential function of x = %.3f\n", exp(x));
	printf("Natural log of x = %.3f\n", log(x));
	printf("Log of x = %.3f\n", log10(x));
	printf("Absolute value of x as floating point = %.3f\n", fabs(x));
	printf("Round value of x to the smallest integer = %.3f\n", ceil(x));
	printf("Round value of x to largest integer = %.3f\n", floor(x));
	printf("Type value of power for x to be raised = ");
	scanf("%f", &power);
	printf("x raised to the power y = %.3f\n", pow(x, power));
	printf("Type value of denominator = ");
	scanf("%f", &denominator);
	printf("Remainder of x/y as a floating point = %.3f\n", fmod(x, denominator));
	printf("Trigonometric sin of x = %.3f\n", sin(x));
	printf("Trigonometric cos of x = %.3f\n", cos(x));
	printf("Trigonometric tan of x = %.3f\n", tan(x));
	
}
