#include<stdio.h>
#include<windows.h>
int Store(int score[],int len)
{
    int max=score[0];
    for(int i=1;i<len;i++)
    {
        if(max<score[i])
        {
            max=score[i];
        }
    }
    return max;
}
int main()
{
    int Score[5]={56,78,90,34,26};
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int Max=Store(Score,5);
    printf("最高分为：%d",Max);
    return 0;
}