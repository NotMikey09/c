#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0){
        printf("\n %d is a even number",a);
    }
    printf("\n %d is a odd number",a);
    return 0;
}