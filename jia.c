#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入第一个整数：");
    scanf("%d",&a);
    printf("请输入第二个整数：");
    scanf("%d",&b);
    printf("请输入第三个整数：");
    scanf("%d",&c);
    printf("相乘=%d\n",a*b+c);
    printf("相除=%d\n",a/b-c);
    return 0;
}