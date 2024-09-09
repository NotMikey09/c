 /*  ********** Transpose of n*n matrix **********
 * rows and columns interchanged is called tranpose of the matrix
 * this program read and output the transpose of the matrix */

    //   Method-2

#include <stdio.h>
 int main()
 {
     int a[10][10],i, j, nr,nc;
     printf("Enter the number of rows and columns of the matrix:\n");
     scanf("%d%d",&nr,&nc);
     printf("Enter the %d elements of the matrix:\n",nr*nc);
     
     for(i=0;i<nr;i++)
     {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }

     printf("Transposed matrix elements:\n");
      for(i=0;i<nc;i++)    // i value is less than no of columns
      {
        for(j=0;j<nr;j++)  // j value is less than no of rows
         {
            printf("%4d",a[j][i]);  
         }
        printf("\n");
      }

     
    return 0;

 }