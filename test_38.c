#include <stdio.h>
#include<windows.h>
int sumOdd(int n)
{
    int sum=0;
    for(int i=1;i<n;i+=2)
    {
        sum=sum+i;
    }
    return sum;
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    int res=sumOdd(n);
    printf("\n结果为:%d",res);
    return 0;
}