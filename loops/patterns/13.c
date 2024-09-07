#include<stdio.h>
int main()
{
   int i,j,n,k=65,a;
 printf("Enter rows:");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 {  a=(n-1)+k;
    for(j=1;j<=i;j++)
    {   
        
        printf("%2c",a--);
    
    }
    printf("\n");
     
 }
    return 0;
}