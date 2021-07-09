#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int f[26], i, l, *val, max, ans;
    for (i = 0; i < 26; i++)
    {
        scanf("%d", &f[i]);
    }
    char str[10];
    scanf("%s", str);
    l = strlen(str);
    val = (int *)malloc(l * sizeof(int));
    for (i = 0; i < l; i++)
    {
        val[i] = f[str[i] - 'a'];
    }
    max = val[0];
    for (i = 1; i < l; i++)
    {
        if (val[i] > max)
            max = val[i];
    }
    ans = max * l * 1;
    printf("%d", ans);

    return 0;
}
