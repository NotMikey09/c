// Using Third Variable

#include <stdio.h>
int main()
{
    int a[100],n,i,t;
    printf("Enter the array size (1-100): ");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("Array elements in the reverse order: ");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }

    return 0;
}