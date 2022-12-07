#include <stdio.h>

int main()

{
	char two, one;
	int choice, decimal, I=1, V=5, X=10, L=50, C=100, D=500, M=1000;
	printf("How many character(s) would be in there in your roman number?\nInput: ");
	scanf("%d", &choice);
	if(choice>2||choice==0)
	{
		printf("Input cannot be greater than 2 nor 0. Run the program again.");
	}
	if(choice==1)
    {
    	printf("What is the first character of your roman number\nInput: ");
    	scanf("%s", &one);
    
    
    switch(one)
    {
    	case 'I':
    		printf("Decimal equivalent is %d", I);
    		break;
    	case 'X':
    		printf("Decimal equivalent is %d", X);
    		break;
    	case 'L':
    		printf("Decimal equivalent is %d", L);
    		break;
    	case 'V':
    		printf("Decimal equivalent is %d", V);
			break;
		case 'C':
		printf("Decimal equivalent is %d", C);
		    break;
		case'D':
		printf("Decimal equivalent is %d", D);
		    break;
		case'M':
		printf("Decimal equivalent is %d", M);
		break;
		default:
		printf("Invalid input. Please run the program again!");
		break;	
	}
}
		
	    if(choice==2)
		{
			printf("Enter the first character\nInput: ");
			scanf("%s", &one);
			printf("Enter the second character\nInput: ");
			scanf("%s", &two);
			
			 if(one=='I'&&two=='V')
			{
				decimal=V-I;
			printf("Decimal equivalent is %d", decimal);
		}
		else if(one=='I'&&two=='X')
		{
			decimal=X-I;
			printf("Decimal equivalent is %d", decimal);
		}
		else if(one=='X'&&two=='L')
		{
			printf("Decimal equivalent is %d", decimal=L-X);
		}
		else if(one=='I'&&two=='I')
		{
			printf("Decimal equivalent is %d", decimal=I+I);
		}
		else if(one=='V'&&two=='V')
		{
			printf("Decimal equivalent is %d", decimal=V+V);
		}
		else if(one=='X'&&two=='X')
		{
			printf("Decimal equivalent is %d", decimal=X+X);
		}
		else if(one=='L'&&two=='L')
		{
			printf("Decimal equivalent is %d", decimal=L+L);
		}
		else if(one=='C'&&two=='C')
		{
			printf("Decimal equivalent is %d", decimal=C+C);
		}
		else if(one=='D'&&two=='M')
		{
			printf("Decimal equivalent is %d", decimal=D+D);
		}
		else if(one=='M'&&two=='M')
		{
			printf("Decimal equivalent is %d", decimal=M+M);
		}
		else if(one=='V'&&two=='I')
		{
			printf("Decimal equivalent is %d", decimal=V+I);
		}
		else if(one=='X'&&two=='I')
		{
			printf("Decimal equivalent is %d", decimal=X+I);
		}
		else if(one=='X'&&two=='V')
		{
			printf("Decimal equivalent is %d", decimal=X+V);
		}
		else if(one=='L'&&two=='I')
		{
			printf("Decimal equivalent is %d", decimal=L+I);
		}
		else if(one=='L'&&two=='V')
		{
			printf("Decimal equivalent is %d", decimal=L+V);
		}
		else if(one=='L'&&two=='X')
		{
			printf("Decimal equivalent is %d", decimal=L+X);
		}
		else if(one=='C'&&two=='I')
		{
			printf("Decimal equivalent is %d", decimal=C+I);
		}
			else if(one=='C'&&two=='V')
		{
			printf("Decimal equivalent is %d", decimal=C+V);
		}
			else if(one=='C'&&two=='X')
		{
			printf("Decimal equivalent is %d", decimal=C+X);
		}
			else if(one=='C'&&two=='L')
		{
			printf("Decimal equivalent is %d", decimal=C+L);
		}
		else if(one=='D'&&two=='I')
		{
		    printf("Decimal equivalent is %d", decimal=D+I);
		}
			else if(one=='D'&&two=='V')
		{
		    printf("Decimal equivalent is %d", decimal=D+V);
		}
			else if(one=='D'&&two=='X')
		{
		    printf("Decimal equivalent is %d", decimal=D+X);
		}
			else if(one=='D'&&two=='L')
		{
		    printf("Decimal equivalent is %d", decimal=D+L);
		}
			else if(one=='D'&&two=='C')
		{
		    printf("Decimal equivalent is %d", decimal=D+C);
		}
		else if(one=='M'&&two=='I')
		{
			printf("Decimal equivalent is %d", decimal=M+I);
		}
		else if(one=='M'&&two=='V')
		{
			printf("Decimal equivalent is %d", decimal=M+V);
		}
		else if(one=='M'&&two=='X')
		{
			printf("Decimal equivalent is %d", decimal=M+X);
		}
		else if(one=='M'&&two=='L')
		{
			printf("Decimal equivalent is %d", decimal=M+L);
		}
		else if(one=='M'&&two=='C')
		{
			printf("Decimal equivalent is %d", decimal=M+C);
		}
		else if(one=='M'&&two=='D')
		{
			printf("Decimal equivalent is %d", decimal=M+D);
		}
		else if(one<two)
		{
			printf("First character cannot be less than second character!");
		}
		
		
		}
		
		
		
}
	
	
	


	
