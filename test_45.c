#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入动态内存长度：");
    scanf("%d",&n);
    int *p = (int *)malloc(n* sizeof (int));
    if(p == NULL)
    {
        printf("申请动态内存失败！\n");
        return -1;
    }
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        printf("请输入第%d个数字: ",i+1);
        scanf("%d",&p[i]);
        sum = sum + p[i];
    }
    double average = sum * 1.0 / n;
    printf("动态数组平均值:%.2f",average);
    free(p);
    p = NULL;
return 0;
}