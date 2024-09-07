
/* ******Inserting A New Elments Into Array At specified Position ****** 
    ****** Push Operation To Right Shifting The Array Elements  ******        */

#include <stdio.h>
int main()
{ 
    int a[100]; // Array to store elements
    int n; // Size of the array
    int i; // looping variable
    int ele; //New element to insert
    int posi;  // position to insert the new elements

//  Get the array size from the user
     printf("Enter the array size(1-100): "); 
     scanf("%d",&n);
//  Get the array elements from the user
     printf("Enter the %d array elements: ",n);
    for(i=0;i<n;i++)
    
    {
        scanf("%d",&a[i]);
    }
//  get the new element and its position from the user
     printf("Enter the new element and its position: ");
     scanf("%d %d",&ele,&posi);
//  Checks if the position is within the valid range
     if(posi<1||posi>n+1)
      
      {
        printf("Invalid position! position should be 1 to %d only",n+1); // prints this if invalid
      }
//  Shifts the elements to the right to make space for the new element
     for(i=n;i>=posi;i--)
     
      {
        a[i]=a[i-1];
      }

//  Insert the new element at the specified position in the array    
        a[i]=ele;
      printf("Element are: ");
//  Prints the updated array elements    
     for(i=0;i<n;i++)
      
      {
        printf("%d ",a[i]);
      }

    return 0;
}