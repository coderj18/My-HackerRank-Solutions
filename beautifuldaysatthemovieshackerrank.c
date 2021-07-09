#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int revno(int k)
{ 
    int r,sum=0;
    while(k!=0)
    {
        r = k % 10;
        sum = sum*10 + r;
        k = k / 10;
    }
    return (sum);
}

int main()
{
    int up,low,k,l,i,diff,count=0;
    scanf("%d %d %d",&low,&up,&k);
    for(i=low;i<=up;i++)
    {
        l = revno(i);
        diff = abs(i - l);
        if(diff % k == 0)
        count++;
    }
    printf("%d",count);

    return 0;
}
