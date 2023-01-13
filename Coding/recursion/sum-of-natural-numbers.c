// sum of natural numbers

#include <stdio.h>

int sum(int a)
{
    if (a == 0)
        return 0;
    else
        return a + sum(a - 1);
}

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    printf("%d", sum(a));
}