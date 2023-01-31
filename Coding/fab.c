#include <stdio.h>

int main()
{
    int a, b = 0, c = 1, sum = 0;
    printf("Enter a number \n ");
    scanf("%d", &a);

    while (a > sum)
    {
        printf("%d ", sum);
        b = c;
        c = sum;
        sum = b + c;
    }
    
}