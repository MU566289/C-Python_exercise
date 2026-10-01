#include<stdio.h>
int main(void)
{
    int num=66;
    int *p=&num;
    *p=88;
    printf("%d",num);
    return 0;
}