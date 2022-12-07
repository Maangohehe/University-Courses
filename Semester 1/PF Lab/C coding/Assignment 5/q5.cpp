#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int num, i, j, root, nroot, A, B;
	printf("Input the perfect square.\nInput: ");
	scanf("%d", &num);
	if(num<0)
	{
		printf("Please input a number greater than 0.");
		
	}
	
	for(i=1; i<=num; i++)
	{
		if(num==i*i)
		{
			root=sqrt(num);
			printf("It is a perfect square.\n");
			printf("The square root of perfect square is %d", root);
			break;
		}
		
		
	}
	if(num!=i*i)
	{
		printf("It is not a perfect square.");
		
	}

}
