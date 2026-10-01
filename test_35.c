#include<stdio.h>
#include<windows.h>
int squareSum(int n)
{
    int sum=0,add=0;
    for(int i=1;i<=n;i++)
    {
        add=i*i;
        sum=sum+add;
    }
    return sum;
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    int result=squareSum(n);
    printf("%d",result);
    return 0;
}