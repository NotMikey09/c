#include<stdio.h>
int main()
{  int n,i,j,k=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        { 
          printf(" %2d",k++);  
        } printf("\n");
    }
}