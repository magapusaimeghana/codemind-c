#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s%s",&str1,&str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}