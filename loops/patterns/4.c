#include<stdio.h>
int main()
{
    int nr,nc,r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            if(r%2==0)printf("%2c",96+r);
            else printf("%2c",64+r);
        }
        printf("\n");
    }
    return 0;
    }
