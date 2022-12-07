#include <stdio.h>

int main(void)

{
	char vowel;
	
	printf("Please enter an alphabet: ");
	scanf("%s", &vowel);
	
	switch(vowel)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		   printf("It is a vowel.");
		   break;
		   default:
		   printf("It is a consonant.");
		   break;	
	}
}
