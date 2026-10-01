#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char *fruit[4]={"苹果","香蕉","橙子","葡萄"};
    for(int i=0;i<4;i++)
    {
        printf("%s ",fruit[i]);
    }
    return 0;
}