#include<stdio.h>
#include<windows.h>
double Blance(double score[],int len)
{
    double Add=0;
    for(int i=0;i<len;i++)
    {
        Add=Add+score[i];
    }
    double blance=Add/len;
    return blance;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double Score[5]={92,76,88,59,95};
    for(int i=0;i<5;i++)
    {
        printf("5个成绩分别为:%lf ",Score[i]);
    }
    double B=Blance(Score,5);
    printf("所有成绩的平均分为:%lf",B);
return 0;
}