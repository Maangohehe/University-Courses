#include <stdio.h>

int main()
{
	int dob, oct, oct2;
	printf("Input your Date of birth.\nInput: ");
	scanf("%d", &dob);
	if(dob>31)
	{
		printf("Invalid!");
		return 0;
	}
    while(dob!=0)
	{
		oct=dob%8;
		dob=dob/8;
		oct2=dob%8;
		dob=dob/8;
	}
	printf("%d Decimal = %d%d Octal", dob, oct2, oct);
	
	
	
}
