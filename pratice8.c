#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入你想要得到的n行直角三角形:");
    scanf("%d",&n);
    printf("输出结果为：");
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}