#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    (a%10<5) && printf("the square of the number is: %d",a*a) || printf("the numbr is : %d",a);
    return 0;
}