 //arranging characters in alphabetical order
 
#include<stdio.h>
void main ()
{
    char a[100];
    printf("Enter a string ");scanf("%[^\n]",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%s",a);
}
