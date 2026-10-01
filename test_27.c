#include<stdio.h>
#include<string.h>
#include<windows.h>
struct Student{
    char name[20];
    int age;
};
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    struct Student s={"小红",17};
    struct Student *p=&s;
    strcpy(p->name,"小丽");//name是字符数组，数组名是地址常量，不能直接用等于号赋值字符串
    p->age=18;
    printf("%s %d",p->name,p->age);
    return 0;
}
