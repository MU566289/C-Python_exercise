#include<stdio.h>
int main(void)
{
    int sum=0;
    for(int i=0;i<=100;i+=2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}