#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入动态数组长度：");
    scanf("%d",&n);
    int *p = (int *)malloc(n* sizeof (int));
    if(p == NULL)
    {
        printf("申请动态内存失败！\n");
        return -1;
    }
    for(int i = 0;i < n;i++)
    {
        p[i]=i+1;
        printf("%d ",p[i]);
    }
    free(p);
    p = NULL;
return 0;
}