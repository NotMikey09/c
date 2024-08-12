#include<stdio.h>
int main()
{
    int a,sum;
    printf("enter the number:");
    scanf("%d",&a);
    sum=(a*(a+1))/2;
    printf("sum of first %d natural number is %d",a,sum);
    return 0;
}