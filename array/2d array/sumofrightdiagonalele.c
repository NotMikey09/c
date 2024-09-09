/* ********* Sum of right diagonal elements *********
 * This program calculates right traces or sum of the diagonal element of the matrix. */

#include <stdio.h>
int main ()
{
    int nr,nc,i,j,a[10][10],sum=0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&nr,&nc);

    if (nr==nc)
     {
        printf("Enter the %d elements of the matrix: ",nr*nc);
         for(i=0;i<nr;i++)
         {
            for(j=0;j<nc;j++)
             {
                scanf("%d",&a[i][j]);

                if(i+j==nr-1)
                 {
                    sum=sum+a[i][j];
                 }
             }
         }

          printf("Trace=%d",sum);
     }

     else printf("Rows and Columns should be same");

     return 0;
}