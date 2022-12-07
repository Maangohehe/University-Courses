// create program where user inputs a number of how many lama should be there initially.
// user inputs the number to tell how many lamas he want in the end.
// The program should tell the users how many years it would take for the lamas to reach the max numbers defined by the user.
// loss: n/4
// Gain: n/3
#include <stdio.h>

int main(void)

{
	int start_size, end_size, years= 0;
	do
	{
		printf("What should be the starting size of the lamas = ");
		scanf("%i", &start_size);
		
	}
	while(start_size<=9);
	
	do
	{
		printf("What should be the max number of lamas you want = ");
		scanf("%i", &end_size);
	}
	while(end_size<start_size);
	
   
	
	while(start_size<end_size)
	{
	    start_size= start_size+(start_size/3)-(start_size/4);
		years++;	
	}
	printf("Years: %i", years);
}
