#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter the number: ");  
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;  //removes the last digit
        count++; // counts the digits removed
    } printf("No. of the digits: %d digits",count);  //prints the digits
    return 0;
}