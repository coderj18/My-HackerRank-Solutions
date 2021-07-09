#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,*bill,i,b,total=0,m=0,final;
    scanf("%d %d",&n,&k);
    bill = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        total = total + bill[i];
    }
    total = total - bill[k];
    final = total/2;
    if(final == b)
    printf("Bon Appetit\n");
    else
    printf("%d",b - final);

    return 0;
}
