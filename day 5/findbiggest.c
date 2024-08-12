// to find biggest in three integers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of first:");
    scanf("%d",&a);
    printf("enter the values of second:");
    scanf("%d",&b);
    printf("enter the values of third:");
    scanf("%d",&c);
     (a>b)&&(a>c)&&printf("a is greater\n")|| (b>a && b>c) && printf("b is greater\n") || printf("c is greater\n");
    return 0;
}