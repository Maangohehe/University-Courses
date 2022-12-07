#include <stdio.h>
int main()
{
	int input, i, j;
	printf("Input a single digit integer.\nInput: ");
	scanf("%d", &input);
	if(input>25)
	{
		printf("Invalid Input.");
		return 0;
	}
	input=input+96;
    for(i=97; i<=input; i++)
    {
    	for(j=97; j<=i; j++)
    	{
    		printf("%c", j);
		}
		printf("\n");
	}
	
}
