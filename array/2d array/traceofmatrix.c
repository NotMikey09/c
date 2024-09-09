/*  *********Finding trace of n*n matrix*********
*
* Sum of the principal diagonal elements is called trace 
* trace of the matrix can be used or calculated in square matrix
* This program prints the trace of n*n matrix */


#include <stdio.h>
int main()
{
    int nr,nc, i, j, a[10][10], sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&nr,&nc);
    if(nr==nc)
    {
       printf("Enter the %d elements of the matrix: ",nr*nc);
       for(i=0;i<nr;i++)
       {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&a[i][j]);
            
            if(i==j)
            {
                sum = sum + a[i][j];
            }
           
        }
        
       }
       printf("Trace=%d",sum);
    }
    else printf("Rows and columns should be same");
    return 0;
}