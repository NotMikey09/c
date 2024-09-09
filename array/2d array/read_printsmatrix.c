/*  *********Reading and printing elements of n*n matrix ********* 
* this program reads and prints the values in the n*n 2d array or matrix */

#include <stdio.h>
 int main()
 
{
    int nr,nc, i, j, a[10][10];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&nr,&nc);
    printf("Enter the %d elements of the matrix: ",nr*nc);
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&a[i][j]);   // reads the elements of the matrix
        }
    }
    printf("Elements of the matrix are:\n");
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("%4d ",a[i][j]);  // prints the elements of the matrix
        }
        printf("\n");
    }
    return 0;
}