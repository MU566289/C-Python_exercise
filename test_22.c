#include<stdio.h>
int main(void)
{
    char str[]="abc";
    char *p=str;
    int i=0;
    while(*(p+i)!='\0')
    {   
        printf("%c ",*(p+i));
        i++;
    }
    return 0;
}