//   sorting string in ascending order

#include<stdio.h> 
#include<string.h>
void main ()
{
    char a[100];int i ;
    printf("Enter a string ");scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(int j=i+1;a[j]!='\0';j++)
       { 
           if(a[i]>a[j])
           {
               char t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
         
    }
    printf("%s",a);
    
    
}
