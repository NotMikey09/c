 //frequency of character 
#include<stdio.h>
void main ()
{
    char a[100];
    int c;
    printf("Enter a string ");scanf("%[^\n]",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        c=1;
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }
        }
        if(a[i]!=-1)
        printf("\n%c frequency is : %d",a[i],c);
    }
}
