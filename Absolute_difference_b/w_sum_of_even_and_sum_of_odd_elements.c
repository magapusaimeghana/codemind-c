#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ev_s=0,od_s=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        ev_s+=arr[i];
        else
        od_s+=arr[i];
    }
    printf("%d",abs(ev_s-od_s));
}