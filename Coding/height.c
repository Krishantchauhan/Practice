#include <stdio.h>

int main()
{
    int l, b, h, s, k = 0;

    printf("Enter a number \n ");
    scanf("%d", &s);
    int vol[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d%d%d", &l, &b, &h);
        if (h < 41)
        {
            vol[k++] = l * b * h;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", vol[i]);
    }
}