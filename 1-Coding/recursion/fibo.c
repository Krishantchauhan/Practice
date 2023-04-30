
#include <stdio.h>

int fib(int a)
{
    int sum;
    if (a == 0 || a == 1)
        return a;
    else
        return sum = fib(a - 1) + fib(a - 2);
}

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d ", fib(i));
    }
}