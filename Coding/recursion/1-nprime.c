#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    int flag = 0;

    for (int i = 1; i < a; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            printf("%d", i);
    }
}