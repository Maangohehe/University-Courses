#include <stdio.h>
#include <math.h>
float relu(float rel);
float sig(float e, float x);
int main()
{
	 	float rel;
	int ch;
	float x=0, e=2.17, res=0;
	printf("Press 1 for sigmoid and 2 for ReLu: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
	printf("Input the value of x: ");
	scanf("%f", &x);
	res=sig(e,x);
	printf("The value is %f", res);
	break;
	 case 2:
	 	printf("Input the value for ReLu: ");
	 	scanf("%f", &rel);
	 	relu(rel);
	 	printf("ReLu is: %.2f", rel);
	 	break;
	 	default:
	 		printf("Input a valid choice.");
	 		break;
	 		
	}
	
}
float relu(float rel)
{
	if(rel<0)
	{
		printf("The value of ReLu cannot be less than 0.");
		return 0;
	}
	else{
		return rel;
	}
}
float sig(float e, float x)
{
	float res;
	res=1/(1+exp(-x));
	return res;
}
