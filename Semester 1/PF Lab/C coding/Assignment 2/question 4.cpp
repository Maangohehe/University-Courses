#include <stdio.h>
#include <math.h> //For this question we will use the math library

int main()
// Note that the formuala to calculate hypotenuse is: Hypotenuse^2= Base^2+Perpendicular^2.
{
	float base, perpendicular, hypotenuse, hypotenuse_square; //We will add the appropriate variables.
	printf("Type the value of base = "); // Let the user input the value of base.
	scanf("%f", &base); //This will store the value of base into the variable.
	printf("Type the value of perpendicular = ");// Let the user input the value of perpendicular.
	scanf("%f", &perpendicular); //This will store the value of perpendicular into the variable.
	hypotenuse_square= pow(base, 2)+pow(perpendicular,2); //This math function is used to power a number. 
	hypotenuse= sqrt(hypotenuse_square); //This math function is used to calculate square root of a number.
	printf("The value of Hypotenuse is = %.3f", hypotenuse); //Value of hypotenuse will be displayed.
	
}
