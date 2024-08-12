#include<stdio.h>
int main()
{
int num;
printf("Enter the number:",num);
scanf("%d",&num);
num=num%2;
(num==0) && printf("the number is even")||(num>=1) && printf("the number is odd");
// (num==0) && printf("the number is even")|| printf("the number is odd"); Alternate short code!

return 0;
}