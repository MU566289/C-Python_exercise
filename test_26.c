#include<stdio.h>
#include<windows.h>
struct Student{
    char name[20];
    int age;
};
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    struct Student s1={"小明",18};
    struct Student *p=&s1;
    printf("姓名：%s\n",p->name);
    printf("年龄：%d\n",p->age);
    p->age=19;
    printf("更改后的年龄：%d\n",p->age);
    return 0;
}