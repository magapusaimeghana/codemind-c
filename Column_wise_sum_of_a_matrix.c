#include <stdio.h>
int main()
{
    int i,j,r,c;
    int a[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum+=a[j][i];
        }
        printf("%d ",sum);
    }
}