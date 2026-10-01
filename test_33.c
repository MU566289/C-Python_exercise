#include<stdio.h>
int main(void)
{
    int count=0;//计数器，记录已经输出多少数字
    for(int i=3;i<100;i=i+3)
    {
        printf("%d ",i);
        count++;//打完一个，计数加一
        //打满五个，换行
        if(count % 5 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}