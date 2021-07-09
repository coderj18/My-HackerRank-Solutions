#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i, max, min, maxc = 0, minc = 0;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxc++;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minc++;
        }
    }
    printf("%d %d", maxc, minc);
    return 0;
}
