/*  ********** Transpose of n*n matrix **********
 * rows and columns interchanged is called tranpose of the matrix
 * this program read and output the transpose of the matrix */
     
     // ********** Method 1 **********
     // row columm conversion


#include <stdio.h>
 int main()
 {
    int a[10][10], i, j, nr,nc;
     printf("Enter the number of rows and columns of the matrix: ");
     scanf("%d%d",&nr,&nc);
     printf("Enter the %d elements of the matrix:\n",nr*nc);
    for(i=0;i<nr;i++)
     {
        for(j=0;j<nc;j++)
         
         {
            scanf("%d",&a[i][j]);  
         }  
     }
     printf("The transpose of the matrix is:\n");
       for(j=0;j<nc;j++)
       {
        for(i=0;i<nr;i++)
         {
            printf("%3d ",a[i][j]);
         }
            printf("\n");
       }
       return 0;
 }