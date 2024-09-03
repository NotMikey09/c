#include<stdio.h>
int main()
{ 
    long int fact=1,a;
    printf("Enter the number: ");
    scanf("%ld",&a);
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    printf("the factorial is: %ld",fact);
    return 0;
    
}