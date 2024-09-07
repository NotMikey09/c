              //  ******Deleting The Existing Array Elements ******
     
                //        *****Permanent Deleteion of The Array Elements ******
                



#include <stdio.h>
 int main()
 { // Declare Variables
    int a[100];  // Array to store elements
    int n,i,j;   // Size of the array,loop variables
    int ele;    // Element to delete
    int count=0; /// Flag to indicate if the element was found
    
//  Get the Array size from user
    printf("Enter the array size(1-100): ");
        scanf("%d",&n); 
//  Takes the Array elements from user
    printf("Enter the %d array elements: ",n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
//  Input the element to be deleted from user 
    printf("Enter the elements to delete: ");
        scanf("%d",&ele);
//  Iterate through Array to find and delete the element   
    for(i=0;i<n;i++)
     {
        if(a[i]==ele)
          {
            for(n--,count=1,j=i;j<n;j++)
             {
                a[j]=a[j+1];
             } i--;  // Decrement i to process the newly shifted elements
          }
     }
//  Check if the element was found if not then prints that element not found
    if(count==0)
      {
        printf("%d not found",ele);
      }
    else 
       {  
//  Prints the updated array after deletion
        printf("The array after deletion is: ");
            for(i=0;i<n;i++) 
             {
                printf("%2d ",a[i]);
             }
       }

 return 0;
 
 }


