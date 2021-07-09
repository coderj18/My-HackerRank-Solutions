#include <stdio.h>
#include <string.h>

int main()
{
    int g, n, i, j;
    char str[100];
    scanf("%d", &g);

    for (i = 1; i <= g; i++)
    {
        int f[26] = {0}, count = 0, flag = 0;
        scanf("%d", &n);
        scanf("\n");
        scanf("%[^\n]%*c", str);
        //l = strlen(str);
        for (j = 0; j < n; j++)
        {
            if (str[j] != '_')
                f[(str[j] - 'A')]++;
            else if (str[j] == '_')
                count++;
        }
        if (count >= 1)
        {
            for (j = 0; j < 26; j++)
            {
                if (f[j] != 0 && f[j] == 1)
                    //printf("%c %d\n",(j+65),f[j]);
                    flag = 1;
            }
        }
        if (count == 0)
        {
            for (j = 0; j < 26; j++)
            {
                if (f[j] != 0 && f[j] == 1)
                    //printf("%c %d\n",(j+65),f[j]);
                    flag = 1;
            }
        }

        printf("%s\n", (flag ? "NO" : "YES"));
    }

    /*for(j=0;j<26;j++)
        {
            if(f[j] != 0)
            printf("%c %d\n",(j+65),f[j]);
        }*/
        return 0;
}


