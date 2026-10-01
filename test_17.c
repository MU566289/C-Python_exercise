#include<stdio.h>
int main(void)
{
    int arr[3][2]={{10,20},{30,40},{50,60}};
    int brr[2][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            brr[j][i]=arr[i][j];
        }
    }
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",brr[i][j]);
            }
            printf("\n");
        }
    return 0;
}