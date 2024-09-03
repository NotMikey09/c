#include<stdio.h>
int main()
{ /* 
     1  2  3  4  5
     10 9  8  7  6
     11 12 13 14 15
     20 19 18 16 16
     */
    int r,c,nr,nc,k=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            if(r%2==1)
            { 
              printf("%3d",++k);
            }
            else printf("%3d",k--);
            
        }
        k+=nc;
        printf("\n");
    }
    return 0;
}