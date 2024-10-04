#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum=0,remain,digit=0;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    
    while(a!=0)
    {  b=a;
    
        {
            b=a/10;
            digit++;
        }
        
    }
    printf("%d",digit);
    
    while(a!=0)
    {   b=a;
        remain=b%10;
        sum+=pow(remain,digit);
    }  
    printf("%d",sum);
      if(a==sum)
      {
        printf("Its a strong number");
      }
      else printf("its not a strong number");

    
   return 0;
}