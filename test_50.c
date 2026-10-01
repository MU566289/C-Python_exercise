#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入动态内存的长度：");
    scanf("%d",&n);
    int *p=(int *)malloc(n *sizeof (int));
    if(p==NULL)
    {
        printf("申请动态内存失败！");
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        printf("请输入第%d个整数:",i+1);
        scanf("%d",&p[i]);
    }
    int temp;
    int min;
    for(int x=1;x<n;x++)
    {
        min=x-1;//放在外层for函数内，防止每次重置min的值。
        for(int j=x-1;j<n;j++)
        {
            
            if(p[min]>p[j])
            {
                min=j;
            }
        }
        if(min!=x-1)//严谨，避免自己与自己交换
        {
            temp=p[x-1];
            p[x-1]=p[min];
            p[min]=temp;
        }
    }
    printf("转换后:");
    for(int t=0;t<n;t++)
    {
        printf("%d ",p[t]);
    }
    free(p);
    p=NULL;
    return 0;
}