#include <stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the array size (1-100): ");
    scanf("%d",&n);
    printf("Enter the %d elements of array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
      a[i]=a[i]+a[n-i-1];
      a[n-i-1]=a[i]-a[n-i-1];
      a[i]=a[i]-a[n-i-1];
    }
    printf("Array Elemnts in Reverse Order: ");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }
    
}