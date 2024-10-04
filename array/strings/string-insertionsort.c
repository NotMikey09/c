/* ************* String sorting with insertion sort ****************
*/
#include <stdio.h>
#include <string.h>

int main() {
  char ch[10];
  int i,j;
  printf("Enter the string: ");
  scanf("%[^\n]",ch);
  
  for(i=0;i<strlen(ch);i++)
  {
      for(j=i+1;j<strlen(ch);j++)
      {   
          if(ch[i]>ch[j])
          { 
              char temp=ch[i];
                  ch[i]=ch[j];
                  ch[j]=temp;
          }
      }
  }

  printf("%s",ch);

    return 0;
}