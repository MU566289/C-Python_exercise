#include<stdio.h>
void swap_ptr(int **qq)//**给qq定义为指针/
{
    int b=20;
    *qq=&b;
}
int main(void)
{
    int a=10;
    int *p=&a;
    swap_ptr(&p);//把p的地址存入qq内
    printf("%d",*p);
    return 0;
}