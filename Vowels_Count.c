#include <stdio.h>
int main()
{
    int i,cnt=0;
    char str[100];
    scanf("%[^
]str",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}