#include <stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i+=2)
    {
        cnt+=arr[i];
    }
    printf("%d",cnt);
}