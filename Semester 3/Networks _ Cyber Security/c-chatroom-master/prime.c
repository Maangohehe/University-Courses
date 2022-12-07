#include <stdio.h>
int IsPrime(int n)
{
    if (n == 2 || n == 3)
        return 0;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}
int main(void)
{
    int p;
    printf("Input a number: ");
    scanf("%d", p);
    if (IsPrime(p))
        printf("Prime\n");
    else
        printf("Not prime\n");
}