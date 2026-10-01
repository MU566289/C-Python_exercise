#include<stdio.h>
#include<windows.h>
int maxNum(int x,int y)
{
    int max;
    if(x>y)
    {
        max=x;
    }
    else
    {
        max=y;  
    }
    return max;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x,y;
    printf("请输入两个数：");
    scanf("%d,%d",&x,&y);
    int result=maxNum(x,y);
    printf("较大值为：%d",result);
    return 0;
}