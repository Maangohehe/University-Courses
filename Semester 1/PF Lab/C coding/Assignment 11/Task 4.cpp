#include <stdio.h>
int wordc(char *txt);
int main()
{
	char txt[1000];
	int size;
	printf("Input a sentence: ");
	scanf("%s", &txt);
	size=wordc(txt);
}

int wordc(char *text)
{
	int i;
	int s=0;
	for(i=0; text[i]; i++)
	{
		if(text[i]==32)
		s++;
	}
	printf("%d", s);
}
