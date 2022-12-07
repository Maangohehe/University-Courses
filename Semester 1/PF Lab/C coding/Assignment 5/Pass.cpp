#include <stdio.h>

int main()
{
	long long int pass, check, check2, cnt0, cnt1, sum, i;
	printf("Input the password.\nInput: ");
	scanf("%lld", &pass);
	if(pass>=10000000 && pass<=999999999999999)
	{
		while(i<pass)
		{
			check=pass%10;
			pass=pass/10;
			check2=check%2;
			if(check2==0)
			{
				cnt1++;
			}
			else
			{
				cnt0++;
			}
			
			sum=check+check+check+check+check+check+check+check+check+check+check+check+check+check+check;
				
		}
		if(cnt1>=4&&cnt0>=4&&sum>10)
			{
				printf("Good Password");
			}
		
	}
	else
	{
		printf("Bad Password");
	}
	
}
