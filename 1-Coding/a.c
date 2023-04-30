// #include <stdio.h>

// int main()
// {
//     int a, f, l, c = 1, temp, mid;
//     printf("Enter a number \n ");
//     scanf("%d", &a);
//     temp = a;
//     l = a % 10;
//     int count = -1;
//     while (temp != 0)
//     {
//         temp /= 10;
//         count++;
//     }
//     while (count--)
//         c = c * 10;
//     f = a / c;
//     int store = a % c;
//     store /= 10;
//     mid = store * 10;
//     mid = mid + f;
//     l = l * c;
//     l = l + mid;
//     printf("Swap =%d", l);
// }

#include <stdio.h>

int check(int temp)
{
    switch (temp)
    {
    case 0:
        return 6;
        break;
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;
    }
    return 0;
}

int main()
{
    // your code goes here
    // int t, temp2 = 0;
    // scanf("%d", &t);
    // for (int i = 0; i < t; i++)
    // {
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     int sum = a + b;
    //     int store = 0, po = 1;
    //     int temp = sum;
    //     while (temp > 0)
    //     {
    //         po = po * 10;
    //         temp /= 10;
    //     }
    //     po /= 10;
    //     printf("%d  ", po);
    //     printf("%d", sum);

    //     while (sum > 0)
    //     {
    //         temp2 = sum / po;
    //         store = check(temp2) + store;
    //         sum /= 10;
    //         po /= 10;
    //     }
    //     // printf("%d", store);
    // }

    int a = 357;
    printf("%d", a % 100);
    return 0;
}
