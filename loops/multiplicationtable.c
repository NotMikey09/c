#include<stdio.h>
int main()
{
    int num,multi;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The multiplication table of %d is: \n",num);
    for(int i=1;i<=10;i++)
    {
       multi=num*i; 
       printf("%d*%d=%d\n",num,i,multi);

    }
    
    return 0;
}