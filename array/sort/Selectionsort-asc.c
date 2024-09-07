                                                                     // ******* Selection Sort *******


#include<stdio.h>
int main()
 
 { // Variable declaration
    int a[100]; //Array to store element
    int n;     //Array size
    int i,j;  // loop variable
    int temp; // temproray variable to store/swap the shifting values

    printf("Enter the array size(1-100): ");
        scanf("%d",&n);

    printf("Enter the %d array elements: ",n);
     for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }  
    // Sorted the array in ascending order
// outer loop to find the minimum element in each subarray
     for(i=0;i<=n-2;i++)
      {
// inner element to find the minimum element
        for(j=i+1;j<=n-1;j++)
         {
            if(a[i]>a[j])
              {
//  Swap the minimum  element with the first element of the array             
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
         }
      }
// prints the sorted array elements
    printf("Sorted Array Elements is:");
     for(i=0;i<n;i++)
      {
         printf("%2d ",a[i]);
      }

 return 0;
 }
