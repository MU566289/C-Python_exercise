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
    int *arr=(int *)malloc(n* sizeof (int));
    if(arr==NULL)
    {
        printf("申请动态内存失败");
        return -1;
    }
    int *res=(int *)malloc(n* sizeof (int));
    if(res==NULL)
    {
        printf("申请动态内存失败");
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        printf("请输入第%d个数字:",i+1);
        scanf("%d",&arr[i]);
        res[i]=arr[i];
    }
    printf("\n原数组为:");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    for(int t=1;t<n;t++)
    {
        int temp=res[t];
        int j;
        for(j=t-1;j>=0&&res[j]>temp;j--)
        {
            res[j+1]=res[j];
        }
        res[j+1]=temp;
    }
    printf("\n排序后的数组为:");
    for(int x=0;x<n;x++)
    {
        printf("%d ",res[x]);
    }
    free(arr);
    arr=NULL;
    free(res);
    res=NULL;
    return 0;
}