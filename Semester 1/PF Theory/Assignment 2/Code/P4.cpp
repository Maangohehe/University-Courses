#include <stdio.h>

int main()

{
	int integer, starting, cnt, last, initial;
	
	printf("Input a four digit positive integer = ");
	
	scanf("%i", &integer);
	
		if(integer>9999||integer<1000)
	{
		printf("Error! You must enter a four digit positive Integer. Run the program again.\n");
	}
	else 
	{
		initial=integer;
		printf("Input the last digit of your integer = ");
		scanf("%i", &last);

 }
	starting=integer%10; // R 3
	
	if(starting==last)
	{
		cnt++;
		integer/=10;
		starting=integer%10; // R 2
		if(starting==last)
		{
			cnt++;
		}
		integer/=10;
		starting=integer%10; // R 1
		if(starting==last)
		{
			cnt++;
		}
		integer/=10;
		starting=integer%10;
		if(starting==last)
		{
			cnt++;
		}
		printf("%i is occurring %i times.", last, cnt);
	}

}
