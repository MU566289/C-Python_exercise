#include<stdio.h>
void show(int (*p)[2],int row)
{
    int i,j; 
    for(i=0;i<row;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int data[3][2]={11,22,33,44,55,66};
    show(data,3);
    return 0;
}
