#include <stdio.h>

int main()
{
	int m, a, seed, i, random, cnt=0, c;
	printf("Input the pool of your qestions.\nInput: ");
	scanf("%d", &m);
	printf("Input the amount of random questions you want.\nInput: ");
	scanf("%d", &random);
	printf("Input the first digit of your roll number.\nInput: ");
	scanf("%d", &a);
	printf("Input the seed.\nInput: ");
	scanf("%d", &seed);
	printf("Input the third digit of your roll number.\nInput: ");
	scanf("%d", &c);
	
	for(i=0; i<m; i++)
	{
		cnt++;
		seed=(a*seed+c)%m;
		printf("Q%d should be %d.\n", cnt, seed);
		if(cnt==random)
		{
			break;
		}
		
		
	}
	
	
	
	
	
}
