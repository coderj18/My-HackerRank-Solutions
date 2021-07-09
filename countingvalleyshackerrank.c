#include <stdio.h>

int main()
{

    int n, i, valley = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (count == 0 && str[i] == 'D')
            valley++;
        if (str[i] == 'U')
            count++;
        else
            count--;
    }
    printf("%d", valley);
    return 0;
}