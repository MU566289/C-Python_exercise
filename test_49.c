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
    int *p=(int *)malloc(n*sizeof (int));
    if(p == NULL)
    {
        printf("申请动态内存失败！");
        return -1;
    }
    for(int b=0;b<n;b++)
    {
        printf("请输入第%d个整数:",b+1);
        scanf("%d",&p[b]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("转换后:");
    for(int k=0;k<n;k++)
    {
        printf("%d ",p[k]);
    }
    int key;
    printf("请输入需要查找的数字:");
    scanf("%d",&key);
    int left=0;
    int right=n-1;
    int flag=0;
    int mid;
    int pos;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(key==p[mid])
        {
            flag=1;
            pos=mid;
            break;
        }
        else if(key<p[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    if(flag==1)
    {
        printf("找到了，下标为：%d",pos);
    }
    else
    {
        printf("未找到该数字！");
    }
    free(p);
    p=NULL;
    return 0;
}
