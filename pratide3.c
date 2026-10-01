#include<stdio.h>
#include<windows.h>
int main(void)
{
    int i = 1; 
    while(i <= 20)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}