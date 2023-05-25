#include <stdio.h>

int main()
{
    // int a[6] = {7, 2, 5, 3, 5, 3};

    // int b[8] = {7, 2, 5, 4, 6, 3, 5, 3};

    int n, m;

    const int N = 1e6 + 2;
    int idx[N] = {0};

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        idx[a[i]]++;
    }

    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < m; i++)
    {
        idx[b[i]]--;
    }

    for (int i = 0; i < N; i++)
    {
        if (idx[i] != 0)
            printf("%d ", i);
    }
    return 0;
}