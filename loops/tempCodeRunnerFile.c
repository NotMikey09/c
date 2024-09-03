#include<stdio.h>
int main()
/*1
  3 2
  6 5 4
  10 9 8 7*/

{ 
int z=0,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { z+=i;

        for(int j=z;j>z-i;j--)
        {   
            printf("%d ",j);
        } 
        printf("\n");
    
}
return 0;
}
    
