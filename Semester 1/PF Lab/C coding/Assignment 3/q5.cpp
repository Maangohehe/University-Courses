#include <stdio.h>

int main(void)

{
	int tip, quantity, quantity2, quantity3, quantity4, tea=50, biscuits=20, coffee=100, sandwich=75;
    
	printf("Price of Tea: %dRs\n", tea);
	printf("Price of Biscuits: %dRs\n", biscuits);
	printf("Price of coffee: %dRs\n", coffee);
	printf("Price of sandwich: %dRs\n\n\a", sandwich);
	
	printf("Quantity of Tea you would to order: ");
	scanf("%d", &quantity);
	printf("Quantity of Biscuits you would to order: ");
	scanf("%d", &quantity2);
	printf("Quantity of Coffee you would to order: ");
	scanf("%d", &quantity3);
	printf("Quantity of Sandwich you would to order: ");
	scanf("%d", &quantity4);
	
	int total= (((tea*quantity)+(biscuits*quantity2)+(coffee*quantity3)+(quantity4*sandwich)+100));
	int tax= total*0.1;
	total=total+tax;
	printf("This will be your bill, would you like to give a tip? : ");
	scanf("%d", &tip);
	total=total+tip;
	printf("Total: %d", total);
}
