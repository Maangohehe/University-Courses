#include <stdio.h>

int main()
{
	int input, d1, i, starting;
	printf("Input the number you would like to encrypt.\nInput: ");
	scanf("%d", &input);
	
	while(input>0)
	{
		starting=input%10;
		starting=starting+65;
		input=input/10;
		d1=starting;
		printf("%c", d1);
		
	
	}
	
}
