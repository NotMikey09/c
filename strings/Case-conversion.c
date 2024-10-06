/* Coverion of given string into its opposite case;
 * lower to upper and vice versa
 * For Example:-
 *  Input: "Hello World"
 *  Output: "hELLO wORLD"
 * 
 */





#include <stdio.h>

int main() {
   char s[100];int i;
   printf("Enter the name: ");
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>='a' && s[i]<='z')
       s[i]-=32;
       else if (s[i]>='A' && s[i]<='Z')
       s[i]+=32;
       
   }
   printf("Converted string is %s",s);
    return 0;
}