#include <stdio.h>

int main()
{
	float English=0, Maths=0, Programming=0, Algebra=0, ICT=0, average=0, sum=0, percentage=0, total=250;
	
	printf("How many marks did you get in Eglish?= \n");
	scanf("%f", &English);
	printf("How many marks did you get in Maths= \n");
	scanf("%f", &Maths);
	printf("How many marks did you get in Programming?= \n");
	scanf("%f", &Programming);
	printf("How many marks did you get in Algebra= \n");
	scanf("%f", &Algebra);	
	printf("How many marks did you get in ICT?= \n");
	scanf("%f", &ICT);
	sum= English+Maths+Programming+Algebra+ICT;
	percentage= (sum/total)*100;
	average= (sum/5);
	printf("The sum of marks is= %f", sum);
	printf("\nThe percentage is= %f", percentage);
	printf("\nThe average is= %f", average);
	return 0;
	
}

