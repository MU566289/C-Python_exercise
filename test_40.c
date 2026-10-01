#include <stdio.h>
#include<windows.h>
int myStrlen(char s[])
{
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(void)
{
    char s[]="banana";
    int len=myStrlen(s);
    printf("%d",len);
    return 0;
}