// realtime electricity bill using c based :
#include<stdio.h>
int main()
{
    char name[10];
    int con_id,prev_read,pres_read,unit;
    float amount;
    printf("enter the consumer name:");
    scanf("%s",name);
    printf("enter the consumer id :");
    scanf("%d",&con_id);
    printf("enter the previous reading :");
    scanf("%d",&prev_read);
    printf("enter the present reading :");
    scanf("%d",&pres_read); 
    unit=pres_read-prev_read;
    printf("the unit consumed is %d \n",unit);
    if(unit<=50)
    {
      amount = unit*1.45; // till 50 unit charges is 1.45p
    }
    else if ((unit<=100))
    {
      amount=(72.5)+(unit-50)*2.8;  //  50-100 u charges is 2.8p
    }
     else if((unit<=200))
     {
        amount = 212.5 + (unit-100)*3.05; //101-200u charges is 3.05p
     }
     else if((unit<=300))
     {
        amount = 517.5 + (unit-200)*4.75; //201-300u charges is 4.75p
     }
     else if((unit<=500))
     {
        amount= 992.5 + (unit-300)*6.00 ;    // 301-500 unit charges is 6p
     }       
     
     else if (unit>500){
      amount=2192.5+ (unit-500)*6.25; //above 500u charges will be 6.25p
     
     }
     if(amount<50){
      amount=50;    // for any amount less than 50 there is a fixed price of 50p that should be paid in case of 0 unit too!
     } 
      printf("**********Electricity Bill**********");
      printf("\nConsumer name: %s",name);
      printf("\nPrevious month reading: %d",prev_read);
      printf("\nPresent month reading: %d",pres_read);
      printf("\nUnit consumed: %d",unit);
      printf("\nAmount: %.2f",amount);
     return 0;
     }

