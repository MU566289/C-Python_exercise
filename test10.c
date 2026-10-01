#include<stdio.h>
#include<windows.h>
int Store(int num[],int len)
{
    int max=num[0];
    for(int i=1;i<len;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
        return max;
}
int main()
{
    int arr[6]={2,5,8,1,9,3};
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int Res=Store(arr,6);
    printf("最大值为：%d",Res);
    return 0;
}


