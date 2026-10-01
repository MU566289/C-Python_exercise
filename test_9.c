#include <stdio.h>
#include<windows.h>
#include<math.h>
double x,y,z;
double Sanjiaoxing(double a,double b,double c)
{
    if(a>=b&&b>=c)
    {
        x=a,y=b,z=c;
    }
    else if(a>=c&&c>=b)
    {
        x=a,y=c,z=b;
    }
    else if(b>=a&&a>=c)
    {
        x=b,y=a,z=c; 
    }
    else if(b>=c&&c>=a)
    {
        x=b,y=c,z=a;
    }
    else if(c>=a&&a>=b)
    {
        x=c,y=a,z=b;
    }
    else
    {
        x=c,y=b,z=a;
    }
    if(y+z>x)
    {
        double p=(x+y+z)/2.0;
        return p;
    }
    else
    {
        return -1;
    }
}
double getPerimeter(double p)
{
    double S=sqrt(p*(p-x)*(p-y)*(p-z));
    return S;
} 
int main()
{
    double A,B,C;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("请输入三角形三边长：");
    scanf("%lf %lf %lf",&A,&B,&C);
    double Res=Sanjiaoxing(A,B,C);
    if(Res==-1)
    {
        printf("该三角形不存在！");
    }
    else
    {
        double Result=getPerimeter(Res);
        printf("三角形面积为%lf",Result);
    }
    return 0;
}