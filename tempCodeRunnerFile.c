#include<stdio.h>
#include<string.h>
void main ()
{
    char a[100];int i,v=0,c=0,d=0,s=0 ;
    printf("Enter a string ");scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
         else if(a[i]>'a'&& a[i]<='z')
        {
            c++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            d++;
        }
       else
        s++;
    }
    printf("Vowel count : %d",v);
    printf("\nConsonant count : %d",c);
    printf("\nDigit count : %d",d);
    printf("\nSpecial character count : %d",s);
    
}
