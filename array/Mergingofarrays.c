             //  ******Merging of Arrays ******
 
         //   Merging two array elements in one

#include <stdio.h>
 int main()
 {  // Declare Variables
    int a[100],b[100]; //Arrays 
    int n1,n2; // Sizes of the arrays
    int i,j; // Loop variables
// Takes array sizes from the user   
    printf("Enter the first and Secound array size(1-100): ");
        scanf("%d %d",&n1,&n2); 
// Get the elements of 1st array from user
    printf("Enter the %d elements of the 1st Array: ",n1);
     for(i=0;i<n1;i++)
      {
        scanf("%d",&a[i]);
      }
// Get the element of 2nd array from the user
    printf("Enter the %d elements of the 2nd Array: ",n2);
     for(i=0;i<n2;i++)
      {
        scanf("%d",&b[i]);
      }
// Merge the 2nd array into the 1st one    
      for(i=n1,j=0;i<n1+n2;i++,j++)
       {
        a[i]=b[j];
       }
// Sort the merged array in ascending order    
     for(i=0;i<n1+n2;i++)
      {
        for(j=i+1;j<n1+n2;j++)
         {
            if(a[i]>a[j])
              {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
         }
      }
// Print the merged and sorted array elements    
    printf("Array elements aftermerging are:");
        for(i=0;i<n1+n2;i++)
         {
            printf("%2d ",a[i]);
         }


 return 0;
 
 }


