//     1
//    232
//   34543
//  4567654
// 567898765

#include <stdio.h>

int main(void)
{
    int k = 4;
    int ip = 4;
    int x = 0;
    for (int i = 1; i < 2 * ip; i++)
    {
        int flag = i;
        k = ip;
        i <= (2 * ip) / 2 ? x++ : x--;
        for (int j = 1; j < 2 * ip; j++)
        {
            if (j <= x)
            {
                printf("%d", k);
            }
            else
            {
                printf("%d", k);
            }
            if (flag != 1)
            {
                j <= (2 * ip) / 2 ? k-- : k++;
                flag--;
            }

            if (k < 1)
                k++;
        }
        printf("\n");
    }
    return 0;
}
