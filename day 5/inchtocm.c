#include<stdio.h>
int main()
{
float cm;
printf("Enter the number of centimeters: ");
scanf("%f",&cm);
printf("%f cm is equal to %.4f",cm,cm*0.3937);
return 0;
}