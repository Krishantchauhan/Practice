#include <stdio.h>

int main()
{
    int a, rem, bin = 0, temp = 1;
    printf("Enter a number \n ");
    scanf("%d", &a);
    while (a != 0)
    {
        rem = a % 2;
        temp = temp * 10 + rem;
        a /= 2;
    }
    printf("%d\n", temp);
    rem = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        bin = bin * 10 + rem;
        temp /= 10;
    }
    bin /= 10;
    printf("%d", bin);
}