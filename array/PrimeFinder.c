#include<stdio.h>
int main()
{ 
    int a[10];
    int i,div,count=0;
    printf("Enter the array element: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(div=1,count=0;div<=a[i];div++)
        {
            if(a[i]%div==0)
            {
                count++;
            }

            }
             if(count==2)
            {
                printf("%4d",a[i]);
                }
            }
           
                return 0;
                }

        
