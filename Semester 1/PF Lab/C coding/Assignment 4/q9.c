#include<stdio.h>
int main(){
	
	int intgr, verify, choice, intgr0, age, intgr1, intgr2, intgr3, intgr4, sum;
	printf("Input a 4 digit integer\nInput: ");
	scanf("%d", &intgr);
	printf("What is the gender of the person.\n0) Female.\n1)Male.\n\nInput:  ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("What is the age of the person.\nInput: ");
			scanf("%d", &age);
			
			intgr=intgr+age+1;
		
			
			
			intgr1=intgr%10;
			intgr=intgr/10;
			
			intgr2=intgr%10;
			intgr=intgr/10;
			
			intgr3=intgr%10;
			intgr=intgr/10;
			
			intgr4=intgr%10;
			intgr=intgr/10;
			
			sum=intgr1+intgr2+intgr3+intgr4;
			sum=sum%5;
			printf("The cryptographic output is %d\n", sum);
			break;
			
			case 0:
			printf("What is the age of the person.\nInput: ");
			scanf("%d", &age);
			
			intgr=intgr+age;
		
			
			
			intgr1=intgr%10;
			intgr=intgr/10;
			
			intgr2=intgr%10;
			intgr=intgr/10;
			
			intgr3=intgr%10;
			intgr=intgr/10;
			
			intgr4=intgr%10;
			intgr=intgr/10;
			
			sum=intgr1+intgr2+intgr3+intgr4;
			sum=sum%5;
			printf("The cryptographic output is %d\n", sum);
			break;
			
	}
	printf("Input your verification code\nInput: ");
	scanf("%d", &verify);
	if(verify==sum)
	{
	printf("Success! Verification code saved inside the database.\n");
	}
	else {
	printf("Invalid Verificaton code!\n");
	}
	
	
	
}
