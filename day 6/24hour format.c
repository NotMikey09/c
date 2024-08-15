// c program to take input in 0-23 hour format and identifies time as afternoon, evening,morning,early morning and night!
#include<stdio.h>
int main()
{
    int n;
    printf("enter the time in 24-hour format:");
    scanf("%d",&n);

    if((n>=4) && (n<=6))
        printf("its early morning here:");

    else if((n>=6) && (n<10))
    {
        printf("its morning here:");
    }
    else if((n>=10) && (n<=15))
    {
        printf("its afternoon here:");
    }
    else if((n>15) && (n<=19))
    {
        printf("its evening here:");
    }
    else if((n>=20) && (n<=23) || (n<=3))
    {
         printf("its night here :");
             }
    else printf("please enter time in 24 hour format!");

    return 0;
}