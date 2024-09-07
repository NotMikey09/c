#include<stdio.h>
int main()
{
    int i,j,n,a1=0,a2=1,z;
    printf("Enter the rows: ");
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {  a1=0;a2=1;
        for(j=1;j<=i;j++)
        {  if(j==1)
            printf("%2d",a1);
            else if(j==2)
             printf("%2d",a2);
             else
             {
                z=a1+a2;
                a1=a2;
                a2=z;
                printf("%2d",z);
             }
            }
         
        printf("\n");
    } 
 return 0;
}