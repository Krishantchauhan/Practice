// reverse of a number using recursive

#include <stdio.h>
int rev(int a)
{
    int sum;
    if (a == 0)
        return 0;
    else
    {
        sum = a % 10;
        printf("%d", sum);
        rev(a / 10);
    }
}
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    rev(a);
}