#include <stdio.h>
int main()
{
	int integer1, integer2, integer3, integer4, integer5, integer6, integer7, average, store, oct1, oct2, oct3, cnt, even1, even2, even3;
	
		printf("Enter 1 Decimal: ");
		scanf("%d", &integer1);
		printf("Enter 2 Decimal: ");
		scanf("%d", &integer2);
		printf("Enter 3 Decimal: ");
		scanf("%d", &integer3);
		printf("Enter 4 Decimal: ");
		scanf("%d", &integer4);
		printf("Enter 5 Decimal: ");
		scanf("%d", &integer5);
		printf("Enter 6 Decimal: ");
		scanf("%d", &integer6);
		printf("Enter 7 Decimal: ");
		scanf("%d", &integer7);
		average=(integer1+integer2+integer3+integer4+integer5+integer6+integer7)/7;
		printf("The average is: %d\n", average);
		while(average!=0)
		{
			oct1=average%8;
			average=average/8;
			even1=oct1%2;
			oct2=average%8;
			average=average/8;
			even2=oct2%2;
			oct3=average%8;
			even3=oct3%2;
			average=average/8;
			if(even1==0 || even2==0 || even3==0)
			{
				cnt++;
				}	
			
		}
		printf("%d%d%d\n", oct3, oct2, oct1);
		printf("Number of even digits in octal number is: %d", cnt);
		
	
}
