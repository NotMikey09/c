#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:"); // takes the year to check whether its a leap year or not
    scanf("%d",&year);
    //first condition is for checking the year divisible by 4 but this also includes the year whicha are not a leap year so the next condition is used to i..e.. divisible by 400.
    if((year%4==0)&&(year%100!=0) || year%400==0)  
    printf("its a leap year");     // return leap year
    else printf("not a leap year"); // returns not a leap year
    return 0;
}