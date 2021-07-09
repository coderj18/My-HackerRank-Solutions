#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,tallest,i,flag = 0,*ptr;
    scanf("%d",&n);
    ptr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr + i);
    }
    tallest = ptr[0];
    for(i=1;i<n;i++)
    {
        if(ptr[i] > tallest)
        tallest = ptr[i];
    }
    for(i=0;i<n;i++)
    {
        if(ptr[i] == tallest)
        flag ++;
    }
    printf("%d",flag);
    return 0;
}

