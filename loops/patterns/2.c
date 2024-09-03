#include<stdio.h>
int main()
{
    int r,c,nr,nc,k;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<=nr;r++)
    {   k=r;
        for(c=1;c<=nc;c++)
        {   
             printf("%3d",k);
             k+=5;
        }
     printf("\n");
    }
    return 0;
}