#include <stdio.h>
int main()
{
	char name[3][100]={0};
	int i;
	for(i=0; i<3; i++)
	{
		scanf("%s", &name[i]);
	}
	for(i=0; i<3; i++)
	{
		printf("%s\n", name[i]);
	}
}
