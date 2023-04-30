//     1
//    232
//   34543
//  4567654
// 567898765

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int s = 2 * n - 1;
    int low = 0, high = s - 1;
    int a[s][s];
    while (n != 0)
    {
        for (int i = low; i <= high; i++)
        {
            for (int j = low; j <= high; j++)
            {
                if (i == low || i == high || j == low || j == high)
                    a[i][j] = n;
            }
        }
        high--;
        low++;
        n--;
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
