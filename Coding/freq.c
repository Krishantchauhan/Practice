#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int pos, n;
    scanf("%d", &n);
    int freq[100], pos;
    for (int i = 0; i < 100; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pos);
        freq[pos]++;
    }

    for (int i = 0; i < 100; i++)
        printf("%d ", freq[i]);

    return 0;
}