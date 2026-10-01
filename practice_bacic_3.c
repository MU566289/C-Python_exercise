#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i;
    printf("输出结果为：");
    for(i=0;i<=30;i+=2)
    { 
        printf("%d ",i);
    }
     system("pause");
    return 0;
}