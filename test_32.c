#include<stdio.h>
#include<windows.h>
int isEven(int n)
{
    int i;
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    isEven(n);
    if(n==1)
    {
        printf("偶数");
    }
    else
    {
        printf("奇数");
    }
    return 0;
}
