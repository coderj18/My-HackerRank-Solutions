#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t,a,b,m,n,*app,*ora,i,counta = 0,counto = 0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    app = (int*)malloc(m*sizeof(int));
    ora = (int*)malloc(n*sizeof(int));
    for(i=0;i<m;i++)
    {
        scanf("%d",&app[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ora[i]);
    }
    for(i=0;i<m;i++)
    {
        app[i] = app[i] + a;
    }
    for(i=0;i<n;i++)
    {
        ora[i] = ora[i] + b;
    }
    for(i=0;i<m;i++)
    {
        if(app[i] >= s)
        {
            if(app[i] <= t)
            counta++;
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(ora[i] >= s)
        {
            if(ora[i] <= t)
            counto++;
        }
        
    }
    printf("%d\n",counta);
    printf("%d\n",counto);

    return 0;
}
