//                   ******* Frequency Of Array Elements *******


/*
 * This program calculates the frequency of each element in an array
 *
 *Example :-
 *
 *Enter the array size(1-100): 4
 *Enter the array elements: 1 2 1 4
 *Frequency of 1 is 2
 *Frequency of 2 is 1
 *Frequency of 4 is 1
 *
 *
*/

#include <stdio.h>

int main()
 {
    int a[100],b[100]={0},n,i,j,count;

    printf("Enter the Array size(1-100): ");
    scanf("%d",&n);
    printf("Enter the %d elements of the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
     {
        if(b[i]!=-1)
          {
             for(j=i+1,count=1;j<n;j++)
              {
                if(a[i]==a[j])
                  {
                    b[j]=-1;
                    count++;
                  }
              }
               b[i]=count;
          }
     }
    
    for(i=0;i<n;i++)
     {
        if(b[i]!=-1)
          {
            printf("Frequency of %d is %d times\n",a[i],b[i]);
          }
     }
 
return 0;
 }