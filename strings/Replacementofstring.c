/* * Replace lower/upper/digits/special/spaces with @/#/$/* /=
   * For Example:-
   * Enter the name: Pratyush-09
   * Converted String is #@@@@@@@*$$
   *
*/

#include <stdio.h>
int main()
{
    char ch[100];
    int i;

    printf("Enter the name: ");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        ch[i]='@';
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        ch[i]='#';
        else if(ch[i]>='0'&&ch[i]<='9')
        ch[i]='$';
        else if(ch[i]==' ')
        ch[i]='=';
        else ch[i]='*';    
     }
     printf("Converted String is %s",ch);
     return 0;
   
}