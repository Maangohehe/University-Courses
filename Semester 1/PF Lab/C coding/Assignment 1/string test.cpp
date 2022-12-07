#include <stdio.h>

int main(void)

{
	int i, j, height;
	
	do{
		printf("What should be the height of the blocks =  ");
		scanf("%i", &height);
	}
	while(height<1 || height>8);
	
	
	
	for(i = 0; i<=height; ++i)
	{
		
		for(j = 0; j<=i; j++)
		{
		
		printf("#"); 
	}
	
	printf("\n");
	}
	
}
