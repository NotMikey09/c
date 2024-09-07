#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,n,count=0;
    printf("Enter the array size(1-100): ");
    scanf("%d",&n);
    printf("Enter the %d array elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
      
    }  
    printf("Copied array elements in anaother array:");
   for(i=0;i<n;i++)
   {
       b[i]=a[i];
   }
   for(j=0;j<n;j++)
   {
       printf("%2d",b[j]);
   }
    return 0;
}