#include<stdio.h>
int main()
{
int sub1=38,sub2=34,sub3=35,sub4=78,sub5=20,pass=0,fail=0;
(sub1>=35) && pass++||fail++;
(sub2>=35) && pass++||fail++;
(sub3>=35) && pass++||fail++;
(sub4>=35) && pass++||fail++;
(sub5>=35) && pass++||fail++;
printf("the total passed subjects = %d",pass);
printf("\nthe total failed subjects = %d",5-fail);
return 0;
}
