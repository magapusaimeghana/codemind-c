#include <stdio.h>
int main()
{
    int n=10,i;
    char str[n];
    for(i=1;i<=n;i++)
    {
        scanf("%c",&str[i]);
    }
    printf("%c",str[7]);
}