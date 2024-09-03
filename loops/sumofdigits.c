#include<stdio.h>
int main()
{
    int a,a1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a!=0)    //loop for calculating and adding the digits
    { a1=a%10;     //calculate the last digit of the number.
      sum+=a1;     //sum the last digit with the initial value of the sum i..e=0
      a=a/10;       // removes the last digit.
    } printf("sum=%d",sum);
    return 0;
}