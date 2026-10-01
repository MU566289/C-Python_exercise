#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a;
    printf("请输入a的值:");
    scanf("%lf",&a);
    if(a>6)
    {
        printf("a>6");
    }
    else if(a==6)
    {
        printf("a=6");
    }
    else
    {
        printf("a<6");
    }
    return 0;
}
