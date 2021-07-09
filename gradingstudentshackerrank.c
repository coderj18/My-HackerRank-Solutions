#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*arr,i;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=38)
        {
            if(arr[i] % 5 == 0)
            {
                printf("%d\n",arr[i]);
            }
            else if((arr[i] + 1) % 5 == 0)
            {
                printf("%d\n",(arr[i] + 1));
            }
            else if((arr[i] + 2) % 5 == 0)
            {
                printf("%d\n",(arr[i] + 2));
            }
            else
            {
                printf("%d\n",arr[i]);
            }
        }
        else if(arr[i] < 38)
        {
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
