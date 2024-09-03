// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c,nc,nr;
    printf("Enter rows and columns: ");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            printf("%3c",c+r+63);
        } 
    
     printf("\n");
    }    
    return 0;
}