#include<stdio.h>
int main()
{
    int a[100],i,j,n,count=0;
    printf("Enter the array size(1-100): ");
    scanf("%d",&n);
    printf("Enter the %d array elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
      
    }
   
     for(i=0;i<n;i++)
      {  
          for(j=i+1;j<n;j++)
       {
                 if(a[i]==a[j])
                 count++;  
                 break;
       }

      }
        
    
   printf("Duplicate array elements found =%d",count);
    return 0;
}