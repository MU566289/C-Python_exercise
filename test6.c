#include<stdio.h>
#include<windows.h>
int getMax2(int a,int b)
{
    int Result;
    if(a>b)
    {
        Result=a;
    }
    else
    {
        Result=b;
    }
    return Result;
}
int main()
{
    int x,y,z;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("请输入三个整数：");
    scanf("%d %d %d",&x,&y,&z);
    int Resultone=getMax2(x,y);
    int Resultlast=getMax2(Resultone,z);
    printf("三个整数中最大的是：%d",Resultlast);
    return 0;
}