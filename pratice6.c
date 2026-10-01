#include<stdio.h>
#include<windows.h>
char Grade(int score)
{
    char Res;
    if(score>=90)
    {
        Res='A';
    }
    else if(score>=80&&score<90)
    {
        Res='B';
    }
    else if(score>=70&&score<80)
    {
        Res='C';
    }
    else if(score>=60&&score<70)
    {
        Res='D';
    }
    else if(score<60)
    {
        Res='E';
    }
    return Res;
}
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    char G=Grade(n);
    printf("%c",G);
    return 0; 
}