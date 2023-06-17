#include <stdio.h>

int main() {
    int a[100],n,i,d;
    printf("\n enter the number of elements");
    scanf("%d",&n);
    printf("\n the array elements");
    for(i=0;i<n;i++)
  
        scanf("%d",&a[i]);
   
    int temp[n];
    int k=0;
    printf("\n enter the position after which it should be rotated");
    scanf("%d",&d);
    for(i=d;i<n;i++)
    {
        temp[k]=a[i];
        k++;
    }
    for(i=0;i<d;i++)
    {
        temp[k]=a[i];
        k++;
    }
    printf("\n The elements after rotate are");
    for(i=0;i<n;i++)
    {
        a[i]=temp[i];
        printf("\t %d",a[i]);
    }
}
