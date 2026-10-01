#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a,b;
    printf("请输入第一个整数：");
    scanf("%d",&a);
    printf("请输入第二个整数：");
    scanf("%d",&b);
    printf("输出结果为:%d",a*b);
     return 0;
}