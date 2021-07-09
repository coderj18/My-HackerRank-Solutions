#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, *arr, i, temp, r, count = 0,flag = 0;
    scanf("%d", &t);
    arr = (int *)malloc(t * sizeof(int));
    for (i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
        temp = arr[i];
        while (temp != 0)
        {
            r = temp % 10;
            if(r == 0)
            flag = 1;
            if(flag != 1)
            {
            if (arr[i] % r == 0)
            {
                count++;
            }
            }
            flag = 0;
            temp = temp / 10;
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}
