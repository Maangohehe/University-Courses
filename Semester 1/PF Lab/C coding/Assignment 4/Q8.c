#include <stdio.h>
int main()
{
	int intgr, choice, w, x, y, z;
	char chat1, chat2, chat3, chat4;
	
	printf("What operation would you like to perform?\n 1. Encrypt\n 2. Decrypt\nInput any one number to do the respective operation: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Input a 4 digit integer\nInput: ");
	scanf("%d", &intgr);
	if(intgr>9999||intgr<1000)
	{
		printf("\nInput a valid 4 digit integer");
	}
	else
	{	
	}
	int intgr1, intgr2, intgr3, intgr4;
	intgr1=intgr%10;
	intgr=intgr/10;
	
	intgr2=intgr%10;
	intgr=intgr/10;
	
	intgr3=intgr%10;
	intgr=intgr/10;
	
	intgr4=intgr%10;
	intgr=intgr/10;
	
    intgr4=intgr4+65;
    intgr3=intgr3+65;
    intgr2=intgr2+65;
    intgr1=intgr1+65;
    
	printf("%c%c%c%c", intgr1, intgr2, intgr3, intgr4);
			
			break;
	    
	    case 2:
	    	
	    	
	    	
	    	printf("Input the first  character (A-Z)\nInput 1:  ");
	    	scanf("%s", &chat1);
	    	w=chat1-65;
	    	printf("Input the second character (A-Z)\nInput 2:  ");
	    	scanf("%s", &chat2);
	    	x=chat2-65;
	    	printf("Input the third character (A-Z)\nInput 3:  ");
	    	scanf("%s", &chat3);
	    	y=chat3-65;
	    	printf("Input the fourth character (A-Z)\nInput 4:  ");
	    	scanf("%s", &chat4);
	    	z=chat4-65;
	    	printf("%d%d%d%d", z, y, x, w);
	    	
	    	

	    	
	    	
	    	
	}
	
}
