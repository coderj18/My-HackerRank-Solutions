#include <stdio.h>

int main()
{
   long int n;
   scanf("%ld",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   long int sum=0;
   for(int j=0;j<n;j++)
   {
       sum = sum + arr[j];
   }
   printf("%ld",sum);

    return 0;
}
