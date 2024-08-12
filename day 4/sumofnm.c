#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value of N:");
    // using the series  formula (N*(N+1))/2
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("the sum is :%d",sum);
    return 0;
}
