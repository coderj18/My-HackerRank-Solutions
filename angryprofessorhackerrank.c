#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, k, *arr, i, j, m, pos = 0, neg = 0;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &k);
        arr = (int *)malloc(n * sizeof(int));
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (m = 0; m < n; m++)
        {
            if (arr[m] <= 0)
            {
                neg++;
            }
            else if (arr[m] > 0)
            {
                pos++;
            }
        }
        if (neg >= k)
            printf("NO\n");
        else if (neg < k)
            printf("YES\n");
        neg = 0;
        pos = 0;
    }

    return 0;
}
