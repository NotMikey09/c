// Linear Search
#include <stdio.h>
int main() {
   int a[100],n,i,e,f=0;
   printf("Enter the array size 1-100:");
   scanf("%d",&n);
   printf("Enter %d Elemnts of the array:",n);
   for(i=0;i<n;i++) scanf(" %d",&a[i]);
   printf("Enter element to search: ");
   scanf("%d",&e);
   for(i=0;i<n;i++)
   {
       if(a[i]==e)
       {
           printf("%d in a[%d] cell\n",e,i,f=1);
           
       }
   }   
       if(f==0)
       {
           printf("%d not found\n",e);
       }
   

    return 0;
}