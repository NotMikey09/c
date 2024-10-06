 // palindrome String
#include<stdio.h>
int main ()
{
    char s [100];
    int i,c=0;
    printf("enter a string : ");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++) 
    {
        c++;
    }
    for(int j=0;j<c/2;j++)
    {
        
        if(s[j]!=s[c-j-1])
        {
            printf("It is not a palindrome string ");
            return 0;
        }
    }
    printf("It is a palindrome string ");
    return 0;
}