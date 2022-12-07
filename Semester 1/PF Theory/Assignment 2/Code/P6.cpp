#include <stdio.h>

int main()

{
	int num, palnum, palindrome, a, b, c, d, e; // 55155
	printf("Input a five digit: ");
	scanf("%i", &num);
	if(num>99999||num<10000)
	{
		printf("Error! Run the program again.");
	}
	palnum=num%10; // R 5
	num/=10; // 5515
	a=palnum;
	palnum=num%10; // R 5
	num/=10; // 551
	b=palnum;
	palnum=num%10; // R 1
	num/=10; // 5
	c=palnum; 
	palnum=num%10; // R 5
	num/=10;
	d=palnum; // 5
	palindrome=palnum;
	e=num%10; //5
	num/=10; // 0
	
	if(a==e&&b==d)
	{
		printf("It is a palindrome"); 
	}
	else
	{
		printf("It is not a palindrome");
	}
	
	
}
