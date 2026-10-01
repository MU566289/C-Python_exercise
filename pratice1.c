#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a,b;
    printf("请输入一个整数");
    scanf("%d",&a);
    printf("请输入另一个整数");
    scanf("%d",&b);
    printf("两数相加的结果为：%d",a+b);
    return 0;
}