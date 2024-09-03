// Temp Method

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
    printf("Array Elements in Reverse Order:");
    for(n--;n>=0;n--)
    {
        printf("%2d",a[n]);
    }

    return 0;
}
