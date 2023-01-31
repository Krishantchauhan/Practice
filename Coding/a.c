#include <stdio.h>

int main()
{
    int a, f, l, c = 1, temp, mid;
    printf("Enter a number \n ");
    scanf("%d", &a);
    temp = a;
    l = a % 10;
    int count = -1;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    while (count--)
        c = c * 10;
    f = a / c;
    int store = a % c;
    store /= 10;
    mid = store * 10;
    mid = mid + f;
    l = l * c;
    l = l + mid;
    printf("Swap =%d", l);
}