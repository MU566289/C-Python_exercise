#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char *p[3]={"北京","上海","广州"};
    for(int i=0;i<3;i++)
    {
        printf("%s\n",p[i]);
    }
    return 0;
}