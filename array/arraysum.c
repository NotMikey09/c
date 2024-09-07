#include<stdio.h>
int main()
{
    int a[100],i,n,asum;
    printf("Enter the array size(1-100): ");
    scanf("%d",&n);
    printf("Enter the %d array elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       asum+=a[i];
    } printf("Array elements sum=%d",asum);
    return 0;
}