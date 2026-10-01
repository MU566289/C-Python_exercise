#include<stdio.h>
#include<windows.h>
typedef struct 
{
    char name[20];
    int age;
    float score;
}Student;
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Student stu[3]={
        {"张三",18,92.5},
        {"李四",19,88.0},
        {"王五",18,95.3}
    };
    int i;
    int a=0;
    float max=stu[0].score;
    for(i=0;i<3;i++)
    {
        if(stu[i].score>max)
        {
            max=stu[i].score;
            a=i;
        }
    }
    printf("姓名：%s 年龄：%d 分数：%f",stu[a].name,stu[a].age,max);
    return 0;
}
