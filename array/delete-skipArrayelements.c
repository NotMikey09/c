              //  ******Deleting The Existing Array Elements ******
     
                //        *****Skipping The Array Elements ****** 



#include <stdio.h>
int main()
{  // Variable declarations
    int a[100]; // Array to store elemnents
    int n,i;   // Array size,Loop variable
    int ele;  // Element to skip/delete
    int count=0; // Flag to indicate if the element was found

// Get the array size from the user
    printf("Enter the Array size(1-100): ");
       scanf("%d",&n);

// Get the array elements from the user
    printf("Enter the %d Array elments: ",n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }

// Get the element to skip/delete from the user
     printf("Enter the element to Skip/Delete: ");
         scanf("%d",&ele);

// Print the array elements,skipping the specified element
     printf("Array Elements are:");

     for(i=0;i<n;i++)
      {
        
        if(a[i]!=ele)
         {
           printf("%2d",a[i]);
         }
         else count=1; // set the flag to indicate that the element was found
      }
      
// check if the element was found if not prints that element not found
      if(count==0) 
       {
        printf("\n%d Not Found",ele);
       }
    
       return 0;
}
                                                      
