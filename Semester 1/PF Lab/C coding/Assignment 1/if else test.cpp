#include <stdio.h>

int main()

{
	float chem, bio, maths, physics, isl, total, obtained, percentage;
	printf("What are the total marks? =");
	scanf("%f", &total);
	printf("chem");
	scanf("%f", &chem);
	printf("bio");
	scanf("%f", &bio);
	printf("maths");
	scanf("%f", &maths);
	printf("physics");
	scanf("%f", &physics);
	printf("isl");
	scanf("%f", &isl);
	obtained= chem+bio+maths+physics+isl;
	percentage= (obtained/total)*100;
	printf("The percentage is = %f\n", percentage);
	
	
	
	
		
}
