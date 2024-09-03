#include<stdio.h>
int main()
{
    int r,c,nr,nc,a=0,b=0,z;
    printf("Enter the number of rows :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
         b=r;
         a=nr+1-r;
         for(c=1;c<=nc;c++)
         {   //b=r;
               if(c%2==0)
            {
                printf("%d ",a);

            }  else
             {

                printf("%d ",b);
                 b=r+10;
            } 
            a=a+5;
         }
        printf("\n");
    }
        return 0;
}
