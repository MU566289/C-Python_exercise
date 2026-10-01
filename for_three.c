#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);  
    SetConsoleCP(CP_UTF8);
    int i,sum=0;
    for(i=2;i<=100;i=i+2)
    {
        sum=sum+i;
    }
    printf("输出结果为：%d",sum);
    system("pause");
return 0;
}