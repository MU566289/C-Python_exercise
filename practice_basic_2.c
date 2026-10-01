#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i,sum=1;
    for(i=1;i<=8;i++)
    {
        sum=sum*i;
    }
    printf("输出结果为：%d",sum);
    system("pause");
    return 0;
}