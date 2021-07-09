#include <stdio.h>

int main()
{
    int n, p, a, b;
    scanf("%d", &n);
    scanf("%d", &p);
    if ((n % 2 == 0) && (p % 2 != 0))
    {
        a = p / 2;
        b = ((n - p) / 2) + 1;
    }
    else
    {
        a = p / 2;
        b = (n - p) / 2;
    }
    if (a > b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", a);
    }

    return 0;
}
