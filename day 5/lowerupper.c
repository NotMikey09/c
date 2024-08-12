#include<stdio.h>
int main()
{
    char lc;
    printf("enter the lower case letter:");
    scanf("%c",&lc);
    printf("\nthe upper canse of %c is %c",lc,(lc-32));
    return 0;               
}