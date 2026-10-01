#include<stdio.h>
void swap(int *x,int*y)
{
    int temp=*x;//把x地址里存的值拿出来，临时存到变量temp中
    *x=*y;//把y地址里的值临时写到x指向的内存空间
    *y=temp;//把temp里面暂存的值，写入到y指向的内存空间
}
int main(void)
{
    int m=3,n=5;
    swap(&m,&n);//把m的地址传给x，把n的地址传给y。
    printf("m=%d,n=%d",m,n);
    return 0;
}