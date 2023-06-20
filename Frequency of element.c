#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10], n,i,k,c=0;
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n Enter the element to be counted");
    scanf("%d",&k);
   for(int i=0;i<n;i++)
   {
       if(a[i]==k)
       {
           c++;
       }
   }
    printf("The num of occurence is %d",c);
    return 0;
}
