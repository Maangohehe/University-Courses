#include<stdio.h>
int fibb(int num);
int main()
{
    int num,c=0,i;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Fibonacci Series:\n");
    for(i=1;i<=num;i++)
    {
        printf("%d, ", fibb(c));
        c++;
    }
}
int fibb(int num)
{
    if(num==0)
    {
        return 0;
    }

    else if(num==1)
    {
        return 1;
    }
    else
    {
        return (fibb(num-1)+fibb(num-2));
    }
	
	}
