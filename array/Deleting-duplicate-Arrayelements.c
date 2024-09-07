             //  ******Deleting The Duplicate Array Elements ******
     

#include <stdio.h>
 int main()
 {  // Declare Variables
    int a[100];  // Array to store elements
    int n;      // Size of the array
    int i,j;    // loop variables
    int k;     // loop variables

// Takes array size from user    
    printf("Enter the array size(1-100): ");
        scanf("%d",&n); 
// Takes the array elements from the user
    printf("Enter the %d array elements: ",n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
// Iterate through the array to find and delete duplicate array elements
   for(i=0;i<n;i++)
    {
// Compare the current element with subsequent elements
     for(j=i+1;j<n;j++)
      {       
        if(a[i]==a[j])
           {
// Shifts the elements to the left to fill the gap            
             for(n--,k=j;k<n;k++)
              {
                a[k]=a[k+1];
              } j--; // Decrement j to process the newly shifted element
           }
      }

    }
// Print the array elements after deleting duplicate array elements
     printf("Array elements after deleting duplicate elements are: ");
        for(i=0;i<n;i++) 
         {
            printf("%2d ",a[i]);
         }

 return 0;
 
 }


