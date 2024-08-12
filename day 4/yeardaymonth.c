#include<stdio.h>
int main()
{
int day,year,months,days;
printf("Enter the days:");
scanf("%d",&day);
year=day/365;
months=(day%365)/30;
days=(day%365)%30; 
printf("%d year %d month and %d days",year,months,days);
return 0;     
}