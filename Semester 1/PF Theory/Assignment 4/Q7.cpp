#include <math.h>
#include <stdio.h>

int main()
{
	float res[100], angle[100], side1[100], side2[100], max[100]; 
	int i, n=6, j;
	for(i=0; i<n; i++)
	{
	printf("Input the first side of the triangle: ");
	scanf("%f", &side1[i]);
	printf("Input the second side of the triangle: ");
	scanf("%f", &side2[i]);
	printf("Input the angle of the triangle: ");
	scanf("%f", &angle[i]);
		
	} 

    for(i=0; i<n; i++)
    {
    	res[i]=(1.0/2.0)*side1[i]*side2[i]*sin(angle[i]);
	
	}
	for(i=0; i<n; i++)
	{
		
	printf("The area of triangle is: %.2f\n", res[i]);
	}
//	to find largest.
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(res[i]>res[j])
			{
				max[100]=res[i];
			}
		}
	}
	printf("The largest area is %.2f", max[100]);
}


