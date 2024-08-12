#include<stdio.h>
int main(){
    float bill;
    scanf("%f",&bill);
    int n;
    printf("enter the number of person:");
    scanf("%d",&n);
    float amount;
    amount=bill/n;
    printf("the amount each person needs to pay: %.f",amount);
    return 0;
}