#include<stdio.h>
int main()
{
   int num,i=1,fb=0,pv=1,fs;
   printf("Enter the number: ");
   scanf("%d",&num);
   printf("The Fibonacci sequnce upto %d is: ",num);
   do
   {
    printf("%3d",fb);
    fs=pv+fb;
    pv=fb;
    fb=fs;
    i++;
   } while(i<=num);
   return 0;

}