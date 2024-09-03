#include<stdio.h>
int main()
{
    int num,multi=1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    // while

//     while(multi<=num/2)
//     {
//       if(num%multi==0)
//       {
//         sum+=multi;
//       }
//       multi++;
//     }
//    if(sum==num)
//    printf("Perfect no");
//    else
//    printf("Not Perfect no");

  // do while
    do
    {
        if(num%multi==0)
        { 
            sum+=multi;
        }
        
        multi++;
    } while(multi<=num/2);
    if(sum==num)
    {
           printf("It is a perfect number");
    } 
    else   
           printf("It is not a perfect number");
    return 0;
}