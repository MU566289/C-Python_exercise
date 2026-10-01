#include<stdio.h>
#include<windows.h>
int Res(int n)
{
    int res=0;
    if(n%2==0)
    {
        res=1;
    }
    return res;
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    int result=Res(n);
    if(result==1)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}