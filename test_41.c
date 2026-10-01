#include <stdio.h>
#include<windows.h>
typedef struct
{
    char name[20];
    int score;
}Student;
void printStu(Student arr[],int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%s ",arr[i].name);
        printf("%d",arr[i].score);
        printf("\n");
    }
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Student stu[3]=
    {
        {"张三",88},
        {"李四",92},
        {"王五",79}
    };
    printStu(stu,3);
    return 0;
}