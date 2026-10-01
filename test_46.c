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
    int *p=(int *)malloc(n* sizeof (int));
    if(p == NULL)
    {
        printf("申请动态内存失败！");
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        printf("请输入第%d个整数:",i+1);
        scanf("%d",&p[i]);
    }
    for(int k=0;k<n-1;k++)
    {
        for(int j=0;j<n-1-k;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    for(int t=0;t<n;t++)
    {
        printf("%d",p[t]);
    }
    free(p);
    p=NULL;
    return 0;
}