#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,pd=0,sd=0,dif;
    scanf("%d", &n);
    int arr[n][n];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            pd = pd + arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)== (n-1))
            sd = sd + arr[i][j];
        }
    }
    
    
    dif = abs(pd-sd);
    
    printf("%d",dif);

    return 0;
}
