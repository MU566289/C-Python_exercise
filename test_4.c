#include<stdio.h>
#include<windows.h>
int add(int a,int b)
{
    int XiangJia=a+b;
    return XiangJia;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a,b;
    printf("请输入第一个数字：");
    scanf("%d",&a);
    printf("请输入第二个数字:");
    scanf("%d",&b);
    int The=add(a,b);
    printf("两数相加等于：%d",The);
    return 0;
}