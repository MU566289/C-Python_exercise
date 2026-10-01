#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char str1[]="Rose";
    char str2[]="Lily";
    int res=strcmp(str1,str2);
    if(res==0)
    {
        printf("相等");
    }
    else
    {
        printf("不相等");
    }
    return 0;
}