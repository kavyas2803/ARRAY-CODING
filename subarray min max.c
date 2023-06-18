#include<stdio.h>
int main()
{
    int n,i,arr[100],start,end;
    printf("\n Enter the number of elements in an array");
    scanf("%d",&n);
    printf("\n Enter the elements of the array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the start position of the sub array");
    scanf("%d",&start);
    printf("\n enter the end position of the sub array");
    scanf("%d",&end);
    int max_value=arr[start];
    int min_value=arr[start];
    for(i=start;i<=end;i++)
    {
        if(arr[i]>=max_value)
        {
            max_value=arr[i];
        }
    }
    for(i=start;i<=end;i++)
    {
        if(arr[i]<=min_value)
        {
            min_value=arr[i];
        }
    }
    printf("\n The max value in sub array is %d",max_value);
    printf("\n The min value in sub array is %d",min_value);
}
