#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, *key, *dri, n, m, i, j, k, *sum, max;
    scanf("%d %d %d", &b, &n, &m);
    key = (int *)malloc(n * sizeof(int));
    dri = (int *)malloc(m * sizeof(int));
    sum = (int *)malloc((m * n) * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &key[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &dri[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < (m * n); k++)
            {
                sum[k] = key[i] + dri[j];
            }
        }
    }
    max = sum[0];
    for (i = 1; i < (m * n); i++)
    {
        if (sum[i] > max)
        {
            max = sum[i];
        }
    }
    if (max <= b)
    {
        printf("%d", max);
    }
    else if (max > b)
    {
        printf("-1");
    }

    return 0;
}
/*The above program written by me fails to execute within the standard time limit but the logic 
is correct a better and more accurate solution is as shown below*/
#include <stdio.h>

int main()

{

    int b, usb[1000], key[1000], no = -1, i, j, n, m, result = 0;

    scanf("%d %d %d", &b, &n, &m);

    for (i = 0; i < n; i++)

    {

        scanf("%d", &key[i]);
    }

    for (j = 0; j < m; j++)

    {

        scanf("%d", &usb[j]);
    }

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < m; j++)

        {

            result = key[i] + usb[j];

            if (result > no && result <= b)

            {

                no = result;
            }
        }
    }

    printf("%d", no);
}
