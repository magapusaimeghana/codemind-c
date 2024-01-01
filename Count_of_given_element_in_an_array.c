#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,count=0;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
        count++;
    }
    printf("%d",count);
}