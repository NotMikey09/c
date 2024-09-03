#include<stdio.h>
int main()
{
    int num,num1,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {   
        rev=rev*10+(num%10); // reverse the digits.
        num=num/10;  //removes the last digit.
    }
    if(num1==rev)
    {
        printf("%d is a palindrome number",num1); // checks if its a palindrome or not.
    } else printf("Not a palindrome");

  return 0;
        
}