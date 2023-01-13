// decimal to binary

#include <stdio.h>
int binary(int a)
{
    if (a == 0)
        return 0;
    else
        binary(a / 2);
    printf("%d", a % 2);
}
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);
    binary(a);
}