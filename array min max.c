#include<stdio.h>
int main()
{
    int n,i,arr[100];
    printf("\n Enter the number of elements in an array");
    scanf("%d",&n);
    printf("\n Enter the elements of the array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_value=arr[0];
    int min_value=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max_value)
        {
            max_value=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<min_value)
        {
            min_value=arr[i];
        }
    }
    printf("\n The max value in  array is %d",max_value);
    printf("\n The min value in  array is %d",min_value);
}
