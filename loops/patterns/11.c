#include<stdio.h>
int main()
{
    int n,z=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {  
            if(i==2&&j==1)
           { 
              z--;
           }
                printf("%d ",z++);
           
        } printf("\n");
    }  
    
    return 0;
}
