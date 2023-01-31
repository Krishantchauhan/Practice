#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number \n ");
    scanf("%d %d", &a, &b);
    int lcm, max;
    if (a < b)
        max = b;
    else
        max = a;

    for (int i = max; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("%d", lcm);
}