#include<stdio.h>
#include<windows.h>
typedef struct 
{
    char bookName[20];
    float prize;
}book;
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    book stu[2]={
        {"鲁滨逊漂流记",30.5},
        {"西游记",40.8}
    };
    for(int i=0;i<2;i++)
    {
        printf("名著：%s 价格：%.1f",stu[i].bookName,stu[i].prize);
    }
    return 0;
}