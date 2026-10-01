#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}