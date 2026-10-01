#include <stdio.h>
#include<windows.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int m,n;
    printf("请输入两个整数：");
    scanf("%d %d",&m,&n);
    swap(&m,&n);
    printf("%d,%d",m,n);
    return 0;
}
