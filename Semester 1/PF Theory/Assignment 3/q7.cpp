#include <stdio.h>
int main()
{
	int i, integer, check, cnt1, cnt2, cnt3;
	printf("Input an integer.\nInput: ");
	scanf("%d", &integer);
	
	while(1)
	{
		check=integer%10;
		integer=integer/10;
		if(check>0)
		{
			cnt1++;
		}
		else if(check<0) 
		{
			cnt2++; //i do not know how this count is always =1
		}
		else if(check==0)
		{
			cnt3++;
		}
		if(integer==0)
		{
			break;
		}
		
	}
	if(cnt1>cnt2 && cnt1>cnt3)
	{
		printf("Number of Positive Integers: %d.\nNumber of Negative Integers: %d.\nNumber of zeros: %d.\nThe majority digits were of 'Positive'", cnt1, cnt2, cnt3);
	}
	else if(cnt2>cnt1 && cnt2>cnt3)
	{
		printf("Number of Positive Integers: %d.\nNumber of Negative Integers: %d.\nNumber of zeros: %d.\nThe majority digits were of 'Negatives'", cnt1, cnt2, cnt3);
	}
	else if(cnt3>cnt1 && cnt3>cnt2)
	{
		printf("Number of Positive Integers: %d.\nNumber of Negative Integers: %d.\nNumber of zeros: %d.\nThe majority digits were of 'Zeros'", cnt1, cnt2, cnt3);
	}
}
