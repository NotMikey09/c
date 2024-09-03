#include<stdio.h>
int main()
{  //int rev=0;
    int num,rem;
       printf("Enter a number: ");
       scanf("%d",&num);
    
       //printf("the reverse of the number is: "); in case of 100
    while(num!=0)
    {    
        //rem=num%10; if you have to print 100 as 001.
        printf("%d",rem);
        rev=rev*10+(num%10); // reverse the digits.
         num=num/10;  //removes the last digit.


    }
    printf("Reverse of th number is: %d",rev); //prints the reverse of the number.

  return 0;
        
}