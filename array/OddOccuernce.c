#include <stdio.h>
int main()
{
    int a[10],i,n, j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] != '*'){
            int count = 1;
            for(j = i+1; j < n; j++){
                if(a[i] == a[j]){
                    a[j] = '*';
                    count++;
                }
            }
            if(count%2 != 0){
                printf("%4d", a[i]);
            }
        }
    }
return 0;
}