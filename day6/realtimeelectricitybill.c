// realtime electricity bill 
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
    if(unit>=1&&unit<=50)
    {
      amount = unit*1.45;
      printf("the amount of %d unit is %f for consumer name %s \n",unit,amount,name);
    }
    else if ((unit>=51) && (unit<=100))
    {
      amount=(72.5)+(unit-50)*2.8;
      printf("the amount of %d unit is %f for consumer name %s \n",unit,amount,name);
    }
     else if((unit>=101) && (unit<=200))
     {
        amount = 212.5 + (unit-100)*3.05;
        printf("the amount for %d unit is %f for consumer name %s \n",unit,amount,name);
     }
     else if((unit>=201) &&  (unit<=300))
     {
        amount = 315.55 + (unit-200)*4.75;
        printf("the amount for %d unit is %f for consumer name %s \n",unit,amount,name);
     }
     else if((unit>=301) && (unit<=500))
     {
        amount= 790.55 + (unit-300)*6.00 ;    
        printf("the amount for %d unit is %f for consumer name %s \n",unit,amount,name);
     }       
     
     else if (unit>500){
      amount=1990.55+ (unit-500)*6.25;
     printf("the amount for %d unit is %f for consumer name %s \n",unit,amount,name);
     }
     return 0;
     }

