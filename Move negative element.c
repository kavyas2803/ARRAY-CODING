/*Enter the num of elements in an array9
Enter the array elements-12 11 -13 -5  6 -7 5 -3 -6
-12	 -13	 -5	 -7	 -3	 -6	 11	 6	 5*/

#include <stdio.h>

int main() {
    int n,i,arr[100];
    printf("\n Enter the num of elements in an array");
    scanf("%d",&n);
    printf("\n Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]<0)
      {
          printf("\t %d",arr[i]);
      }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            printf("\t %d",arr[i]);
        }
    }

    return 0;
}
