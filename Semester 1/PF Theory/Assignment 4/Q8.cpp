#include <stdio.h>
struct date{
	int day, month, year;
};
int main()
{
	struct date n, nn;
	printf("Input the first date (dd/mm/year): ");
	scanf("%d %d %d", &n.day, &n.month, &n.year);
	printf("Input the second date (dd/mm/year): ");
	scanf("%d %d %d", &nn.day, &nn.month, &nn.year);
	if((n.day==nn.day)&&(n.month==nn.month)&&(n.year==nn.year))
	{
		printf("Equal.");
	}
	else{
		printf("Unequal.");
	}
}

