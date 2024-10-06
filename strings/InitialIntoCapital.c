// Make Te Initial Of Word Into Cpital
#include<stdio.h>
#include<ctype.h>
int main ()
{
    char a[100];
    int c=0;
    printf("Enter a string ");scanf("%[^\n]s",&a);
    if(a[0]<='z'&&a[0]>='a')
    {
        a[0]=a[0]-32;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i-1]==' '&& (a[i]>='a'&&a[i]<='z'))
        {
            a[i]=a[i]-32;
        }
    }
    printf("\n%s",a);
    
    return 0;
}