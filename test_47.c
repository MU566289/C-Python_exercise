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
    for(int i = 0;i < n;i++)
    {
        printf("请输入第%d个整数:",i+1);
        scanf("%d",&p[i]);
    }
     for(int j = 0;j < n-1;j++)
    {
        for(int l = 0;l < n-1-j;l++)
        {
            if(p[l]>p[l+1])
            {
                int temp=p[l];
                p[l]=p[l+1];
                p[l+1]=temp;
            }  
        }
    }
    printf("排序结果：");
    for(int t=0;t<n;t++)
    {
        printf("%d ",p[t]);
    }
    printf("\n");
    int key;
    printf("请输入想要查找的数字:");
    scanf("%d",&key);
    int flag=0;
    int pos;
    for(int x=0;x<n;x++)
    {
        if(key==p[x])
        {
            flag=1;
            pos=x;
            break;
        }
    }
    if(flag==1)
    {
        printf("找到了,下标是:%d",pos);
    }
    else{
        printf("未找到该数字");
    }
    free(p);
    p=NULL;
    return 0;   
}
