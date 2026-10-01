#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a=9;
    switch(a)
    {
        case 6:
        printf("6");
        break;
        case 9:
        printf("9");
        break;
        default:
        printf("其它");
    }
    return 0;
}
