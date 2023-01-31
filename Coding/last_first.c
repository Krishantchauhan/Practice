#include <stdio.h>

int main()
{
    int a, rev = 0, rem, store;
    printf("Enter a number \n ");
    scanf("%d", &a);

    int temp = a;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    while (rev > 0)
    {
        store = rev % 10;
        switch (store)
        {
        case 1:
            printf(" ONE");
            break;
        case 2:
            printf(" TWO");
            break;
        case 3:
            printf(" THREE");
            break;
        case 4:
            printf(" FOUR");
            break;
        case 5:
            printf(" FIVE");
            break;
        case 6:
            printf(" SIX");
            break;
        case 7:
            printf(" SEVEN");
            break;
        case 8:
            printf(" EIGHT");
            break;
        case 9:
            printf(" NINE");
            break;
        case 0:
            printf(" ZERO");
            break;

        default:
            printf("INCORR");
            break;
        }
        rev /= 10;
    }
}