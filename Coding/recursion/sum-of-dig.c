#include <stdio.h>

int sum(int a)
{
    int s;
    if (a < 10)
        return a;
    else
    {
        return sum(a / 10) + sum(a % 10);
    }
}

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    printf("%d", sum(a));
}