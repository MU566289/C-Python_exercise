#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a,b;
    printf("请输入第一个数字：");
    scanf("%d",&a);
    printf("请输入第二个数字：");
    scanf("%d",&b);
    int i;
    int sum=0;
    for(i=a;i<=b;i=i+1)
    {
        sum=sum+i;
    }
    printf("输出结果为：%d\n",sum);
    return 0;
}
