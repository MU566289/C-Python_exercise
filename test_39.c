#include <stdio.h>
#include<windows.h>
int myStrcmp(char s1[],char s2[])
{
    int i = 0;
    while(s1[i] != '\0'&&s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i]; 
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char s1[]="apple";
    char s2[]="apple";
    char s3[]="rose";
    char s4[]="lily";
    int res1=myStrcmp(s1,s2);
    if(res1==0)
    {
        printf("相等\n");
    }
    else
    {
        printf("不相等\n");
    }
    int res2=myStrcmp(s3,s4);
    if(res2==0)
    {
        printf("相等");
    }
    else
    {
        printf("不相等");
    }
    return 0;
}