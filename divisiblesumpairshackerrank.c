#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,*arr,i,j,sum = 0,count = 0;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum = arr[i] + arr[j];
            if(sum % k == 0)
            {
                count++;
            }
            sum = 0;
        }
    }
    printf("%d",count);

    return 0;
}
