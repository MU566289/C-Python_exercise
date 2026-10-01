#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i,sum=0,today=4;
    for(i=1;i<=5;i++)
    {
        sum=today+sum;
        today=today+3;
    }
    printf("输出结果为：%d",sum);
    system("pause");
    return 0;
}