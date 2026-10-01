#include <stdio.h>
#include<windows.h>
int getWin(int a,int b)
{
    int res;
    if(a>b)
    {
        res=b;
    }
    else
    {
        res=a;
    }
    return res;
}
int main()
{
    int x,y,z,w;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("请输入4个整数:");
    scanf("%d %d %d %d",&x,&y,&z,&w);
    int First=getWin(x,y);
    int Second=getWin(z,w);
    int Last=getWin(First,Second);
    printf("结果为：%d",Last);
    return 0;
}