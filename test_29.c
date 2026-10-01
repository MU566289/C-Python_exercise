#include<stdio.h>
void printArr(int (*p)[3],int row)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",p[i][j]);
        }
    printf("\n");
    }
}
int main(void)
{
    int arr[2][3]={1,2,3,4,5,6};
    printArr(arr,2);
    return 0;
}