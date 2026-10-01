#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入动态内存长度:");
    scanf("%d",&n);
    int *p=(int *)malloc(n* sizeof (int));
    if(p==NULL);
    {
        printf("申请动态内存失败");
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        printf("请输入第%d个数字:",i+1);
        scanf("%d",&p[i]);
    }
    int j;
    for(int t=1;t<n;t++)
    {
        int temp=p[t];
        for(j=t-1;j>=0&&p[j]<temp;j--)
        {
            p[j+1]=p[j];
        }
        p[j+1]=temp;
    }
    printf("\n转换后:");
    for(int x=0;x<n;x++)
    {
        printf("%d ",p[x]);
    }
    free(p);
    p=NULL;
    return 0;
}