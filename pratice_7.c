#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n,m,r;
    printf("请输入两个整数：");
    scanf("%d %d",&n,&m);
    while(m!=0)
    {
        r=n%m;
        n=m;
        m=r;
    }
    printf("两整数的最大公约数为：%d",r);
    return 0;
}