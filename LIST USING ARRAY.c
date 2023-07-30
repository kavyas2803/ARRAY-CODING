#include <stdio.h>
int a[60],i,n,x,pos;
void create()
     {  
   printf("\n Enter the no of elements ");
   scanf("%d",&n);
   printf("\n enter the elements ");
   for(int i=0;i<n;i++)
       scanf("%d",&a[i]);

}
void insert()
{
    printf("\n enter the element to be inserted ");
    scanf("%d",&x);
    printf("\n enter the position of the element");
    scanf("%d",&pos);
    for(i=n;pos<i;i--)
   
        a[i]=a[i-1];
        a[pos]=x;
        n++;
   
}
void delete()
{
    printf("\n enter the position to be deleted");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
   
        a[i]=a[i+1];
        n--;
    
}
void  search()
{
    printf("\n enter the element to be searched");
    scanf("%d",&x);
   for(i=0;i<n;i++)
   {
       if(a[i]==x)
        printf("\n element found");
   }
     if(i==n)
     {
         printf("Not found");
     }
}
void display()
{
    printf("\nthe elements are:");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
    }
}
int main()
{
    create();
    display();
    insert();
    display();
    delete();
    display();
    search();
    display();
}
