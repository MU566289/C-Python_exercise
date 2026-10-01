#include <stdio.h>
#include<windows.h>
double calcArea(double width,double height)
{
    double Mianji=width*height;
    return Mianji;
}
double calcPeri(double width,double height)
{
    double Zhouchang=(width+height)*2;
    return Zhouchang;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double width,height;
    printf("长方形长为：");
    scanf("%lf",&height);
    printf("长方形宽为：");
    scanf("%lf",&width);
    if(width<=0||height<=0)
    {
        printf("长或者宽不能为0!");
    }
    else
    {
        double M=calcArea(width,height);
        double Z=calcPeri(width,height);
        printf("面积为：%lf",M);
        printf("周长为：%lf",Z);
    }
    return 0;
}