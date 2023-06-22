#include <stdio.h>
int main()
{
    int n,i,arr[100],d,sum=0;
    printf("\n Enter the num of elements in an array");
    scanf("%d",&n);
    printf("\n Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   d=((n+1)*(n+2))/2;
   for(i=0;i<n;i++)
   {
       sum+=arr[i];
   }
   printf("\n the missing num is %d",d-sum);
   
    return 0;
}
