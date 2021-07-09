#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (abs(a - c) > abs(b - c))
        {
            printf("Cat B\n");
        }
        else if (abs(b - c) > abs(a - c))
        {
            printf("Cat A\n");
        }
        else if (abs(a - c) == abs(b - c))
        {
            printf("Mouse C\n");
        }
    }

    return 0;
}
