#include <stdio.h>

int main()
{
    int a[3],b[3],a_s=0,b_s=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j=0;j<3;j++)
    {
        scanf("%d", &b[j]);
    }
    for(int k=0;k<3;k++)
    {
        if(a[k] == b[k])
        continue;
     (a[k]>b[k] ? a_s++ : b_s++);
    }
    printf("%d %d",a_s,b_s);
    
    
    return 0;
}
