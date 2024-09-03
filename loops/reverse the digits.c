#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {   
        rev=rev*10+(num%10); // reverse the digits.
        num=num/10;  //removes the last digit.
    }
    printf("Reverse of th number is: %d",rev); //prints the reverse of the number.

  return 0;
        
}