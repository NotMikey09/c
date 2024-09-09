 /* ********* Finding the no. of even/odd/zero elements row wise *********
 * 
 * This program read elements of n*n matrix and find the no. of even/odd/zero elements row wise
 */

#include <stdio.h>
 int main()
 {
     int a[10][10], i, j, nr, nc, even, odd, zero;
     printf("Enter the number of rows and columns of the matrix: ");
     scanf("%d %d", &nr, &nc);
     printf("Enter the %d elements of the matrix:\n",nr*nc);
     for(i=0; i<nr; i++)
     {
        for(j=0; j<nc; j++)
        {
            scanf("%d", &a[i][j]);
        }
     }
     printf("\t Even\todd\tzero");
     printf("\n----------------------------------------------------------");
     for(i=0; i<nr; i++)
     {
        for(even=odd=zero=j=0;j<nc;j++)
         {
             if(a[i][j]==0)
             {
                zero++;
             }
             else if(a[i][j]%2==0)
             {
                even++;
             }
             else odd++;
         }
         printf("\nRow %d:\t%d\t%d\t%d", i+1, even,odd,zero);
     }
      return 0;
 }
