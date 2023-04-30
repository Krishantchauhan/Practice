#include <stdio.h>

int main()
{
    int a, rem, dec = 0, po = 1;
    printf("Enter a number \n ");
    scanf("%d", &a);
    while (a != 0)
    {
        rem = a % 10;
        dec = dec + (po * rem);
        a /= 10;
        po = po * 8;
    }
    printf("%d", dec);
}