#include <stdio.h>

int main()
{
    int n = 5;
    int mat[n][n];
    int k = 13;
    // int mat[5][5] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    const int N = 1e6 + 2;
    int idx[N] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            idx[mat[i][j]]++;
        }
    }

    while (k > (n * n))
        k = k - n * n;
    // printf("k=%d ", k);
    int count = 0;
    int min = -1;
    for (int i = 0; i < N; i++)
    {
        if (k == 1 && idx[i] != 0)
            return i;

        if (idx[i] != 0 && count < k)
        {
            int temp = idx[i];
            if(temp>1)
                k--;
            while (temp > 2)
            {
                k++;
                temp--;
                count++;
            }
            printf("k=%d ", k);
            min = i;
            count++;
        }
    }
    // return min;
    printf("%d", min);
}