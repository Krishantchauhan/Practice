#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number \n ");
    scanf("%d %d", &a, &b);
    int gcd, min;
    if (a > b)
        min = b;
    else
        min = a;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("%d", gcd);
}