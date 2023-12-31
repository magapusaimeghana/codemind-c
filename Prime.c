#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int cnt=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        cnt++;
    }
    if(cnt==2)
    printf("Prime");
    else
    printf("Not Prime");
}