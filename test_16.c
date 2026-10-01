#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char names[3][20]={
        "张三","李四","王五"
    };
    for(int i=0;i<3;i++)
    {
        printf("%s ",names[i]);
    }
    return 0;
}