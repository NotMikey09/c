#include<stdio.h>
int main()
{
  int r,c,n,i;
  printf("Enter the values of rows and columns: ");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {  
    for(c=1;c<=n;c++)
    {
        if ((r==c)||(r+c==n+1))
        {
            printf("0 "); 
        } 
        else printf("1 ");
    }
       printf("\n");
  }
    return 0;
}