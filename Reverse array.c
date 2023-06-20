#include <stdio.h>

int main() {
   int arr[100], i,n;
   printf("\nEnter the number of array elements: ");
   scanf("%d", &n);
   printf("\nEnter the array elements: ");
   
   for (i = 1; i <= n; i++) {
       scanf("%d", &arr[i]);
   }
    printf("\n the reversed array is");
  for(int i=n;i>=1;i--)
  {
      printf("\t %d",arr[i]);
  }

  
}
