#include <stdio.h>

int main()

{
	float celsius, fahrenheit, kelvin; //First we will make the appropriate variables.
	printf("Type the temperature in Celcius = "); //We will make the code for the user to input the value.
	scanf("%f", &celsius); //scanf is used to take the input.
	fahrenheit= (9/5.0)*celsius+32; //We will use the formula to convert celsius to fahrenheit using this formula and storing the calculated value into the variable.
	printf("Celsius into Fahrenheit = %.3f\n", fahrenheit); //This will print the converted value.
	kelvin= celsius+273; // This formula is used to convert celsius to kelvin.
	printf("Celsius to Kelvin = %.3f\n", kelvin); //Converted value into kelvin will be displayed here.
	
}
