#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    int i=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    while(n!=-1)
    {
        if(n>0)
        {
            i++;
        }
        printf("请输入一个整数：");
        scanf("%d",&n);
    }
    printf("一共输入%d个正数",i);
    return 0;
}
