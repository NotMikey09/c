// generate the gross salary/payslip of the salesman based on the sales amount done that month!
#include<stdio.h>
int main()
{
    float basic=10000, da=basic*65.5/100,sales,bonus,comm,gross;
    printf("Enter your sales amount:");   // to input the sales amount
    scanf("%f",&sales);
    if(sales>=200000)     //conditions to check the sles and generate bonus and commision based on that
    {
         bonus=10000;
         comm=sales*0.1;
    }
    else if(sales>=150000)
    {
        bonus=5000;
        comm=sales*0.075;
    }
    else 
    {
        bonus=2000;
        comm=sales*0.05;
    }
    gross=basic+da+bonus+comm;   // gross salary
    printf("\nBasic salary: %.2f",basic);          //printing the basic salary
    printf("\ncommision as per sales: %.2f",comm); //printing the commision
    printf("\nDearness Allowance: %.2f",da);       // printing the dearness allowance
    printf("\nBonus: %.2f",bonus);                 //printing the bonus
    printf("\nGross salary/payslip: %.2f",gross);  //finally the gross payslip
  return 0;
}