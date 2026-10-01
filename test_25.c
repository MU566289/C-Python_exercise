#include<stdio.h>
int main(void)
{
    char *s="student";
    while(*s)
    {
        printf("%c ",*s);
        s++;
    }
    return 0;
}