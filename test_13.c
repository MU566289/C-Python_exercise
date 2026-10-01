#include<stdio.h>
#include<windows.h>
#include<string.h>
int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char ach1[3]={'6','7','8'};
    char ach2[4]={'6','7','8','\0'};
    printf("转为字符串ach2:%s\n",ach2);
    char buf[20];
    strcpy(buf,"testzfc");
    printf("\n打印被复制到buf的字符串:%s\n",buf);
    int tuf=strlen(buf);
    printf("\n%d",tuf);
    
return 0;
}